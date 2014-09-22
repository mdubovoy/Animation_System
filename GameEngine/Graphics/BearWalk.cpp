#include "BearWalk.h"
#include "PyramidObject.h"
#include "FrameBucket.h"

BearWalk::BearWalk()
{    
    // set currentTime to start the animation, and speed at which to animate
    this->currentTime = Time(TIME_ZERO);
    this->delta = 0.1f;
    this->deltaTime = delta * Time(TIME_NTSC_30_FRAME);

    // Initialize the bone hierarchy, create the bones and attach them into a PCSTree
    this->SetAnimationData();
}

void BearWalk::SetAnimationData()
{
    // updated to always point to the current frame
    // allows faster prototyping - can be used to set pBone data - instead of pTmp, pTmp2, pTmp3, etc...
    FrameBucket* lastFrame = this->pResult;
    int numBones = this->skeleton->GetNumBones();

    // when debugging GOM tree, it helps to associate this animation to its skeleton
    PyramidObject* firstBone;
    this->GetSkeleton()->GetFirstBone(firstBone);
    firstBone->setName("Bip01 - Walk");

    // lastFrame is updated in addFrameBucket to be the current frame
// ---------------Key Time: 0  ms: 0 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 0, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 0.970236f, -2.711161f, 1.899864f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.624573f, -1.264373f, 3.121366f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.047765f, 0.020883f, 0.010792f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.300546f, -0.567644f, 13.531080f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.060995f, 0.095672f, -3.015697f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.348718f, -0.021303f, -0.650505f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.103780f, -0.201808f, 0.767066f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.729567f, 0.737561f, -13.774520f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.118021f, 0.054987f, 2.213239f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.023962f, 0.004592f, -0.865707f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.001414f, 0.038321f, 0.268111f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095342f, 0.042221f, 0.018989f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.204811f, 0.010239f, -0.060075f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.056449f, 1.119313f, 5.345238f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.012052f, -1.036376f, 2.183302f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.141163f, 0.660794f, 0.057318f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.012400f, 0.002757f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.645437f, 0.044597f, -0.613745f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000082f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.583676f, 0.166629f, -0.123964f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.055393f, -1.102072f, -5.348833f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.402011f, 1.128657f, 2.673232f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.103288f, -0.809167f, 0.449669f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000577f, -0.000088f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.818463f, -0.029294f, -0.231554f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.566849f, -0.070789f, -0.100040f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.191348f, -0.036722f, 0.254348f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 1  ms: 33 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 1, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 1.849216f, -3.682207f, 1.335635f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.624670f, -1.290109f, 3.130007f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.053292f, 0.025800f, 0.010692f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.367048f, -0.641366f, 13.496590f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.068367f, 0.120414f, -2.965829f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.324466f, -0.019808f, -0.627606f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.102957f, -0.186260f, 0.802738f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.661640f, 0.814576f, -13.798210f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.111218f, 0.039966f, 2.187612f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.030066f, 0.004231f, -0.864004f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.002249f, -0.042377f, 0.186320f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.106372f, 0.052092f, 0.018413f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.204465f, 0.001706f, -0.073168f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.009947f, 1.117512f, 5.345905f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.011819f, -1.042900f, 2.197518f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.138620f, 0.663902f, 0.057334f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000623f, 0.000198f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.659133f, 0.048044f, -0.653231f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000082f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.584586f, 0.175301f, -0.121555f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.008690f, -1.100281f, -5.349482f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.393472f, 1.139374f, 2.700089f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.100755f, -0.812855f, 0.449885f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, 0.000176f, 0.000153f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.813545f, -0.028175f, -0.211810f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.567071f, -0.073978f, -0.097455f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.188528f, -0.043045f, 0.251530f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 2  ms: 66 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 2, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 2.559613f, -4.820625f, 0.807654f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.651774f, -1.328626f, 3.109358f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.060823f, 0.030485f, 0.012140f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.430149f, -0.732482f, 13.461990f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.070328f, 0.127781f, -2.917873f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.283292f, -0.019720f, -0.624020f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.106415f, -0.173676f, 0.847185f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.596685f, 0.928764f, -13.817480f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.100217f, 0.031348f, 2.203141f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087422f, 0.001052f, -0.831321f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.006155f, -0.135256f, 0.087510f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.121376f, 0.061604f, 0.020826f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.202676f, -0.010824f, -0.084292f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.058379f, 1.107880f, 5.347602f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.018151f, -1.051632f, 2.202647f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.131469f, 0.673224f, 0.058001f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000638f, 0.000191f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.672984f, 0.051312f, -0.687508f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000082f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.586217f, 0.188735f, -0.122430f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.059850f, -1.090654f, -5.351128f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.388875f, 1.144479f, 2.719413f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.095281f, -0.821228f, 0.445243f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000636f, -0.000110f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.807391f, -0.027032f, -0.183771f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.565816f, -0.064428f, -0.093637f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.181552f, -0.046188f, 0.249624f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 3  ms: 100 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 3, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 3.080650f, -5.935921f, 0.180111f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.702839f, -1.378956f, 3.065481f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.068606f, 0.033833f, 0.012427f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.475285f, -0.834019f, 13.434450f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.065515f, 0.107671f, -2.885550f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.200336f, -0.020123f, -0.659933f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.107715f, -0.156771f, 0.873369f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.550339f, 1.039276f, -13.828350f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.073914f, 0.062401f, 2.204732f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.149287f, -0.004462f, -0.839591f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.011289f, 0.017234f, -0.026588f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.136926f, 0.068386f, 0.020930f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.200706f, -0.015178f, -0.097583f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.082038f, 1.097273f, 5.349479f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.013787f, -1.059423f, 2.220898f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.124427f, 0.695644f, 0.047606f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.002248f, 0.000674f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.686527f, 0.053035f, -0.696319f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000082f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.588506f, 0.197356f, -0.141726f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.083741f, -1.080058f, -5.352953f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.363947f, 1.149070f, 2.761519f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.077571f, -0.824910f, 0.421713f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000194f, 0.000024f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.807806f, -0.025578f, -0.135432f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.566043f, -0.064301f, -0.102912f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.172725f, -0.056284f, 0.261669f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 4  ms: 133 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 4, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 3.521286f, -6.142822f, -0.184750f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.814112f, -1.428722f, 2.954906f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.076338f, 0.042306f, 0.008912f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.589337f, -0.954719f, 13.370780f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.045212f, 0.077102f, -2.896038f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.109989f, -0.022677f, -0.779769f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.095364f, -0.124625f, 0.846360f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.432866f, 1.128621f, -13.867910f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.059966f, 0.070836f, 2.218847f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.168750f, -0.004615f, -0.897350f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.008212f, 0.015747f, -0.029608f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.152528f, 0.085111f, 0.012994f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.211928f, -0.036995f, -0.094086f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.201175f, 1.156585f, 5.333807f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.004775f, -1.054696f, 2.228744f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.116218f, 0.721306f, 0.032951f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000442f, 0.000085f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.724992f, 0.052341f, -0.653925f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000082f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.589645f, 0.194646f, -0.182686f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.202811f, -1.139398f, -5.337445f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.327258f, 1.142041f, 2.789321f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.055350f, -0.822235f, 0.388331f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000708f, -0.000115f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.818688f, -0.024577f, -0.045774f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.566299f, -0.065462f, -0.115560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.162291f, -0.062710f, 0.276245f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 5  ms: 166 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 5, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 3.580180f, -5.973682f, -0.343237f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 2.003191f, -1.455347f, 2.759081f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.078955f, 0.047278f, 0.002584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.656324f, -1.025085f, 13.332400f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.027481f, 0.030159f, -2.903792f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.012259f, -0.026042f, -0.891846f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.082862f, -0.117104f, 0.756842f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.364012f, 1.129087f, -13.894700f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.050321f, 0.065857f, 2.249065f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.176290f, -0.001879f, -0.975466f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.000621f, -0.058322f, 0.054393f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.158084f, 0.094554f, -0.000168f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.218866f, -0.053245f, -0.077946f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.289979f, 1.192711f, 5.321751f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.988013f, -1.058042f, 2.232020f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.093004f, 0.759274f, 0.048985f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000071f, -0.000089f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.762605f, 0.049853f, -0.607640f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000082f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.587345f, 0.182691f, -0.205773f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.291334f, -1.175523f, -5.325499f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.262909f, 1.138003f, 2.835746f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.063001f, -0.816578f, 0.391013f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000011f, 0.000100f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.856490f, -0.023958f, -0.037067f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.568327f, -0.083352f, -0.111419f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.150936f, -0.053558f, 0.289431f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 6  ms: 200 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 6, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 3.451018f, -5.464783f, 0.018024f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 2.236743f, -1.456398f, 2.515219f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.073432f, 0.049660f, 0.003894f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.688056f, -0.942405f, 13.322590f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.008768f, -0.027241f, -2.918211f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.082271f, -0.030508f, -1.020630f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.072118f, -0.120664f, 0.647919f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.330676f, 1.061123f, -13.912840f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.059350f, 0.060210f, 2.300501f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.179144f, 0.000921f, -1.038701f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.000910f, -0.153339f, 0.132482f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.146976f, 0.099419f, 0.002539f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.217788f, -0.063335f, -0.081184f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.344969f, 1.186275f, 5.319908f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.977715f, -1.059558f, 2.245525f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.060241f, 0.801118f, 0.089059f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000849f, 0.000336f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.764798f, 0.046213f, -0.568218f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000082f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.584537f, 0.170981f, -0.213083f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.346380f, -1.169084f, -5.323622f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.248313f, 1.117032f, 2.847506f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.057036f, -0.807177f, 0.385402f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000312f, -0.000006f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.877783f, -0.023913f, -0.032898f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.569602f, -0.100730f, -0.105726f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.140443f, -0.041052f, 0.303770f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 7  ms: 233 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 7, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 2.838766f, -4.633778f, 0.405576f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 2.517321f, -1.463172f, 2.219733f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.068441f, 0.050783f, 0.005791f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.702901f, -0.863988f, 13.320410f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 2.983908f, -0.112928f, -2.987978f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.170156f, -0.037084f, -1.205630f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.049092f, -0.067565f, 0.509919f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.314929f, 1.003463f, -13.923130f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.066619f, 0.066282f, 2.379782f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.173736f, 0.003644f, -1.062866f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.000652f, -0.151057f, 0.206987f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.136886f, 0.101790f, 0.006510f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.206744f, -0.070979f, -0.074007f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.386686f, 1.126879f, 5.329941f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.960715f, -1.070591f, 2.253798f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.041536f, 0.848676f, 0.110679f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000572f, 0.000280f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.789029f, 0.039590f, -0.503130f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000081f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.582597f, 0.164157f, -0.220776f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.387962f, -1.109637f, -5.333463f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.269899f, 1.091767f, 2.812722f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.058494f, -0.804292f, 0.391095f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000462f, -0.000048f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.873409f, -0.024418f, -0.063882f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.568836f, -0.097069f, -0.115528f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.130291f, -0.030056f, 0.296635f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 8  ms: 266 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 8, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 2.085836f, -3.609762f, 0.716252f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 2.894800f, -1.471522f, 1.825253f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.062256f, 0.049257f, 0.006787f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.682542f, -0.776248f, 13.336070f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 2.978739f, -0.206146f, -3.111899f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.220649f, -0.038670f, -1.399094f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.031455f, 0.005599f, 0.336514f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.336171f, 0.922801f, -13.920600f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.077099f, 0.065305f, 2.485824f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.139023f, 0.009749f, -1.054121f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.001490f, -0.147562f, 0.295230f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.124435f, 0.098796f, 0.008915f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.173604f, -0.054926f, -0.067634f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.299232f, 0.950614f, 5.369769f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.901384f, -1.082054f, 2.300490f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.033524f, 0.892498f, 0.121710f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000572f, 0.000385f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.851791f, 0.032215f, -0.425167f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000081f, 0.000072f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.580733f, 0.159293f, -0.217599f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.300424f, -0.933267f, -5.372749f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.347538f, 1.079255f, 2.734561f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.067992f, -0.809045f, 0.410003f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, 0.000125f, 0.000128f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.849644f, -0.025308f, -0.133310f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.564882f, -0.067672f, -0.140758f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.112765f, -0.036621f, 0.295145f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 9  ms: 300 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 9, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 1.512756f, -2.702288f, 1.005490f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -3.050727f, -1.470720f, 1.473433f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.051056f, 0.042021f, 0.006448f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.585657f, -0.631323f, 13.391760f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.001213f, -0.276431f, 3.027159f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.209822f, -0.036548f, -1.535007f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.032088f, 0.032202f, 0.092665f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.436934f, 0.762813f, -13.891240f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.092261f, 0.057137f, 2.591580f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099989f, 0.015023f, -1.028554f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.004197f, -0.137985f, 0.370855f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.102001f, 0.084281f, 0.009161f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.133252f, -0.032753f, -0.063306f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.178298f, 0.733926f, 5.408994f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.827592f, -1.091555f, 2.361170f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.019166f, 0.918002f, 0.144212f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000566f, 0.000389f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.896970f, 0.026229f, -0.357250f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000081f, 0.000071f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.579742f, 0.157712f, -0.214081f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.179405f, -0.716468f, -5.411300f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.429738f, 1.056470f, 2.654152f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.070428f, -0.813363f, 0.416206f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000488f, -0.000058f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.796458f, -0.026828f, -0.198517f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.561261f, -0.040811f, -0.145535f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.092148f, -0.032297f, 0.305984f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 10  ms: 333 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 10, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 1.495171f, -1.854068f, 1.402145f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.867626f, -1.465084f, 1.286162f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.035481f, 0.032394f, 0.007703f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.456293f, -0.417351f, 13.462990f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.036427f, -0.308958f, 2.901255f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.182567f, -0.033603f, -1.620753f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.034670f, 0.009300f, -0.027349f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.570634f, 0.552039f, -13.848220f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.114426f, 0.051322f, 2.685772f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.079153f, 0.018220f, -0.995541f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.006347f, -0.135904f, 0.430432f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.070784f, 0.065017f, 0.012669f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.093726f, -0.020170f, -0.059053f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.109632f, 0.519784f, 5.435572f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.743441f, -1.100252f, 2.431984f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.007263f, 0.926589f, 0.169176f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000550f, 0.000388f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.916693f, 0.021940f, -0.299087f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000080f, 0.000071f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.579707f, 0.158136f, -0.206780f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( -0.110662f, -0.502246f, -5.437202f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.521981f, 1.031043f, 2.563292f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.060409f, -0.825723f, 0.402945f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000411f, -0.000048f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.747303f, -0.028590f, -0.251033f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.555862f, -0.005454f, -0.151767f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.071614f, -0.026578f, 0.309501f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 11  ms: 366 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 11, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 1.351138f, -1.020213f, 1.831257f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.743189f, -1.460718f, 1.159314f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.015894f, 0.017584f, 0.008324f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.256018f, -0.151355f, 13.562760f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.081891f, -0.323495f, 2.752726f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.211490f, -0.027520f, -1.691835f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.029921f, 0.027041f, 0.011055f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.775205f, 0.283107f, -13.772270f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.138575f, 0.035434f, 2.782074f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.061509f, 0.020513f, -0.942616f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.008681f, -0.137477f, 0.473768f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.031655f, 0.035287f, 0.014780f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.046530f, 0.004486f, -0.048892f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.024929f, 0.262816f, 5.455086f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.672089f, -1.114477f, 2.481684f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.012961f, 0.937851f, 0.210419f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000527f, 0.000383f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.925389f, 0.019703f, -0.258993f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000080f, 0.000071f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.580741f, 0.164916f, -0.178324f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.024075f, -0.245212f, -5.455911f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.597848f, 0.990606f, 2.482626f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.045825f, -0.813595f, 0.384792f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000162f, 0.000039f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.705895f, -0.031527f, -0.301164f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.552273f, 0.016609f, -0.154960f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.050679f, -0.024169f, 0.302480f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 12  ms: 400 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 12, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 1.087648f, -0.583442f, 2.526230f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.695662f, -1.456408f, 1.108411f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.004204f, 0.003911f, 0.011678f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.069733f, 0.141772f, 13.647240f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.121528f, -0.317971f, 2.594772f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.259046f, -0.022554f, -1.717491f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.021511f, 0.064182f, 0.074153f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.962764f, 0.026791f, -13.695020f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.111837f, 0.013256f, 2.864009f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.052131f, 0.022388f, -0.900609f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.009291f, -0.142983f, 0.515472f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.008458f, 0.007779f, 0.021781f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.004726f, 0.023505f, -0.045630f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.128744f, 0.034604f, 5.459842f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.604967f, -1.129852f, 2.535810f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.029270f, 0.937772f, 0.246028f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000500f, 0.000378f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.924683f, 0.018428f, -0.232489f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000079f, 0.000070f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.583130f, 0.183593f, -0.149230f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.127972f, -0.016976f, -5.459943f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.658553f, 0.938671f, 2.418820f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.032145f, -0.780086f, 0.364855f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000084f, 0.000062f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.669899f, -0.036949f, -0.350855f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.549030f, 0.032104f, -0.155319f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.033196f, -0.017292f, 0.294152f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 13  ms: 433 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 13, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 0.745596f, -0.792079f, 3.032356f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.677280f, -1.458784f, 1.083325f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.023619f, -0.009976f, 0.016114f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.879236f, 0.435336f, 13.724230f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.129160f, -0.309560f, 2.454699f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.294754f, -0.020984f, -1.686983f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.015081f, 0.059613f, 0.121421f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.151959f, -0.210429f, -13.609500f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.095699f, -0.015476f, 2.915605f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.047738f, 0.023665f, -0.891055f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.008211f, -0.148340f, 0.566678f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.047095f, -0.020308f, 0.030398f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.034943f, 0.054650f, -0.058054f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.298835f, -0.181728f, 5.450257f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.538572f, -1.144352f, 2.605960f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.040696f, 0.937394f, 0.273565f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000474f, 0.000374f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.931714f, 0.017222f, -0.215694f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000078f, 0.000070f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.584113f, 0.197758f, -0.130371f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.297808f, 0.199332f, -5.449697f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.714411f, 0.886975f, 2.374644f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.016827f, -0.723065f, 0.341970f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.025964f, -0.005078f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.670755f, -0.044661f, -0.398769f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.545940f, 0.046504f, -0.158631f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.020555f, -0.014758f, 0.289412f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 14  ms: 466 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 14, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 0.420889f, -1.442035f, 3.625495f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.681034f, -1.463564f, 1.078116f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.040019f, -0.020170f, 0.019106f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.738610f, 0.680692f, 13.773700f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.107010f, -0.300321f, 2.344486f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.299858f, -0.022541f, -1.605814f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.012910f, 0.030838f, 0.152449f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.290031f, -0.413054f, -13.541580f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.091198f, -0.046489f, 2.956640f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.038597f, 0.025115f, -0.903080f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.005623f, -0.151279f, 0.629754f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.079695f, -0.041052f, 0.035809f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.066283f, 0.071876f, -0.080371f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.392910f, -0.352039f, 5.435927f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.486058f, -1.152016f, 2.673501f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.057666f, 0.924018f, 0.304644f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000451f, 0.000372f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.953043f, 0.016199f, -0.203209f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000078f, 0.000069f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.585272f, 0.217041f, -0.119306f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.391514f, 0.369596f, -5.434866f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.762760f, 0.855723f, 2.351470f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.004555f, -0.671832f, 0.299603f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000076f, -0.000105f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.675878f, -0.052259f, -0.433062f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.544713f, 0.046397f, -0.170041f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.008367f, -0.007581f, 0.294701f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 15  ms: 500 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 15, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 0.115211f, -2.220148f, 4.372371f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.583800f, -1.462564f, 0.972610f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.047177f, -0.027474f, 0.022712f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.637249f, 0.802885f, 13.808930f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.099742f, -0.276977f, 2.260572f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.282034f, -0.023468f, -1.454374f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.011696f, 0.015387f, 0.142810f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.388315f, -0.486126f, -13.493060f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.091936f, -0.071089f, 3.012900f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.024160f, 0.027423f, -0.904486f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.003498f, -0.146161f, 0.698280f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.093802f, -0.055942f, 0.042536f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.085267f, 0.074376f, -0.097844f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.406697f, -0.455091f, 5.427258f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.423546f, -1.160139f, 2.751257f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.061015f, 0.909305f, 0.316694f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000434f, 0.000371f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.973286f, 0.014976f, -0.190741f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000077f, 0.000068f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.584962f, 0.224824f, -0.109824f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.404963f, 0.472597f, -5.425889f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.798536f, 0.829984f, 2.332629f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.030888f, -0.620130f, 0.255091f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000700f, -0.000160f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.689384f, -0.059678f, -0.459468f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.544522f, 0.047604f, -0.168847f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.001365f, 0.005485f, 0.289952f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 16  ms: 533 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 16, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.042185f, -2.758780f, 4.664886f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.424813f, -1.466447f, 0.807488f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.054609f, -0.033660f, 0.020279f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.551884f, 0.892769f, 13.837930f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.098568f, -0.245535f, 2.226984f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.244699f, -0.021220f, -1.222078f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.011244f, -0.016427f, 0.111508f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.472013f, -0.598828f, -13.448550f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.091757f, -0.093714f, 3.087466f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.007181f, 0.027580f, -0.862119f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.004482f, -0.137343f, 0.743802f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.108654f, -0.068325f, 0.037130f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.108035f, 0.076748f, -0.103727f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.419652f, -0.578432f, 5.414514f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.351176f, -1.170501f, 2.826821f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.063245f, 0.903230f, 0.330965f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000428f, 0.000371f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.988224f, 0.014430f, -0.176618f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000076f, 0.000068f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.584803f, 0.229204f, -0.098258f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.417836f, 0.595894f, -5.412762f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.826918f, 0.814015f, 2.316066f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.057234f, -0.578815f, 0.217238f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000802f, -0.000126f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.694479f, -0.063944f, -0.471549f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.543428f, 0.060414f, -0.162042f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.009770f, 0.013575f, 0.285019f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 17  ms: 566 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 17, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.059924f, -2.962282f, 4.915075f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.302589f, -1.472631f, 0.682177f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016934f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.061648f, -0.038539f, 0.014561f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.484912f, 0.957488f, 13.860340f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.097407f, -0.212546f, 2.244371f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.181871f, -0.013742f, -0.928572f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.008706f, -0.037858f, 0.047400f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.538342f, -0.725858f, -13.410180f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.095835f, -0.113494f, -3.095094f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, 0.008352f, 0.025339f, -0.767499f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.007535f, -0.127529f, 0.758374f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.122907f, -0.077847f, 0.025154f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.124183f, 0.079620f, -0.101822f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.435271f, -0.665634f, 5.403249f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.290734f, -1.190147f, 2.886993f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.067523f, 0.916919f, 0.351050f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000461f, 0.000371f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.977127f, 0.014698f, -0.161530f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000075f, 0.000067f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.585603f, 0.244963f, -0.068705f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.433492f, 0.683070f, -5.401217f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.846360f, 0.808062f, 2.301121f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.082143f, -0.550107f, 0.193021f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000740f, -0.000069f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.697876f, -0.066506f, -0.479444f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000104f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.541847f, 0.080797f, -0.152182f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.017838f, 0.016996f, 0.291346f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 18  ms: 600 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 18, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.092059f, -3.184256f, 4.939685f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.185850f, -1.479994f, 0.563697f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016844f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.064386f, -0.038889f, 0.008216f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.480478f, 0.957462f, 13.862060f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.088949f, -0.182595f, 2.270422f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.122574f, 0.000028f, -0.623738f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.005922f, -0.051081f, -0.058762f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.543499f, -0.800528f, -13.403390f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.104314f, -0.123878f, -2.978805f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, 0.010909f, 0.021284f, -0.639054f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.009948f, -0.121737f, 0.752274f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.128638f, -0.078172f, 0.012332f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.122612f, 0.069778f, -0.098540f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.381636f, -0.657628f, 5.408282f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.284118f, -1.217732f, 2.897304f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.092269f, 0.941284f, 0.392740f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000409f, 0.000371f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.941164f, 0.016091f, -0.150097f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000074f, 0.000066f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.587804f, 0.260786f, -0.061217f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.379926f, 0.675072f, -5.406253f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.847410f, 0.817152f, 2.299880f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.103958f, -0.530921f, 0.172576f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000739f, -0.000020f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.677078f, -0.068492f, -0.504560f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000106f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.545232f, 0.078656f, -0.132109f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.023138f, 0.022954f, 0.297951f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 19  ms: 633 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 19, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.218599f, -3.364302f, 4.628236f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -2.052267f, -1.485817f, 0.427153f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016924f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.064191f, -0.040870f, 0.004107f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.453230f, 0.930776f, 13.874650f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.069178f, -0.168637f, 2.214684f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.085122f, 0.003311f, -0.497993f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.005221f, -0.058966f, -0.097547f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.570345f, -0.821742f, -13.388990f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.116771f, -0.136108f, -2.843249f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, 0.015058f, 0.015257f, -0.450106f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.014899f, -0.112836f, 0.706130f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.128415f, -0.081865f, 0.003993f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.121652f, 0.080737f, -0.098624f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.441314f, -0.651891f, 5.404433f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.294820f, -1.235522f, 2.890885f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.130014f, 0.968885f, 0.441122f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000356f, 0.000371f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.914870f, 0.016899f, -0.147972f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000073f, 0.000066f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.591473f, 0.284292f, -0.071789f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.439605f, 0.669340f, -5.402444f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.860914f, 0.833368f, 2.290895f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.120628f, -0.510994f, 0.153702f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000642f, -0.000001f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.669140f, -0.070595f, -0.534941f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000109f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.550136f, 0.061832f, -0.117195f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.025067f, 0.015860f, 0.288459f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 20  ms: 666 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 20, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.614698f, -3.670427f, 3.907164f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.930801f, -1.493535f, 0.302426f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016924f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.063097f, -0.041995f, 0.002954f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.437526f, 0.909069f, 13.882210f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.062670f, -0.160113f, 2.147790f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.014384f, -0.001096f, -0.492625f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.010089f, -0.066347f, 0.043987f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.585438f, -0.813554f, -13.382040f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.131204f, -0.145459f, -2.695383f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, 0.010414f, 0.006832f, -0.204281f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.020800f, -0.105657f, 0.616206f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.126279f, -0.084042f, 0.001660f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.112200f, 0.074877f, -0.115263f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.409564f, -0.601072f, 5.412821f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.343183f, -1.252708f, 2.864693f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.164857f, 0.982196f, 0.478227f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000355f, 0.000368f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.906923f, 0.017198f, -0.153696f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000072f, 0.000065f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.595199f, 0.296832f, -0.102568f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.407550f, 0.618508f, -5.411011f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.857393f, 0.844878f, 2.309828f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.130433f, -0.491096f, 0.139351f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000745f, 0.000048f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.672164f, -0.074023f, -0.572750f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000115f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.553982f, 0.046080f, -0.109010f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.025857f, 0.021111f, 0.281302f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 21  ms: 700 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 21, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.140201f, -4.368587f, 3.125632f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.874975f, -1.504992f, 0.242319f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016923f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.062964f, -0.041653f, 0.005042f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.442210f, 0.919641f, 13.879680f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.061709f, -0.160078f, 2.119689f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.071671f, -0.006606f, -0.488220f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.023852f, -0.125200f, 0.198024f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.580740f, -0.799384f, -13.385200f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.132143f, -0.143152f, -2.636882f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.012265f, 0.004540f, -0.144249f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.020635f, -0.102361f, 0.621719f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.125924f, -0.083488f, 0.005863f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.108951f, 0.077316f, -0.151539f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.423159f, -0.583414f, 5.413705f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.356248f, -1.249789f, 2.889005f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.184220f, 0.983079f, 0.492914f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000354f, 0.000362f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.915164f, 0.017118f, -0.165414f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000071f, 0.000064f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.597644f, 0.303203f, -0.131531f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.420523f, 0.600778f, -5.412013f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.881343f, 0.865289f, 2.325922f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.138615f, -0.472784f, 0.121624f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000762f, 0.000092f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.684260f, -0.077122f, -0.612987f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000121f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.557138f, 0.028301f, -0.107590f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.026672f, 0.000720f, 0.296310f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 22  ms: 733 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 22, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.979282f, -5.105843f, 1.970479f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.769162f, -1.512045f, 0.130849f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016923f, -0.014115f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.061727f, -0.041379f, 0.006374f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.445940f, 0.910374f, 13.878820f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.064981f, -0.146023f, 2.087418f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.131131f, -0.010444f, -0.516538f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.011856f, -0.061018f, 0.158705f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.576995f, -0.774926f, -13.388470f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.137564f, -0.146864f, -2.610955f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.020936f, 0.004578f, -0.144882f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.017442f, -0.101361f, 0.655996f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.123389f, -0.083022f, 0.008599f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.103329f, 0.079473f, -0.174262f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.435095f, -0.552903f, 5.415963f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.376007f, -1.246196f, 2.893065f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.189384f, 0.977192f, 0.494004f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000354f, 0.000356f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.920569f, 0.017072f, -0.182333f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000070f, 0.000063f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.600886f, 0.312608f, -0.161056f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.432065f, 0.570216f, -5.414411f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.891103f, 0.881644f, 2.340570f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.144630f, -0.454905f, 0.111358f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000750f, 0.000113f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.690219f, -0.080184f, -0.650515f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000127f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.558862f, 0.017165f, -0.105527f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.026153f, -0.005701f, 0.293729f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 23  ms: 766 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 23, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.049559f, -5.927010f, 0.280116f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.549875f, -1.529267f, -0.097096f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016922f, -0.014115f, 0.000008f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.062893f, -0.040589f, 0.005055f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.457065f, 0.918366f, 13.873950f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067668f, -0.138235f, 2.070999f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.160511f, -0.012511f, -0.551269f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.000698f, 0.020089f, 0.085328f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.566516f, -0.798782f, -13.392240f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.138578f, -0.145838f, -2.591424f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.041489f, 0.004642f, -0.146461f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.015231f, -0.100114f, 0.685615f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.125776f, -0.081362f, 0.005961f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.096025f, 0.082844f, -0.187153f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.453547f, -0.513202f, 5.418349f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.389701f, -1.243659f, 2.894011f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.181522f, 0.973794f, 0.487862f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000354f, 0.000353f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.917091f, 0.017196f, -0.194230f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000068f, 0.000062f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.597670f, 0.294622f, -0.158947f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.450312f, 0.530490f, -5.416964f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.890260f, 0.888222f, 2.352213f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.144068f, -0.442443f, 0.115295f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000646f, 0.000125f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.693065f, -0.083399f, -0.675069f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000133f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.559383f, 0.017259f, -0.106353f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.022494f, 0.000463f, 0.290053f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 24  ms: 800 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 24, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.743819f, -6.739059f, -1.275618f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.028456f, -1.557629f, -0.621985f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016922f, -0.014115f, 0.000333f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.066804f, -0.043143f, 0.003174f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.421480f, 0.962259f, 13.884940f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.069458f, -0.147156f, 2.067063f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.156954f, -0.020022f, -0.668424f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.002938f, 0.009157f, 0.151026f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.601032f, -0.861319f, -13.371400f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.118077f, -0.128800f, -2.566092f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.090759f, 0.003732f, -0.146546f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.018762f, -0.089728f, 0.673997f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.133700f, -0.086369f, 0.001866f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.084282f, 0.080095f, -0.189376f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.438620f, -0.449652f, 5.425226f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.409685f, -1.246243f, 2.879596f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.167031f, 0.967018f, 0.482022f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000353f, 0.000360f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.886501f, 0.017547f, -0.197155f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000067f, 0.000062f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.592454f, 0.262924f, -0.142625f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.435304f, 0.466942f, -5.424031f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.863397f, 0.884046f, 2.374102f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.136047f, -0.448393f, 0.125806f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000693f, 0.000129f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.693308f, -0.085138f, -0.673253f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000139f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.558306f, 0.030794f, -0.110765f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.015154f, 0.036809f, 0.286704f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 25  ms: 833 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 25, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.933082f, -7.007935f, -2.309389f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.280330f, -1.545893f, -2.926466f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016921f, -0.014115f, -0.000009f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.074261f, -0.050080f, -0.001777f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.325019f, 1.038821f, 13.916690f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.065522f, -0.146367f, 2.089662f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.110112f, -0.020986f, -0.721712f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.012557f, 0.069002f, 0.099093f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.693723f, -0.987298f, -13.316480f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.080180f, -0.101254f, -2.535433f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.150176f, 0.002680f, -0.143823f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.027915f, -0.063864f, 0.589564f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.148938f, -0.099827f, -0.008883f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.089131f, 0.091635f, -0.187284f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.501389f, -0.475465f, 5.417585f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.375337f, -1.232653f, 2.909157f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.146759f, 0.954691f, 0.470336f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000353f, 0.000341f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.847603f, 0.017328f, -0.180011f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000066f, 0.000061f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.587467f, 0.221124f, -0.131486f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.498123f, 0.492760f, -5.416338f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.856756f, 0.876097f, 2.376988f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.117400f, -0.481102f, 0.141720f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000800f, 0.000081f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.721484f, -0.081742f, -0.612865f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000142f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.552222f, 0.059357f, -0.142333f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.002284f, 0.058816f, 0.296891f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 26  ms: 866 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 26, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.293897f, -7.202480f, -3.182208f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.343781f, -1.525519f, -2.976460f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016920f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.075160f, -0.055528f, -0.010024f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.248755f, 1.004023f, 13.948200f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.057271f, -0.134966f, 2.120233f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.063720f, -0.014033f, -0.692927f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.010139f, 0.086055f, -0.076709f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.766216f, -1.046009f, -13.275310f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.038923f, -0.055008f, -2.599965f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.193556f, 0.007362f, -0.374995f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.014553f, -0.077084f, 0.608519f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.151272f, -0.110078f, -0.025853f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.098159f, 0.097909f, -0.180817f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.535437f, -0.524028f, 5.409837f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.310325f, -1.218149f, 2.964433f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.130443f, 0.936070f, 0.463939f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000360f, 0.000298f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.829380f, 0.017057f, -0.169846f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000065f, 0.000060f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.586627f, 0.209622f, -0.121292f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.532298f, 0.541334f, -5.408445f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.843307f, 0.868021f, 2.385017f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.096389f, -0.519648f, 0.165982f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000744f, -0.000022f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.760470f, -0.075961f, -0.545446f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000180f, -0.000144f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.543471f, 0.099810f, -0.160051f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.008114f, 0.072747f, 0.311551f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 27  ms: 900 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 27, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.487148f, -7.185501f, -3.729600f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.462632f, -1.522481f, -3.080174f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016919f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.071592f, -0.061301f, -0.014479f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.167661f, 0.929669f, 13.983590f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.053782f, -0.136513f, 2.144540f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.049870f, -0.010989f, -0.736626f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.011503f, 0.033901f, -0.135214f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.842711f, -1.022559f, -13.237880f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.016794f, -0.008976f, -2.636926f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.232632f, 0.012107f, -0.527144f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.007094f, -0.068261f, 0.532885f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.144526f, -0.121338f, -0.035011f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.111641f, 0.118856f, -0.179923f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.649160f, -0.595534f, 5.389955f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.284126f, -1.194679f, 2.982392f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.129218f, 0.918234f, 0.471316f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000367f, 0.000254f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.849168f, 0.017082f, -0.175005f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000064f, 0.000059f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.586783f, 0.211881f, -0.115498f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.646026f, 0.612826f, -5.388391f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.850890f, 0.873219f, 2.382681f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.070199f, -0.570949f, 0.208218f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000649f, -0.000106f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.732028f, -0.069634f, -0.501635f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000181f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.537089f, 0.118425f, -0.173138f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.012663f, 0.071337f, 0.318290f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 28  ms: 933 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 28, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.881800f, -6.908234f, -4.168232f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.630231f, -1.514058f, 3.046975f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016918f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.064275f, -0.063185f, -0.013069f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.141232f, 0.836402f, 13.999160f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.064013f, -0.152263f, 2.171018f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.042834f, -0.009857f, -0.819732f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.012814f, -0.025347f, -0.097499f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.867721f, -0.916367f, -13.232650f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.002058f, 0.045475f, -2.696591f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.267917f, 0.018955f, -0.720983f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.003631f, -0.076682f, 0.491983f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.129815f, -0.125338f, -0.031873f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.106763f, 0.129623f, -0.181275f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.707512f, -0.568453f, 5.385529f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.319817f, -1.170613f, 2.943288f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.127426f, 0.901197f, 0.472938f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000360f, 0.000217f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.859162f, 0.017245f, -0.196481f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000063f, 0.000058f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.588231f, 0.225057f, -0.113380f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.704376f, 0.585756f, -5.384091f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.843212f, 0.883311f, 2.391354f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.045783f, -0.623391f, 0.244964f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000498f, -0.000142f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.703314f, -0.062588f, -0.462200f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000182f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.536596f, 0.112771f, -0.170494f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.020315f, 0.073098f, 0.313604f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 29  ms: 966 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 29, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.689475f, -6.181122f, -4.240609f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.736185f, -1.478284f, 2.948182f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016917f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.059397f, -0.060086f, -0.009887f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.184851f, 0.786267f, 13.985970f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.077840f, -0.169239f, 2.214138f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.051451f, -0.011523f, -0.925846f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.008184f, -0.027720f, 0.007938f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.826763f, -0.833956f, -13.259270f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -2.992566f, 0.115461f, -2.796517f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.300599f, 0.022476f, -0.949928f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.013102f, -0.097592f, 0.424806f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.119765f, -0.119425f, -0.024997f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.085001f, 0.124360f, -0.170093f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.678920f, -0.451421f, 5.400275f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.365964f, -1.152682f, 2.887019f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.110321f, 0.884962f, 0.453767f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000274f, 0.000124f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.861480f, 0.016976f, -0.216383f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000062f, 0.000058f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.588527f, 0.225162f, -0.119560f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.675961f, 0.468780f, -5.399162f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.805030f, 0.886763f, 2.410198f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.015324f, -0.665408f, 0.276541f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.001394f, -0.000300f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.705116f, -0.056583f, -0.416078f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000183f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.538360f, 0.100554f, -0.167921f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.034138f, 0.077502f, 0.304734f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 30  ms: 1000 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 30, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.309788f, -5.170105f, -4.374341f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.733123f, -1.443215f, 2.961751f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016916f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.050539f, -0.055102f, -0.006441f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.254828f, 0.681748f, 13.965370f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.091442f, -0.173603f, 2.281789f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.080965f, -0.012889f, -0.988951f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.002266f, -0.042435f, 0.120189f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.760635f, -0.697481f, -13.301000f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.001224f, 0.181502f, -2.922607f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.288662f, 0.021818f, -1.154952f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.015615f, -0.107283f, 0.306043f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.101715f, -0.109761f, -0.017298f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.051555f, 0.112862f, -0.150038f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.616378f, -0.270948f, 5.419806f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.419484f, -1.128272f, 2.816982f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.088183f, 0.868228f, 0.423008f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000476f, 0.000130f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.850498f, 0.017094f, -0.239518f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000061f, 0.000057f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.587156f, 0.203103f, -0.135934f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.613780f, 0.288389f, -5.419205f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.751162f, 0.889686f, 2.430853f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.016487f, -0.690136f, 0.304817f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.001004f, -0.000250f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.747073f, -0.052496f, -0.371939f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.541074f, 0.083623f, -0.166901f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.053997f, 0.074141f, 0.291013f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 31  ms: 1033 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 31, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.491607f, -4.097389f, -4.153934f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.754832f, -1.421156f, 2.941626f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016915f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.038513f, -0.048071f, -0.005198f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.352951f, 0.519801f, 13.935000f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.106316f, -0.177966f, 2.359972f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.102995f, -0.013554f, -1.030864f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.005901f, -0.058720f, 0.226969f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.666756f, -0.531821f, -13.355890f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.033370f, 0.209431f, -3.032059f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.223543f, 0.019728f, -1.291813f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.007776f, -0.054620f, 0.178058f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.077457f, -0.095869f, -0.013864f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, -0.016084f, 0.098982f, -0.123297f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.540769f, -0.078664f, 5.434061f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.492952f, -1.103971f, 2.720254f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.072962f, 0.847302f, 0.400044f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000363f, 0.000142f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.836793f, 0.018614f, -0.268207f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000061f, 0.000056f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.584078f, 0.180307f, -0.126919f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.538635f, 0.096178f, -5.433993f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.684684f, 0.896344f, 2.458082f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.048067f, -0.709674f, 0.342874f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.002401f, -0.000545f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.807794f, -0.048164f, -0.333875f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.545958f, 0.056473f, -0.164813f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.067415f, 0.074307f, 0.288056f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 32  ms: 1066 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 32, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.768452f, -2.863916f, -3.751906f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.746380f, -1.394423f, 2.947267f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016914f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.026490f, -0.041093f, -0.001944f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.450202f, 0.370791f, 13.902060f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.128134f, -0.181790f, 2.451159f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.129006f, -0.015424f, -1.048686f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.015059f, -0.070458f, 0.328477f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.573470f, -0.352862f, -13.408010f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.072727f, 0.217908f, 3.125959f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.176086f, 0.014638f, -1.420145f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.006560f, -0.020714f, 0.232759f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.053169f, -0.082097f, -0.006580f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.018807f, 0.100721f, -0.106785f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.550076f, 0.110944f, 5.432564f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.555732f, -1.074434f, 2.645163f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.046482f, 0.829120f, 0.360154f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000761f, 0.000157f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.831772f, 0.020346f, -0.295937f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000060f, 0.000056f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.580891f, 0.157203f, -0.116644f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.548229f, -0.093404f, -5.433086f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.637131f, 0.915058f, 2.479417f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.078448f, -0.726272f, 0.377541f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.008379f, -0.001972f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.857770f, -0.043887f, -0.306694f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.549017f, 0.041888f, -0.167490f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.083209f, 0.058493f, 0.286709f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 33  ms: 1100 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 33, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.787555f, -1.620269f, -3.004836f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.739038f, -1.370613f, 2.953707f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016913f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.012938f, -0.032060f, 0.003325f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.575471f, 0.213420f, 13.855600f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.125967f, -0.170187f, 2.557315f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.157630f, -0.017157f, -1.034461f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.025233f, -0.085360f, 0.418156f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.451900f, -0.140185f, -13.470800f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.106206f, 0.212750f, 2.968772f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.158119f, 0.009592f, -1.519150f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.012880f, -0.053082f, 0.329332f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.025823f, -0.064148f, 0.004646f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.060890f, 0.090168f, -0.100479f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.492654f, 0.339737f, 5.428581f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.638275f, -1.048542f, 2.563627f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.018515f, 0.811953f, 0.316460f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000642f, 0.000170f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.812013f, 0.022736f, -0.325992f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000059f, 0.000055f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.578326f, 0.136105f, -0.117409f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.490896f, -0.322224f, -5.429809f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.584216f, 0.939086f, 2.515243f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.100192f, -0.738822f, 0.397581f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000474f, -0.000108f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.910158f, -0.040220f, -0.280332f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.553119f, 0.019269f, -0.172687f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.100951f, 0.049828f, 0.284101f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 34  ms: 1133 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 34, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.518071f, -0.778720f, -2.439757f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.720037f, -1.356736f, 2.977251f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016912f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.002809f, -0.023459f, 0.006974f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.694271f, 0.017305f, 13.808830f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.099893f, -0.142895f, 2.654406f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.191553f, -0.018539f, -1.006362f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.033026f, -0.091176f, 0.485714f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.335595f, 0.094063f, -13.526270f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.129562f, 0.199753f, 2.819612f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.144741f, 0.007846f, -1.545690f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.015827f, -0.063584f, 0.374588f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.005758f, -0.046898f, 0.012426f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.099715f, 0.080085f, -0.093891f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.437736f, 0.550662f, 5.415977f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.719853f, -1.026053f, 2.482422f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.010097f, 0.794173f, 0.273800f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000754f, 0.000175f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.794663f, 0.025354f, -0.357895f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000058f, 0.000055f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.578469f, 0.136855f, -0.122758f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.436082f, -0.533196f, -5.417858f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.543234f, 0.971996f, 2.544615f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.117776f, -0.753729f, 0.414224f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.025220f, -0.006940f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.960760f, -0.034712f, -0.259805f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.556102f, -0.000650f, -0.183286f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.118432f, 0.036183f, 0.279520f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 35  ms: 1166 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 35, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.743190f, -0.423828f, -1.576679f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.720291f, -1.349081f, 2.975647f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016912f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.018790f, -0.012725f, 0.011367f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.841920f, -0.175780f, 13.745930f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.073161f, -0.117379f, 2.736919f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.217510f, -0.020214f, -0.992974f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.035641f, -0.075892f, 0.547680f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.189781f, 0.337890f, -13.589760f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.137179f, 0.173454f, 2.701841f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.115390f, 0.009399f, -1.501093f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.008936f, -0.030732f, 0.380502f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.037711f, -0.025246f, 0.021381f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.132547f, 0.072374f, -0.088049f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.395692f, 0.728581f, 5.398170f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.798327f, -1.006933f, 2.403643f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.032819f, 0.782153f, 0.233908f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000549f, 0.000112f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.771123f, 0.027996f, -0.390859f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000058f, 0.000054f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.576220f, 0.123043f, -0.128343f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.394143f, -0.711174f, -5.400606f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.514079f, 1.006188f, 2.566810f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.122532f, -0.765876f, 0.417622f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, 0.000452f, 0.000201f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.977760f, -0.032223f, -0.239256f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.557878f, -0.014141f, -0.188850f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.135169f, 0.020157f, 0.272915f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 36  ms: 1200 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 36, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.533935f, -0.445911f, -0.680915f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.709089f, -1.334329f, 2.992805f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016911f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.029792f, -0.003091f, 0.015317f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.973720f, -0.301548f, 13.686980f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.052751f, -0.079660f, 2.825991f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.253079f, -0.022534f, -0.963704f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.044815f, -0.087486f, 0.610945f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.058175f, 0.512885f, -13.643500f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.128632f, 0.152905f, 2.578042f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099497f, 0.009806f, -1.423186f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.006365f, -0.019536f, 0.369756f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.059618f, -0.005745f, 0.029126f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.159313f, 0.059960f, -0.090601f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.328077f, 0.873503f, 5.381174f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.865077f, -0.994274f, 2.344579f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.057868f, 0.758340f, 0.186030f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.001435f, 0.000392f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.750340f, 0.030648f, -0.424212f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000057f, 0.000054f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.574819f, 0.114954f, -0.138394f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.326487f, -0.856169f, -5.384058f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.480838f, 1.034937f, 2.602965f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.118233f, -0.776683f, 0.418033f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000956f, -0.000211f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.965337f, -0.029971f, -0.229715f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.559185f, -0.023492f, -0.180150f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.149430f, 0.007336f, 0.269055f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 37  ms: 1233 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 37, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.023884f, -0.720733f, -0.051928f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.673177f, -1.312122f, 3.038853f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016910f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.037280f, 0.006549f, 0.016807f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.105210f, -0.392888f, 13.626490f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.038000f, -0.035989f, 2.914043f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.284711f, -0.024103f, -0.921893f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.053243f, -0.099607f, 0.656362f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.926094f, 0.626139f, -13.696660f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.122138f, 0.129636f, 2.461617f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087002f, 0.008974f, -1.298073f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.005294f, -0.011948f, 0.337588f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.074444f, 0.013692f, 0.031767f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.183285f, 0.038452f, -0.096242f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.210796f, 1.003287f, 5.364385f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.919372f, -0.992072f, 2.302192f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.085674f, 0.725114f, 0.135611f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.001741f, 0.000471f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.742681f, 0.033051f, -0.453541f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000057f, 0.000054f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.571077f, 0.085883f, -0.150606f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.209100f, -0.986031f, -5.367652f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.442709f, 1.053168f, 2.644949f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.107519f, -0.782806f, 0.418028f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.001086f, -0.000248f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.935779f, -0.028962f, -0.225675f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.560712f, -0.034618f, -0.165270f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.161885f, 0.003402f, 0.266034f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 38  ms: 1266 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 38, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.461423f, -1.187930f, 0.644831f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.648096f, -1.293243f, 3.074077f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016910f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.042836f, 0.013710f, 0.016118f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.202670f, -0.470864f, 13.579880f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.033513f, 0.003939f, 3.017046f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.301272f, -0.024523f, -0.860519f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.071549f, -0.136296f, 0.708503f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.827764f, 0.699903f, -13.735180f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.119226f, 0.102400f, 2.379181f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.064340f, 0.007450f, -1.126059f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.004022f, 0.002626f, 0.298489f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.085462f, 0.028064f, 0.030046f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.197206f, 0.026330f, -0.085534f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.144530f, 1.078298f, 5.352011f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 0.960103f, -0.995841f, 2.254461f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.106164f, 0.698521f, 0.102402f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.030474f, 0.008233f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.725080f, 0.035416f, -0.490745f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000057f, 0.000054f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.571149f, 0.082935f, -0.149433f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.143023f, -1.061067f, -5.355498f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.414556f, 1.077618f, 2.667696f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.093496f, -0.792985f, 0.414746f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000233f, 0.000015f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.894768f, -0.028313f, -0.220364f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.562571f, -0.045140f, -0.136568f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.173032f, -0.009444f, 0.256315f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 39  ms: 1300 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 39, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 0.279301f, -1.899856f, 1.491280f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.640464f, -1.275859f, 3.094093f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016909f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.045650f, 0.017967f, 0.014005f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.260730f, -0.520559f, 13.551420f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.044093f, 0.046785f, -3.141425f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.318205f, -0.023600f, -0.766581f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.098327f, -0.194069f, 0.748375f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.769438f, 0.726976f, -13.758400f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.118444f, 0.079091f, 2.302287f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.047983f, 0.005107f, -0.967395f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.003638f, 0.015435f, 0.263338f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.091074f, 0.036519f, 0.025590f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.204691f, 0.014372f, -0.074199f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.079138f, 1.118607f, 5.345102f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.000570f, -1.011123f, 2.205862f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.126164f, 0.680293f, 0.075574f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000646f, 0.000193f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.673361f, 0.039967f, -0.541411f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000056f, 0.000054f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.576521f, 0.115601f, -0.140151f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.077839f, -1.101382f, -5.348701f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.394932f, 1.101013f, 2.683398f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.093041f, -0.805085f, 0.425593f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000695f, -0.000114f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.830764f, -0.028726f, -0.222806f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.564804f, -0.057982f, -0.114890f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.182380f, -0.020001f, 0.256845f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 40  ms: 1333 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 40, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 0.970241f, -2.711164f, 1.899865f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.624573f, -1.264373f, 3.121366f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

         // ------ No animation data ------ 
    // only default values so hierarchy doesn't get confused

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016909f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.047765f, 0.020883f, 0.010792f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.300597f, -0.567644f, 13.531080f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.060995f, 0.095672f, -3.015694f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.348719f, -0.021303f, -0.650498f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.103779f, -0.201807f, 0.767062f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.729619f, 0.737561f, -13.774520f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.118021f, 0.054987f, 2.213237f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.023962f, 0.004592f, -0.865712f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.001414f, 0.038321f, 0.268113f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095342f, 0.042221f, 0.018989f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.204811f, 0.010239f, -0.060075f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.056449f, 1.119313f, 5.345238f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.012052f, -1.036376f, 2.183302f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.141168f, 0.660791f, 0.057310f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.012282f, 0.002727f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.645436f, 0.044599f, -0.613739f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000056f, 0.000054f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.583675f, 0.166629f, -0.123963f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.055393f, -1.102071f, -5.348833f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.402010f, 1.128657f, 2.673232f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.103290f, -0.809167f, 0.449671f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000566f, -0.000081f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.818463f, -0.029294f, -0.231555f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.566849f, -0.070789f, -0.100040f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.191348f, -0.036722f, 0.254347f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    // commented out due to a pause I noticed - is it the same data as frame 40?
/* ---------------Key Time: 41  ms: 1366 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 41, numBones);

    //          Node Name: RootNode

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( 0.970241f, -2.711164f, 1.899865f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.624573f, -1.264373f, 3.121366f );
    lastFrame->pBone[0].S = Vect( 0.100000f, 0.100000f, 0.100000f );

    // correct scale on first TEDDY BEAR bone
    lastFrame->pBone[0].S = Vect( 1.0f, 1.0f, 1.0f);

    //          Node Name: Bip01 Pelvis

    lastFrame->pBone[1].T = Vect( 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].Q = Quat( ROT_XYZ, 0.0f, 0.0f, 0.0f );
    lastFrame->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f );

    //          Node Name: Bip01 Spine

    lastFrame->pBone[2].T = Vect( 6.016909f, -0.014115f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.047765f, 0.020883f, 0.010792f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.300597f, -0.567644f, 13.531080f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, 3.060995f, 0.095672f, -3.015694f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961559f, -0.000002f, -0.000004f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, -0.348719f, -0.021303f, -0.650498f );
    lastFrame->pBone[4].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263550f, 0.000003f, 0.000002f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.103779f, -0.201807f, 0.767062f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.729619f, 0.737561f, -13.774520f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.118021f, 0.054987f, 2.213237f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961571f, 0.000003f, -0.000003f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.023962f, 0.004592f, -0.865712f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, -0.000000f, 0.000002f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.001414f, 0.038321f, 0.268113f );
    lastFrame->pBone[8].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730431f, -0.017629f, 0.000002f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095342f, 0.042221f, 0.018989f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140881f, -0.008821f, 0.000003f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.204811f, 0.010239f, -0.060075f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( -0.056449f, 1.119313f, 5.345238f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.012052f, -1.036376f, 2.183302f );
    lastFrame->pBone[11].S = Vect( 0.999999f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067860f, 0.000004f, -0.000004f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.141168f, 0.660791f, 0.057310f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.012282f, 0.002727f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.645436f, 0.044599f, -0.613739f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099410f, 0.000056f, 0.000054f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.583675f, 0.166629f, -0.123963f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.055393f, -1.102071f, -5.348833f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -0.402010f, 1.128657f, 2.673232f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067840f, -0.000001f, 0.000001f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.103290f, -0.809167f, 0.449671f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099410f, -0.000566f, -0.000081f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.818463f, -0.029294f, -0.231555f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000184f, -0.000110f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.566849f, -0.070789f, -0.100040f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079190f, 0.000001f, 0.000001f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.191348f, -0.036722f, 0.254347f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f ); */ 
}