#include "AnimTeddyBear.h"
#include "TeddyBearBones.h"

AnimTeddyBear::AnimTeddyBear()
{
    // here we initialize skeleton to the specific derived type
    skeleton = new TeddyBearBones();

    // initialize result bucket 
    pResult = new FrameBucket();
	pResult->prevBucket = 0;
	pResult->nextBucket = 0;
	pResult->KeyTime = Time(TIME_ZERO);
    pResult->pBone = new Bone[this->skeleton->GetNumBones()]; 
} 