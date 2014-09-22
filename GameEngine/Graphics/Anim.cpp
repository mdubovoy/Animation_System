#include "Anim.h"
#include "Constants.h"
#include "VectApp.h"
#include "QuatApp.h"
#include "FrameBucket.h"
#include "Skeleton.h"
#include "PyramidObject.h"

Time Anim::SetAnimCurrentTime(const Time& updatedTime)
{
    this->currentTime = updatedTime;
    return currentTime;
}

void Anim::ChangeDelta(const float value)
{
    this->delta += value;
    this->ResetDeltaTime();
}

void Anim::ReverseAnimation() 
{
    this->delta *= -1.0f; 
    this->ResetDeltaTime();
}

void Anim::StopAnimation()
{
    this->delta = 0.0f;
    this->ResetDeltaTime();
}

// on the fly way to calc max time - TODO when we do it offline, we know answer so we can put it in our structure 
// --> find max time to use in looping below
void Anim::findMaxTime( Time &tMax )
{
		FrameBucket *pTmp = this->pResult->nextBucket;
        
        // traverse to the last bucket
		while( pTmp->nextBucket != 0 )
		{
			pTmp = pTmp->nextBucket;
		}

		tMax = pTmp->KeyTime;
}

void Anim::ProcessAnimation(const Time& tCurr)
{
    // Get the result bone array - the first frame always - which will store interpolated results
	Bone *bResult = this->pResult->pBone;

	// now that we stored result, skip it to begin search
	FrameBucket* pTmp = this->pResult->nextBucket;
									  
    // keep looking until we find the bucket that we are in
	while( tCurr >= pTmp->KeyTime  && pTmp->nextBucket != 0 )
	{
		pTmp = pTmp->nextBucket;
	}

	// having found the bucket range, set the start and end buckets
	FrameBucket *startBucket = pTmp->prevBucket;
	FrameBucket *endBucket = pTmp;

    // we can determine % time between buckets - time "S"
    // Global time is from start to finish - Local time is within a given bucket
	float timeS = (tCurr - startBucket->KeyTime) / (endBucket->KeyTime - startBucket->KeyTime);
	
	// pointers to bone from bucket A, bone from Bucket B
	Bone* startBones = startBucket->pBone;
	Bone* endBones = endBucket->pBone;

    int numBones = this->skeleton->GetNumBones();
    // Interpolate to tS time, for all bones
	for( int i = 0; i < numBones; i++ )
	{
		// interpolate ahoy!
		VectApp::Lerp(bResult->T,  startBones->T, endBones->T, timeS);
		QuatApp::Slerp(bResult->Q, startBones->Q, endBones->Q, timeS);
		VectApp::Lerp(bResult->S,  startBones->S, endBones->S, timeS);
		
		// advance the pointer
		startBones++;
		endBones++;
		bResult++;
   }
} 

void Anim::LoopAnimation(Time& tCurr)
{
    Time maxTime;
	this->findMaxTime( maxTime );
	// keeps stride of animation
     if(tCurr > maxTime)
    {
        tCurr -= maxTime;
    }

    else if( tCurr < Time(TIME_ZERO) )
    {
        tCurr += maxTime;
    }

    else
    {
        // do nothing
    }

    // now update this animation's current time
    this->SetAnimCurrentTime(tCurr);
}