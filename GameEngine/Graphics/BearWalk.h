#ifndef BEAR_WALK_H
#define BEAR_WALK_H

#include "AnimTeddyBear.h"

class BearWalk : public AnimTeddyBear
{
public:
    BearWalk();   
        void SetAnimationData(); // fill in bone data at each key frame, called ONCE by constructor
};
#endif