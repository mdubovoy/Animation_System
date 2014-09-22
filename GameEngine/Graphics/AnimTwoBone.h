#ifndef ANIM_TWOBONE_H
#define ANIM_TWOBONE_H

#include "Anim.h"

class AnimTwoBone : public Anim
{
public:
    AnimTwoBone();
    // AnimTwoBone only has one animation - no child classes for specific anims
    void SetAnimationData(); 

};
#endif