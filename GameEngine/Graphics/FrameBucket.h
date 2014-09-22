#ifndef FRAME_BUCKET_H
#define FRAME_BUCKET_H

#include "Anim.h"
#include "Skeleton.h"
#include "Timer.h"

struct Bone;
class FrameBucket
{
public:
      
    // adds and links a new frame bucket, given a keyFrame to set the KeyTime and the numBones in the skeleton 
    void addFrameBucket(FrameBucket *&lastFrame, const int keyFrame, const int numBones);

// should make private
    Time		  KeyTime;
    FrameBucket *nextBucket;
    FrameBucket *prevBucket;
    Bone		  *pBone;
};

#endif