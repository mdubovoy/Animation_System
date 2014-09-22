#include "FrameBucket.h"

// always adds bucket at the end of list
void FrameBucket::addFrameBucket(FrameBucket *&lastFrame, const int KeyFrame, const int numBones )
{
    // create new bucket
    FrameBucket *pTmp = new FrameBucket();

    // link the new frame bucket and set its key time
	pTmp->prevBucket = lastFrame;
	pTmp->nextBucket = 0;			  
	pTmp->KeyTime = KeyFrame * Time(TIME_NTSC_30_FRAME);
    
    // initialize bone array
    pTmp->pBone = new Bone[numBones];
	
    // updates last frame nextBucket pointer to point to the new frame after linking
    lastFrame->nextBucket = pTmp;

    // set the 'last' Frame to point to the newest frame bucket just created 
    lastFrame = pTmp;
}