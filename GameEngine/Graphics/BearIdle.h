#ifndef BEAR_IDLE_H
#define BEAR_IDLE_H

#include "AnimTeddyBear.h"

class BearIdle : public AnimTeddyBear
{
public:
    BearIdle();   
        void SetAnimationData(); // fill in bone data at each key frame, called ONCE by constructor
};
#endif