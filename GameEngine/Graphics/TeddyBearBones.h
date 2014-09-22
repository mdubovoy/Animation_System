#ifndef TEDDYBEAR_BONES_H
#define TEDDYBEAR_BONES_H

#include "Skeleton.h"

class TeddyBearBones : public Skeleton
{
public:
        TeddyBearBones();
    // static TeddyBearBones* GetInstance();
    void SetBoneHierarchy(); // create hierarchy of bones

private:
    // static TeddyBearBones* PrivGetInstance();


};
#endif