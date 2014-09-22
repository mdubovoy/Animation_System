#ifndef ANIM_H
#define ANIM_H

#include "Timer.h"
#include "Vect.h"
#include "Quat.h"

class FrameBucket;
class GraphicsObject;
class Skeleton;

class Anim
{
public:
        // animation specific
        // picture: double-linked list with Result at head, followed by each frame
        // Each node's pBone points to an array of size numBones for that skeleton (all the bones)
        // we fill each bone's data, with the matrices provided by FBX output, at each key frame
        virtual void SetAnimationData() = 0;         
        // virtual void SetSkeleton() = 0;

        // these are called in the Game Loop inside GlobalState.cpp
        // determine which bucket we are in at a given time and interpolate, storing result in pResult
        void ProcessAnimation(const Time& tCurr); 
        void LoopAnimation(Time& tCurr);
            void findMaxTime(Time& tMax );  

        // accessors/mutators - should return a copy instead? Would need to overload = operator
        Skeleton* GetSkeleton() const {return this->skeleton;}
        FrameBucket* GetResultBucket() const {return this->pResult;}
        
        void ReverseAnimation(); 
        void StopAnimation(); 

        Time GetAnimCurrentTime() const {return this->currentTime;}
        Time GetDeltaTime() const {return this->deltaTime;}

        Time SetAnimCurrentTime(const Time& updatedTime);       
        void ChangeDelta(const float value);
              

// to be accessed in derived class
protected:
    // skeleton and result bucket initialized by AnimTeddyBear child abstract class
    Skeleton* skeleton;
    FrameBucket* pResult;
    // currentTime and delta/deltaTime initialized by grandchild class implementing SetAnimationData()
    Time currentTime;
    Time deltaTime; // when delta changes, deltaTime is always updated via call to ResetDeltaTime()
    float delta;

private:

    // called anytime this->delta changes value - in ChangeDelta(), ReverseAnimation(), and StopAnimation()
    void ResetDeltaTime() {this->deltaTime = this->delta * Time(TIME_NTSC_30_FRAME);}  
};


#endif