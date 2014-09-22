#ifndef SKELETON_H
#define SKELETON_H

#include "Anim.h"
// #include "PyramidObject.h"
#include "FrameBucket.h"

class PyramidObject;

// equivalent to JointPose in pg 502 - TODO - rename 
// best to picture a joint as a set of Cartesian coordinate aces
struct Bone 
{
   Vect  T;
   Quat  Q;
   Vect  S;
};

class Skeleton
{
public:    
    // unique to each skeleton - creates hierarchy of bones
    virtual void SetBoneHierarchy() = 0; 
        void SetFirstBone(PyramidObject* const bone) {this->firstBone = bone;}
    
    // common to every skeleton
    void updateSkeleton(GraphicsObject *node, FrameBucket* pResult);     // walks through each bone and sets its pose 


    // accessors
       void GetFirstBone(PyramidObject *&bone) {bone = this->firstBone;}
       int GetNumBones() const {return numBones;}

protected:
    int numBones; // make data-driven?
    // first bone's name includes the animation name, set in SetAnimationData
    PyramidObject* firstBone;

private:
    // only called from within updateSkeleton()
    void setBonePose(GraphicsObject * node, FrameBucket* pResult);
};

#endif