#include "AnimTwoBone.h"
#include "TwoBones.h"

#include "Constants.h"

AnimTwoBone::AnimTwoBone()
{
    // here we initialize skeleton to the specific derived type
    this->skeleton = new TwoBones();

    // initialize result bucket 
    pResult = new FrameBucket();
    pResult->prevBucket = 0;
    pResult->nextBucket = 0;
    pResult->KeyTime = Time(TIME_ZERO);
    pResult->pBone = new Bone[this->skeleton->GetNumBones()]; 

    // set currentTime to start the animation, and speed at which to animate
    this->currentTime = Time(TIME_ZERO);
    this->delta = 0.1f;
    this->deltaTime = delta * Time(TIME_NTSC_30_FRAME);

    // Initialize the bone hierarchy, create the bones and attach them into a PCSTree
    this->SetAnimationData();
} 

// for AnimTwoBone, animation data was pulled from Converter but not via copy/paste code like other anims
void AnimTwoBone::SetAnimationData()
{
    FrameBucket* lastFrame = this->pResult;
    int numBones = this->skeleton->GetNumBones();

    // TwoBones only has 1 anim, so no need to specify the animation in its name

    // --------------- Frame 0 ------------------------------------

    // lastFrame is updated in addFrameBucket to be the current frame
    pResult->addFrameBucket(lastFrame, 0, numBones);

    // Bone 0 ---------------------------------

    //Local matrix
    //Trans: -113.894875, 0.000000, 0.000000
    //Rot: -0.000000, -0.000000, 0.005445
    //Scale: 1.000000, 1.000000, 1.000000

    lastFrame->pBone[0].T = Vect(-113.894875f, 0.000000f, 0.000000f);
    // Quat data now converted to radians in converter for anims that came after TwoBone
    lastFrame->pBone[0].Q = Quat(ROT_XYZ, 0.0f* MATH_PI_180 , 0.0f* MATH_PI_180, 0.005445f * MATH_PI_180 );
    lastFrame->pBone[0].S = Vect(1.0f, 1.0f, 1.0f);

    // Bone 1 --------------------------------------

    //	Trans: 114.826065, -0.000016, 0.000000
    //  Rot: 0.000000, 0.000000, -0.005444
    //  Scale: 1.000000, 1.000000, 1.000000

    lastFrame->pBone[1].T = Vect(114.826065f, -0.000016f, 0.000000f);
    // Quat data now converted to radians in converter for anims that came after TwoBone
    lastFrame->pBone[1].Q = Quat(ROT_XYZ, 0.000000f * MATH_PI_180, 0.000000f* MATH_PI_180, -0.005444f * MATH_PI_180);
    lastFrame->pBone[1].S = Vect(1.0f, 1.0f, 1.0f);

    // --------------- Frame 35 -----------------------------

    pResult->addFrameBucket(lastFrame, 35, numBones);

    // Bone 0 -------------------------------

    //Trans: -69.141525, 0.000000, 0.000000
    //Rot: -0.000000, -0.000000, 35.000000
    //Scale: 1.000000, 1.000000, 1.000000

    lastFrame->pBone[0].T = Vect(-69.141525f, 0.000000f, 0.000000f);
    lastFrame->pBone[0].Q = Quat(ROT_XYZ, 0.0f* MATH_PI_180, 0.0f* MATH_PI_180, 35.0f * MATH_PI_180);
    lastFrame->pBone[0].S = Vect(1.0f, 1.0f, 1.0f);

    // Bone 1 ---------------------------------

    //Trans: 114.826065, -0.000016, 0.000000
    //	Rot: -0.000000, 0.000000, -69.954391
    //Scale: 1.000000, 1.000000, 1.000000

    lastFrame->pBone[1].T = Vect(114.826065f, -0.000016f, 0.000000f);
    lastFrame->pBone[1].Q = Quat(ROT_XYZ, 0.000000f* MATH_PI_180 , 0.000000f* MATH_PI_180, -69.954391f * MATH_PI_180);
    lastFrame->pBone[1].S = Vect(1.0f, 1.0f, 1.0f);

    //------------------------- Frame 70 -----------------------------------

    pResult->addFrameBucket(lastFrame, 70, numBones);

    // Bone 0 ---------------------------------------
    //Trans: -39.924347, 0.000000, 0.000000
    //Rot: 0.000000, -0.000000, 0.000003
    //Scale: 1.000000, 1.000000, 1.000000

    lastFrame->pBone[0].T = Vect(-39.924347f, 0.000000f, 0.000000f);
    lastFrame->pBone[0].Q = Quat(ROT_XYZ, 0.0f* MATH_PI_180,0.0f* MATH_PI_180 ,0.000003f * MATH_PI_180);
    lastFrame->pBone[0].S = Vect(1.0f, 1.0f, 1.0f);


    // Bone 1--------------------------------------
    //Trans: 114.826065, -0.000016, 0.000000
    //Rot: 0.000000, 0.000000, -0.000000
    //Scale: 1.000000, 1.000000, 1.000000

    lastFrame->pBone[1].T = Vect(114.826065f, -0.000016f, 0.000000f);
    lastFrame->pBone[1].Q = Quat(ROT_XYZ, 0.000000f * MATH_PI_180, 0.000000f* MATH_PI_180, 0.0f * MATH_PI_180);
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f);	
}