#ifndef ANIM_TEDDYBEAR_H
#define ANIM_TEDDYBEAR_H

#include "Anim.h"

// base abstract for any TeddyBear animations - inherits from Anim abstract class
// initializes the TeddyBear skeleton, which will be common to any TeddyBear animations
// also initializes and sets the result bucket for the skeleton - from here, result values will be unique to each anim
class AnimTeddyBear : public Anim
{
public:
    AnimTeddyBear();  
    // void SetSkeleton(){this->skeleton = TeddyBearBones::GetInstance();}
    virtual void SetAnimationData() = 0; 

};
#endif