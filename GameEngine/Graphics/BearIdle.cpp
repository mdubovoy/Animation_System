#include "BearIdle.h"
#include "PyramidObject.h"
#include "FrameBucket.h"

BearIdle::BearIdle()
{
    // set currentTime to start the animation, and speed at which to animate
    this->currentTime = Time(TIME_ZERO);
    this->delta = 0.25f;
    this->deltaTime = delta * Time(TIME_NTSC_30_FRAME);

    // Initialize the bone hierarchy, create the bones and attach them into a PCSTree
    this->SetAnimationData();
}

void BearIdle::SetAnimationData()
{
    // updated to always point to the current frame
    // allows faster prototyping - can be used to set pBone data - instead of pTmp, pTmp2, pTmp3, etc...
    FrameBucket* lastFrame = this->pResult;
    int numBones = this->skeleton->GetNumBones();

    // when debugging GOM tree, it helps to associate this animation to its skeleton
    PyramidObject* firstBone;
    this->GetSkeleton()->GetFirstBone(firstBone);
    firstBone->setName("Bip01 - Idle");

// ---------------Key Time: 0  ms: 0 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 0, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.100515f, 0.276832f, -1.647785f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002449f, -1.501696f, -1.573294f );
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

    lastFrame->pBone[2].T = Vect( 6.016713f, -0.014116f, 0.000054f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000059f, 0.000014f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984611f, 0.623426f, 13.671310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067054f, -0.186033f, 2.266385f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023409f, -0.913204f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005173f, -0.153760f, 0.220085f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984191f, 0.624999f, -13.671410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090553f, 0.256951f, 2.878009f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026946f, -0.876180f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.073008f, 0.176929f, 0.802990f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201577f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075335f, 1.373003f, 0.252085f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.001051f, 0.001344f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183036f, 0.034523f, -0.532326f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056533f, -1.227617f, 1.383028f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000984f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197247f, -0.041299f, -0.731994f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000248f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048758f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.001887f, -0.000295f, 0.047542f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 1  ms: 33 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 1, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.110883f, 0.276832f, -1.658152f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002449f, -1.501696f, -1.573294f );
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

    lastFrame->pBone[2].T = Vect( 6.016808f, -0.014116f, 0.000054f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000059f, 0.000014f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984611f, 0.623426f, 13.671310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067054f, -0.186033f, 2.266385f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023409f, -0.913204f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005173f, -0.153760f, 0.220085f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984191f, 0.624999f, -13.671410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090553f, 0.256951f, 2.878009f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026946f, -0.876181f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.073008f, 0.176929f, 0.802990f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201577f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075135f, 1.373003f, 0.251367f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000515f, 0.000668f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183036f, 0.034523f, -0.532326f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056533f, -1.227617f, 1.383458f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000483f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197247f, -0.041299f, -0.731994f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000134f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048758f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.002411f, -0.000295f, 0.047542f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 2  ms: 66 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 2, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.121250f, 0.276832f, -1.668517f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002449f, -1.501696f, -1.573294f );
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

    lastFrame->pBone[2].T = Vect( 6.016808f, -0.014116f, 0.000054f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000059f, 0.000014f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984611f, 0.623426f, 13.671310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067054f, -0.186032f, 2.266385f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023409f, -0.913204f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005173f, -0.153760f, 0.220085f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984191f, 0.624999f, -13.671410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090553f, 0.256951f, 2.878008f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026946f, -0.876182f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.073008f, 0.176929f, 0.802990f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201577f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075137f, 1.373003f, 0.250844f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000521f, 0.000674f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183036f, 0.034523f, -0.532326f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056533f, -1.227617f, 1.383965f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000491f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197247f, -0.041299f, -0.731994f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048758f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.002935f, -0.000295f, 0.047542f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 3  ms: 100 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 3, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.131614f, 0.276832f, -1.678883f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002449f, -1.501696f, -1.573294f );
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

    lastFrame->pBone[2].T = Vect( 6.016808f, -0.014116f, 0.000054f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000059f, 0.000014f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984611f, 0.623426f, 13.671310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067054f, -0.186032f, 2.266385f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023409f, -0.913204f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005173f, -0.153760f, 0.220085f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984191f, 0.624999f, -13.671410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090553f, 0.256951f, 2.878007f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026946f, -0.876184f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.073008f, 0.176929f, 0.802990f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201577f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075136f, 1.373003f, 0.250316f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000521f, 0.000674f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183036f, 0.034523f, -0.532326f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056533f, -1.227617f, 1.384463f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000490f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197247f, -0.041299f, -0.731994f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048758f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.003459f, -0.000295f, 0.047542f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 4  ms: 133 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 4, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.141981f, 0.276832f, -1.689248f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002449f, -1.501696f, -1.573294f );
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

    lastFrame->pBone[2].T = Vect( 6.016809f, -0.014116f, 0.000054f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000059f, 0.000014f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984611f, 0.623426f, 13.671310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067054f, -0.186031f, 2.266385f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023409f, -0.913204f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005173f, -0.153760f, 0.220085f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984191f, 0.624999f, -13.671410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090553f, 0.256951f, 2.878007f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026946f, -0.876186f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.073008f, 0.176929f, 0.802990f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201577f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075135f, 1.373003f, 0.249801f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000521f, 0.000674f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183036f, 0.034523f, -0.532326f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056533f, -1.227617f, 1.384969f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000487f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197247f, -0.041299f, -0.731994f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048758f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.003982f, -0.000295f, 0.047542f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 5  ms: 166 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 5, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.152346f, 0.276832f, -1.699613f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002449f, -1.501696f, -1.573294f );
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

    lastFrame->pBone[2].T = Vect( 6.016811f, -0.014116f, 0.000054f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000059f, 0.000014f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984611f, 0.623426f, 13.671310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067054f, -0.186031f, 2.266385f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023409f, -0.913204f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005173f, -0.153760f, 0.220085f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984191f, 0.624999f, -13.671410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090553f, 0.256951f, 2.878006f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026946f, -0.876187f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.073008f, 0.176929f, 0.802990f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201577f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075132f, 1.373003f, 0.249265f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000521f, 0.000675f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183036f, 0.034523f, -0.532326f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056564f, -1.227583f, 1.385474f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000482f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197247f, -0.041299f, -0.731994f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048757f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.004506f, -0.000295f, 0.047542f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 6  ms: 200 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 6, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.162711f, 0.276828f, -1.709979f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002449f, -1.501696f, -1.573294f );
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

    lastFrame->pBone[2].T = Vect( 6.016813f, -0.014116f, 0.000054f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000059f, 0.000014f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984613f, 0.623425f, 13.671300f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067053f, -0.186033f, 2.266384f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023409f, -0.913206f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005173f, -0.153760f, 0.220086f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984197f, 0.625003f, -13.671410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090553f, 0.256951f, 2.878005f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026946f, -0.876187f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.073008f, 0.176929f, 0.802990f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201576f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075152f, 1.373003f, 0.248762f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000520f, 0.000675f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183036f, 0.034523f, -0.532327f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056564f, -1.227581f, 1.385998f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000477f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197247f, -0.041300f, -0.731993f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048757f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.005030f, -0.000270f, 0.047546f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 7  ms: 233 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 7, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.137870f, 0.275512f, -1.718448f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.009838f, -1.501693f, -1.580666f );
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

    lastFrame->pBone[2].T = Vect( 6.016816f, -0.014116f, -0.000103f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000444f, 0.000121f, 0.102038f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.985650f, 0.620860f, 13.670940f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067326f, -0.187169f, 2.266777f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064398f, -0.023407f, -0.912190f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005077f, -0.154456f, 0.219505f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.982435f, 0.632985f, -13.671780f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090425f, 0.256324f, 2.876784f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089739f, 0.026728f, -0.877238f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.072359f, 0.176590f, 0.802829f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000868f, 0.000277f, 0.202486f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.061774f, 1.373003f, 0.232749f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000520f, 0.000676f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183115f, 0.034523f, -0.533758f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.032666f, -1.236485f, 1.375292f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000019f, -0.000470f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.196348f, -0.040657f, -0.717700f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.781047f, -0.050904f, 0.310892f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.019200f, 0.000685f, 0.046860f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 8  ms: 266 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 8, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.278156f, 0.271015f, -1.906525f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.014759f, -1.501688f, -1.585575f );
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

    lastFrame->pBone[2].T = Vect( 6.016819f, -0.014116f, -0.000004f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.001457f, 0.000501f, 0.103004f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.990356f, 0.612813f, 13.669270f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067095f, -0.189578f, 2.267507f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064397f, -0.023716f, -0.909336f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.004720f, -0.156714f, 0.218553f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.976643f, 0.652613f, -13.673430f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.089438f, 0.254794f, 2.872973f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089588f, 0.026475f, -0.879078f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.071852f, 0.175186f, 0.802231f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.002848f, 0.001147f, 0.204416f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.027818f, 1.372887f, 0.193153f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000520f, 0.000676f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183343f, 0.034633f, -0.537898f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.971711f, -1.256428f, 1.345461f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000035f, -0.000462f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.193785f, -0.039170f, -0.681867f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.784208f, -0.055919f, 0.309788f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.052132f, 0.002859f, 0.045300f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 9  ms: 300 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 9, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.441387f, 0.269272f, -2.112257f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.019685f, -1.501683f, -1.590489f );
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

    lastFrame->pBone[2].T = Vect( 6.016822f, -0.014116f, -0.000079f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.002487f, 0.000831f, 0.104026f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.994173f, 0.604837f, 13.667940f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067315f, -0.191778f, 2.268073f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.063935f, -0.024172f, -0.905578f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.004818f, -0.158080f, 0.216948f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.971479f, 0.672823f, -13.674680f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.088382f, 0.252898f, 2.869645f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089124f, 0.026460f, -0.880351f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.070560f, 0.173545f, 0.801405f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.004870f, 0.001908f, 0.206458f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.009200f, 1.372515f, 0.150191f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000519f, 0.000677f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183693f, 0.034756f, -0.542104f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.905899f, -1.276792f, 1.311014f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000107f, -0.000454f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.190928f, -0.037760f, -0.641899f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000030f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.787414f, -0.061101f, 0.308658f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.085585f, 0.005524f, 0.043887f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 10  ms: 333 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 10, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.565005f, 0.264652f, -2.305938f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.024605f, -1.501675f, -1.595397f );
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

    lastFrame->pBone[2].T = Vect( 6.016826f, -0.014116f, -0.000077f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.003557f, 0.001224f, 0.105048f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.998971f, 0.596354f, 13.666230f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067419f, -0.194250f, 2.269472f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.063915f, -0.024399f, -0.901405f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.004955f, -0.160038f, 0.214685f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.965507f, 0.693582f, -13.676280f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.087596f, 0.251141f, 2.866982f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088924f, 0.026356f, -0.881250f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.069804f, 0.172426f, 0.800452f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.006960f, 0.002809f, 0.208500f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.048279f, 1.371830f, 0.104781f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000519f, 0.000677f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.184078f, 0.034892f, -0.546681f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.831838f, -1.296662f, 1.267801f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000172f, -0.000445f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.187760f, -0.036348f, -0.599715f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000032f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.790544f, -0.066630f, 0.307476f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.119579f, 0.008509f, 0.042440f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 11  ms: 366 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 11, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.671705f, 0.292538f, -2.466154f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.024605f, -1.501675f, -1.595397f );
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

    lastFrame->pBone[2].T = Vect( 6.016829f, -0.014116f, -0.000072f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.004589f, 0.001547f, 0.106183f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.002650f, 0.589041f, 13.664930f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067996f, -0.196517f, 2.270862f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.063600f, -0.024987f, -0.896514f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005280f, -0.161736f, 0.212095f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.960343f, 0.714500f, -13.677450f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.086626f, 0.249257f, 2.864463f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088640f, 0.026188f, -0.881857f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.069190f, 0.170496f, 0.799069f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.008984f, 0.003566f, 0.210767f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.088115f, 1.370627f, 0.058217f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000518f, 0.000678f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.184404f, 0.035034f, -0.551639f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.751227f, -1.315442f, 1.218228f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000249f, -0.000436f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.184834f, -0.035076f, -0.558443f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000038f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.793563f, -0.071815f, 0.306292f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.153584f, 0.011805f, 0.040962f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 12  ms: 400 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 12, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.777797f, 0.318924f, -2.634287f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.024605f, -1.501675f, -1.595397f );
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

    lastFrame->pBone[2].T = Vect( 6.016834f, -0.014116f, -0.000064f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.005661f, 0.001938f, 0.107318f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.007230f, 0.581200f, 13.663260f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.068187f, -0.198894f, 2.272597f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.063175f, -0.025266f, -0.891396f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005665f, -0.163425f, 0.209601f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.954276f, 0.735960f, -13.678960f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.085664f, 0.247420f, 2.861598f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088321f, 0.026186f, -0.882332f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.068830f, 0.168917f, 0.798222f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.011076f, 0.004463f, 0.213033f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.117917f, 1.369441f, 0.017596f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000517f, 0.000678f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.184790f, 0.035186f, -0.556815f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.665987f, -1.331699f, 1.167327f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000309f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.181869f, -0.033950f, -0.519851f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000045f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.796698f, -0.076650f, 0.305005f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.191707f, 0.015352f, 0.041434f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 13  ms: 433 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 13, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.890706f, 0.408130f, -2.786510f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.024605f, -1.501675f, -1.595397f );
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

    lastFrame->pBone[2].T = Vect( 6.016838f, -0.014116f, -0.000055f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.006789f, 0.002339f, 0.108453f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.011959f, 0.572594f, 13.661540f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.068868f, -0.201149f, 2.273729f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.062896f, -0.025643f, -0.886068f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.006452f, -0.164951f, 0.206795f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.948025f, 0.758183f, -13.680460f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.084516f, 0.245510f, 2.858502f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087965f, 0.026185f, -0.882498f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.068268f, 0.167518f, 0.796987f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.013280f, 0.005391f, 0.215297f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.150360f, 1.367786f, -0.026022f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000517f, 0.000678f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.185169f, 0.035341f, -0.561993f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.573147f, -1.346935f, 1.107286f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000382f, -0.000418f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.179462f, -0.033071f, -0.487194f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000055f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.800065f, -0.081477f, 0.303623f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.228818f, 0.018858f, 0.041346f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 14  ms: 466 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 14, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.070912f, 0.405197f, -3.020632f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.024605f, -1.501675f, -1.595397f );
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

    lastFrame->pBone[2].T = Vect( 6.016842f, -0.014116f, -0.000044f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.007825f, 0.002654f, 0.109587f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.015528f, 0.565245f, 13.660270f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.069414f, -0.203472f, 2.275443f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.062592f, -0.026267f, -0.880906f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.006732f, -0.166300f, 0.204128f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.942940f, 0.779150f, -13.681500f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.083714f, 0.243845f, 2.856139f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087614f, 0.026185f, -0.882819f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.067845f, 0.166098f, 0.795495f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.015307f, 0.006141f, 0.217560f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.181853f, 1.365603f, -0.069204f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000516f, 0.000679f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.185632f, 0.035499f, -0.567013f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.472444f, -1.360579f, 1.039205f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000429f, -0.000410f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.177632f, -0.032441f, -0.462324f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000065f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.803564f, -0.086379f, 0.302679f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.265966f, 0.022296f, 0.040848f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 15  ms: 500 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 15, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.180608f, 0.432678f, -3.171785f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.022143f, -1.501679f, -1.592941f );
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

    lastFrame->pBone[2].T = Vect( 6.016847f, -0.014116f, -0.000033f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.008954f, 0.003050f, 0.110835f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.020048f, 0.557282f, 13.658600f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.069463f, -0.205525f, 2.276562f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.062150f, -0.026912f, -0.875915f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.007460f, -0.167891f, 0.201228f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.936647f, 0.802085f, -13.682900f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.082917f, 0.242245f, 2.853298f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087299f, 0.026185f, -0.882903f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.067604f, 0.164552f, 0.794221f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.017512f, 0.007064f, 0.220049f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.213753f, 1.363335f, -0.112716f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000515f, 0.000679f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.185868f, 0.035657f, -0.572719f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.364687f, -1.372786f, 0.962291f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000492f, -0.000391f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.176603f, -0.032094f, -0.448146f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000076f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.807128f, -0.090726f, 0.301444f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.301938f, 0.025651f, 0.039969f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 16  ms: 533 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 16, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.284762f, 0.451294f, -3.315406f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.017222f, -1.501686f, -1.588031f );
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

    lastFrame->pBone[2].T = Vect( 6.016852f, -0.014116f, -0.000023f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.010031f, 0.003429f, 0.112082f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.024279f, 0.550052f, 13.656980f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.070371f, -0.207499f, 2.277334f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.062131f, -0.026936f, -0.871330f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.008049f, -0.169230f, 0.198429f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.930535f, 0.824282f, -13.684200f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.081540f, 0.240566f, 2.850555f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.086836f, 0.026348f, -0.883407f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.067211f, 0.163412f, 0.793412f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.019611f, 0.007949f, 0.222536f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.244677f, 1.360312f, -0.156087f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000514f, 0.000680f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.186425f, 0.035846f, -0.578558f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.251460f, -1.382532f, 0.878788f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000541f, -0.000361f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.176394f, -0.032043f, -0.446724f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000085f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.810894f, -0.095087f, 0.300267f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.337087f, 0.028769f, 0.038533f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 17  ms: 566 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 17, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.395179f, 0.472629f, -3.448620f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.012295f, -1.501691f, -1.583117f );
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

    lastFrame->pBone[2].T = Vect( 6.016857f, -0.014116f, -0.000013f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.011126f, 0.003750f, 0.113329f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.027889f, 0.542577f, 13.655730f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.071119f, -0.209141f, 2.278079f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061715f, -0.027784f, -0.866603f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.008859f, -0.169980f, 0.195522f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.925343f, 0.846744f, -13.685100f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.080780f, 0.238895f, 2.847820f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.086816f, 0.025965f, -0.884249f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.067016f, 0.162120f, 0.792498f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.021752f, 0.008725f, 0.225022f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.276290f, 1.357319f, -0.199580f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000513f, 0.000680f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.186802f, 0.036021f, -0.584327f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.127195f, -1.390846f, 0.783714f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000594f, -0.000328f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.177406f, -0.032334f, -0.458798f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000093f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.814497f, -0.099110f, 0.299088f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.370401f, 0.031237f, 0.036232f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 18  ms: 600 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 18, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.492383f, 0.563751f, -3.552316f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.012297f, -1.501691f, -1.583119f );
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

    lastFrame->pBone[2].T = Vect( 6.016861f, -0.014116f, -0.000005f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.012242f, 0.004194f, 0.114634f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.032997f, 0.535155f, 13.653760f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.071943f, -0.210693f, 2.277685f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061117f, -0.028279f, -0.863117f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.009798f, -0.171010f, 0.192867f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.918383f, 0.869854f, -13.686670f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.079764f, 0.237852f, 2.844880f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087014f, 0.025885f, -0.885183f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.067096f, 0.160807f, 0.792219f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.023923f, 0.009746f, 0.227621f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.307439f, 1.353720f, -0.243247f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000511f, 0.000681f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.187158f, 0.036195f, -0.590095f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.009529f, -1.397124f, 0.677977f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000628f, -0.000296f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.178995f, -0.032898f, -0.482033f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000099f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.817937f, -0.103461f, 0.297787f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.402363f, 0.033210f, 0.033252f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 19  ms: 633 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 19, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.574039f, 0.561840f, -3.639143f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.009837f, -1.501693f, -1.580664f );
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

    lastFrame->pBone[2].T = Vect( 6.016865f, -0.014116f, -0.000000f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.013338f, 0.004510f, 0.115880f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.036385f, 0.527649f, 13.652540f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.072160f, -0.212522f, 2.277352f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061187f, -0.028278f, -0.860708f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.010061f, -0.172039f, 0.191359f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.913087f, 0.892319f, -13.687470f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.078228f, 0.236880f, 2.840449f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.086815f, 0.025858f, -0.887305f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.066633f, 0.160001f, 0.791707f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.026065f, 0.010517f, 0.230103f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.336613f, 1.349965f, -0.284693f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000510f, 0.000681f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.187668f, 0.036388f, -0.595928f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.157288f, -1.400847f, 0.561969f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000676f, -0.000268f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.181547f, -0.033782f, -0.514933f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000101f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.821146f, -0.107991f, 0.296551f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.432122f, 0.034163f, 0.029473f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 20  ms: 666 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 20, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.644098f, 0.470733f, -3.717821f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.009837f, -1.501693f, -1.580664f );
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

    lastFrame->pBone[2].T = Vect( 6.016870f, -0.014116f, 0.000002f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.014475f, 0.004891f, 0.117183f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.040656f, 0.519952f, 13.650940f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.072983f, -0.213939f, 2.276213f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061354f, -0.028219f, -0.859044f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.010230f, -0.172720f, 0.189728f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.906935f, 0.915688f, -13.688590f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.077070f, 0.235790f, 2.837155f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.086759f, 0.025560f, -0.889787f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.066626f, 0.159277f, 0.791948f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.028278f, 0.011425f, 0.232698f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.365080f, 1.345235f, -0.325949f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000508f, 0.000682f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.188137f, 0.036589f, -0.602137f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.309584f, -1.402055f, 0.441977f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000724f, -0.000231f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.184576f, -0.034953f, -0.555279f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000058f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.824705f, -0.112865f, 0.295223f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.459840f, 0.034534f, 0.024561f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 21  ms: 700 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 21, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.748327f, 0.444919f, -3.811874f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.009837f, -1.501693f, -1.580664f );
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

    lastFrame->pBone[2].T = Vect( 6.016873f, -0.014116f, 0.000002f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.015558f, 0.005255f, 0.118486f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.044684f, 0.512982f, 13.649420f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.073832f, -0.215361f, 2.274739f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061117f, -0.028560f, -0.858491f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.010767f, -0.173651f, 0.188890f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.900999f, 0.938330f, -13.689610f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.075726f, 0.234593f, 2.832295f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.086765f, 0.025242f, -0.893459f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.066425f, 0.158583f, 0.792622f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.030385f, 0.012297f, 0.235291f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.391539f, 1.340389f, -0.365213f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000507f, 0.000682f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.188520f, 0.036776f, -0.608122f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.459491f, -1.400451f, 0.324302f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000752f, -0.000192f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.187880f, -0.036378f, -0.600011f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000007f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.828348f, -0.117404f, 0.293947f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.487542f, 0.033967f, 0.018738f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 22  ms: 733 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 22, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.802291f, 0.406093f, -3.855326f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.009838f, -1.501693f, -1.580666f );
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

    lastFrame->pBone[2].T = Vect( 6.016877f, -0.014116f, -0.000103f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.016713f, 0.005579f, 0.119788f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.048110f, 0.505015f, 13.648200f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.073803f, -0.217040f, 2.272021f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061398f, -0.028460f, -0.859304f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.010611f, -0.174584f, 0.188053f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.895651f, 0.961953f, -13.690280f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.074466f, 0.233560f, 2.827096f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087188f, 0.024856f, -0.898081f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.066266f, 0.157584f, 0.793462f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.032641f, 0.013092f, 0.237882f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.417691f, 1.335644f, -0.404334f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000505f, 0.000683f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.188983f, 0.036967f, -0.613950f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.601332f, -1.395907f, 0.213111f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000799f, -0.000155f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.191309f, -0.038116f, -0.648032f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, -0.000047f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.831903f, -0.121751f, 0.292480f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.516921f, 0.032072f, 0.011850f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 23  ms: 766 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 23, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.847964f, 0.409626f, -3.884554f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.012295f, -1.501691f, -1.583117f );
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

    lastFrame->pBone[2].T = Vect( 6.016881f, -0.014116f, -0.000010f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.017798f, 0.005936f, 0.120977f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.052217f, 0.497367f, 13.646690f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.073995f, -0.218524f, 2.269062f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061588f, -0.028302f, -0.861463f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.010579f, -0.175853f, 0.188394f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.889916f, 0.983938f, -13.691220f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.072743f, 0.232743f, 2.821329f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087535f, 0.024246f, -0.904359f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.066160f, 0.157157f, 0.795499f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.034749f, 0.013961f, 0.240246f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.439985f, 1.330526f, -0.439072f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000503f, 0.000683f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.189462f, 0.037181f, -0.620373f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.728830f, -1.389705f, 0.114214f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000119f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.194926f, -0.039918f, -0.697045f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, -0.000075f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.835858f, -0.125774f, 0.291040f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.547107f, 0.029737f, 0.004398f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 24  ms: 800 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 24, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.955615f, 0.254482f, -3.962367f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.014759f, -1.501688f, -1.585575f );
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

    lastFrame->pBone[2].T = Vect( 6.016883f, -0.014116f, -0.000039f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.018939f, 0.006308f, 0.122221f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.056308f, 0.489254f, 13.645150f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.074327f, -0.219746f, 2.264660f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061616f, -0.027981f, -0.865452f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.010638f, -0.176599f, 0.189299f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.883860f, 1.007040f, -13.692130f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.071378f, 0.231767f, 2.814991f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.087897f, 0.023609f, -0.911694f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.065531f, 0.156373f, 0.797727f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.036970f, 0.014858f, 0.242721f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.461664f, 1.324806f, -0.473243f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000501f, 0.000684f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.189892f, 0.037377f, -0.626196f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.841995f, -1.381692f, 0.027751f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000086f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.198140f, -0.041900f, -0.745200f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, -0.000031f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.839971f, -0.129164f, 0.289940f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.577385f, 0.026392f, -0.004082f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 25  ms: 833 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 25, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.022779f, 0.111900f, -3.990088f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.024605f, -1.501675f, -1.595397f );
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

    lastFrame->pBone[2].T = Vect( 6.016886f, -0.014116f, -0.000039f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.020030f, 0.006655f, 0.123524f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.060161f, 0.482196f, 13.643720f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.074443f, -0.221245f, 2.258287f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.062725f, -0.027225f, -0.873473f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.009752f, -0.177897f, 0.192125f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.878190f, 1.029800f, -13.692890f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.069132f, 0.230944f, 2.806634f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088512f, 0.022928f, -0.922597f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.065197f, 0.156222f, 0.802103f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.039090f, 0.015709f, 0.245309f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.481949f, 1.319399f, -0.506068f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000499f, 0.000684f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.190304f, 0.037571f, -0.632018f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.938169f, -1.373303f, -0.045250f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000064f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.201134f, -0.043943f, -0.790769f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000061f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.844408f, -0.131701f, 0.288733f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.607393f, 0.022476f, -0.012766f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 26  ms: 866 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 26, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.075853f, -0.047340f, -3.982126f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.034447f, -1.501655f, -1.605216f );
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

    lastFrame->pBone[2].T = Vect( 6.016888f, -0.014116f, -0.000039f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.021175f, 0.007011f, 0.124711f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.064021f, 0.473694f, 13.642270f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.073469f, -0.222786f, 2.249598f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.063604f, -0.026307f, -0.885378f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.009117f, -0.179255f, 0.196592f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.872294f, 1.052585f, -13.693650f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.066576f, 0.230040f, 2.795973f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089482f, 0.021740f, -0.936883f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.064542f, 0.155958f, 0.807982f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.041316f, 0.016583f, 0.247667f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.499894f, 1.313735f, -0.536696f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000497f, 0.000684f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.190737f, 0.037808f, -0.638060f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.018098f, -1.364849f, -0.105399f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000051f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.203705f, -0.045866f, -0.830982f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000061f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.849311f, -0.133576f, 0.287599f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.636619f, 0.018157f, -0.021492f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 27  ms: 900 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 27, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.124368f, -0.304344f, -3.958145f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.046739f, -1.501621f, -1.617478f );
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

    lastFrame->pBone[2].T = Vect( 6.016890f, -0.014116f, -0.000039f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.022267f, 0.007350f, 0.125955f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.067812f, 0.466280f, 13.640890f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.072605f, -0.224084f, 2.238802f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064490f, -0.025036f, -0.899956f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.008380f, -0.180814f, 0.201883f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.866823f, 1.075033f, -13.694300f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.064559f, 0.229327f, 2.785002f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.090721f, 0.020291f, -0.953675f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.064071f, 0.155304f, 0.815428f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.043438f, 0.017420f, 0.250139f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.517322f, 1.307899f, -0.566181f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000494f, 0.000685f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.191125f, 0.038028f, -0.643504f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.082169f, -1.356439f, -0.154144f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000046f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.205971f, -0.047465f, -0.864850f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000061f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.855065f, -0.134464f, 0.286547f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.663842f, 0.013130f, -0.030415f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 28  ms: 933 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 28, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.189474f, -0.598541f, -3.940550f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.066377f, -1.501543f, -1.637165f );
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

    lastFrame->pBone[2].T = Vect( 6.016891f, -0.014116f, -0.000038f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.023308f, 0.007659f, 0.127085f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.071081f, 0.458867f, 13.639670f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.071591f, -0.225568f, 2.227732f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.065787f, -0.023746f, -0.916903f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.006857f, -0.182202f, 0.208703f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.861691f, 1.096057f, -13.694820f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.061616f, 0.228713f, 2.773067f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091827f, 0.018905f, -0.971967f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.063192f, 0.155319f, 0.823551f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.045461f, 0.018187f, 0.252383f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.531652f, 1.301968f, -0.592376f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000492f, 0.000685f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.191571f, 0.038246f, -0.649166f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.130296f, -1.349712f, -0.192697f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000040f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.207555f, -0.048826f, -0.889950f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000061f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.861182f, -0.134054f, 0.285851f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.688571f, 0.008151f, -0.039066f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 29  ms: 966 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 29, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.273455f, -0.820709f, -3.906219f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.083517f, -1.501453f, -1.654517f );
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

    lastFrame->pBone[2].T = Vect( 6.016891f, -0.014116f, -0.000038f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.024471f, 0.007962f, 0.128271f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.074267f, 0.450106f, 13.638530f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.070204f, -0.226968f, 2.215164f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.067204f, -0.022152f, -0.934742f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005440f, -0.184295f, 0.215769f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.856572f, 1.119100f, -13.695140f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.058737f, 0.228317f, 2.760813f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093018f, 0.017554f, -0.990638f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.062005f, 0.155357f, 0.831278f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.047728f, 0.018966f, 0.254735f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.544842f, 1.296286f, -0.616900f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000489f, 0.000686f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.192004f, 0.038461f, -0.654827f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.167116f, -1.343743f, -0.224584f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000034f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.208436f, -0.049682f, -0.906558f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000060f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.868103f, -0.132500f, 0.285272f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.710627f, 0.002908f, -0.047446f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 30  ms: 1000 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 30, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.316106f, -1.098678f, -3.854041f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.105480f, -1.501307f, -1.676533f );
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

    lastFrame->pBone[2].T = Vect( 6.016891f, -0.014116f, -0.000038f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.025506f, 0.008294f, 0.129344f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.078028f, 0.442461f, 13.637140f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.068604f, -0.228464f, 2.203455f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.068516f, -0.021152f, -0.952742f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.003780f, -0.185388f, 0.223588f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.851223f, 1.139725f, -13.695760f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.055888f, 0.227640f, 2.747947f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.094550f, 0.016334f, -1.009793f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.060945f, 0.155642f, 0.839699f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.049734f, 0.019786f, 0.256863f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.556045f, 1.290454f, -0.639014f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000486f, 0.000686f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.192297f, 0.038646f, -0.660041f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.197107f, -1.338362f, -0.251982f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000028f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.209241f, -0.050410f, -0.918863f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000060f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.875810f, -0.129936f, 0.284578f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.729087f, -0.001817f, -0.054987f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 31  ms: 1033 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 31, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.316575f, -1.399192f, -3.769845f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.134602f, -1.501063f, -1.705556f );
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

    lastFrame->pBone[2].T = Vect( 6.016787f, -0.014116f, -0.000038f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.026598f, 0.008638f, 0.130418f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.081752f, 0.434001f, 13.635700f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067325f, -0.230020f, 2.191707f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.069728f, -0.019890f, -0.970320f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.001608f, -0.186948f, 0.230752f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.845569f, 1.161129f, -13.696330f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.053112f, 0.227500f, 2.736249f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.095784f, 0.014856f, -1.027938f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.059439f, 0.155695f, 0.847787f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.051854f, 0.020637f, 0.258989f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.565638f, 1.284797f, -0.659203f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000482f, 0.000687f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.192682f, 0.038837f, -0.665101f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.222771f, -1.333197f, -0.276229f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000022f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.209706f, -0.050903f, -0.929131f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000060f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.884378f, -0.126553f, 0.283797f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.743399f, -0.006485f, -0.061807f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 32  ms: 1066 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 32, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.388686f, -1.696227f, -3.735134f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.168282f, -1.500699f, -1.739488f );
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

    lastFrame->pBone[2].T = Vect( 6.016884f, -0.014116f, -0.000037f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.027650f, 0.008913f, 0.131432f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.084755f, 0.425769f, 13.634650f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.066110f, -0.231279f, 2.181407f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.071244f, -0.018425f, -0.986910f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.000927f, -0.188365f, 0.238370f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.841058f, 1.181631f, -13.696540f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.050908f, 0.226942f, 2.724754f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097166f, 0.013690f, -1.044182f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.057277f, 0.155905f, 0.854123f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.053900f, 0.021347f, 0.260999f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.573933f, 1.279337f, -0.678214f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000475f, 0.000687f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.193053f, 0.039024f, -0.670159f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.246193f, -1.327985f, -0.299294f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000829f, -0.000017f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210239f, -0.051446f, -0.937218f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000059f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.893635f, -0.122580f, 0.283369f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.753336f, -0.010465f, -0.068018f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 33  ms: 1100 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 33, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.397191f, -1.940959f, -3.667261f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.199220f, -1.500295f, -1.770335f );
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

    lastFrame->pBone[2].T = Vect( 6.016814f, -0.014116f, -0.000037f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.028703f, 0.009189f, 0.132390f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.087704f, 0.417158f, 13.633580f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.064765f, -0.233358f, 2.172683f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.072330f, -0.017410f, -1.001546f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.003745f, -0.189973f, 0.245201f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.836482f, 1.201811f, -13.696710f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.047864f, 0.227326f, 2.713656f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.098377f, 0.012512f, -1.059097f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.055266f, 0.156857f, 0.859718f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.055950f, 0.022056f, 0.262894f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.581185f, 1.273998f, -0.695506f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000466f, 0.000687f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.193230f, 0.039174f, -0.674554f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.265640f, -1.322966f, -0.319591f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, -0.000012f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210583f, -0.051754f, -0.943279f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000059f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.903505f, -0.117970f, 0.282918f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.757681f, -0.014051f, -0.073110f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 34  ms: 1133 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 34, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.459793f, -2.103918f, -3.626595f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.239076f, -1.499659f, -1.810463f );
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

    lastFrame->pBone[2].T = Vect( 6.016827f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.029723f, 0.009572f, 0.133350f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.092132f, 0.409046f, 13.631870f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.063956f, -0.234859f, 2.165596f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.073313f, -0.016853f, -1.013524f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.006428f, -0.191124f, 0.251437f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.830471f, 1.221578f, -13.697530f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.044982f, 0.227299f, 2.704274f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099239f, 0.011784f, -1.070667f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.052943f, 0.157522f, 0.863367f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.057920f, 0.022978f, 0.264793f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.585989f, 1.268779f, -0.710214f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000456f, 0.000688f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.193621f, 0.039353f, -0.679234f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.280887f, -1.318351f, -0.336479f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, -0.000008f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210847f, -0.051991f, -0.948248f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000058f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.914000f, -0.112955f, 0.282790f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.756428f, -0.016272f, -0.077044f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 35  ms: 1166 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 35, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.458168f, -2.250654f, -3.559519f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.282728f, -1.498823f, -1.854056f );
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

    lastFrame->pBone[2].T = Vect( 6.016855f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.030778f, 0.009842f, 0.134251f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.095152f, 0.400088f, 13.630810f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.063446f, -0.236763f, 2.161248f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.074305f, -0.016131f, -1.023003f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.010154f, -0.191896f, 0.257599f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.826039f, 1.241438f, -13.697650f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.042185f, 0.227406f, 2.694867f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099977f, 0.011302f, -1.079436f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.050096f, 0.158554f, 0.864440f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.059971f, 0.023685f, 0.266572f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.590294f, 1.264091f, -0.723468f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000445f, 0.000688f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.194049f, 0.039522f, -0.683537f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.294493f, -1.313932f, -0.353321f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, -0.000004f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211199f, -0.052172f, -0.951770f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000057f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.924573f, -0.107781f, 0.282524f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.748488f, -0.017615f, -0.079616f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 36  ms: 1200 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 36, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.462815f, -2.282694f, -3.487637f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.340662f, -1.497458f, -1.912144f );
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

    lastFrame->pBone[2].T = Vect( 6.016890f, -0.014116f, -0.000035f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.031762f, 0.010132f, 0.134129f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.099135f, 0.385993f, 13.629400f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.063083f, -0.238740f, 2.159626f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.075238f, -0.015990f, -1.029608f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.014770f, -0.192504f, 0.263115f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.822108f, 1.254235f, -13.698130f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.039561f, 0.228071f, 2.688593f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100257f, 0.011007f, -1.085142f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.046346f, 0.160349f, 0.864393f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.061895f, 0.024388f, 0.266307f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.592620f, 1.259745f, -0.734145f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000434f, 0.000689f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.194244f, 0.039659f, -0.687553f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.304347f, -1.310102f, -0.367213f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, -0.000000f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211281f, -0.052248f, -0.953500f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000057f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.935495f, -0.102003f, 0.282485f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.735868f, -0.018381f, -0.081098f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 37  ms: 1233 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 37, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.454871f, -2.364149f, -3.373749f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.419080f, -1.495107f, -1.990783f );
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

    lastFrame->pBone[2].T = Vect( 6.016920f, -0.014116f, -0.000035f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.032733f, 0.010475f, 0.134065f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.103861f, 0.372451f, 13.627670f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.063156f, -0.240651f, 2.160433f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.076579f, -0.015736f, -1.036605f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.021668f, -0.193101f, 0.270519f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.817486f, 1.267227f, -13.698900f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.036296f, 0.229268f, 2.680297f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100656f, 0.010557f, -1.089211f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.040717f, 0.162806f, 0.861089f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.063784f, 0.025197f, 0.266156f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.594450f, 1.255672f, -0.744497f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000424f, 0.000689f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.194490f, 0.039784f, -0.690820f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.310984f, -1.306608f, -0.378890f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, 0.000003f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211336f, -0.052241f, -0.954796f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000056f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.946410f, -0.096090f, 0.282466f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.721411f, -0.019012f, -0.082127f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 38  ms: 1266 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 38, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.423784f, -2.376982f, -3.240664f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.513118f, -1.491416f, -2.084935f );
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

    lastFrame->pBone[2].T = Vect( 6.016944f, -0.014116f, -0.000034f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.033717f, 0.010762f, 0.134001f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.107834f, 0.358702f, 13.626260f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.063712f, -0.242924f, 2.162268f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.077798f, -0.015404f, -1.043246f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.030059f, -0.193774f, 0.279002f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.813590f, 1.280378f, -13.699350f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.032781f, 0.230972f, 2.672152f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100993f, 0.010418f, -1.091763f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.033830f, 0.166159f, 0.856508f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.065708f, 0.025898f, 0.266002f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.594712f, 1.252110f, -0.752023f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000415f, 0.000689f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.194742f, 0.039898f, -0.693861f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.315510f, -1.303560f, -0.389822f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, 0.000005f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211364f, -0.052223f, -0.954793f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000055f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.957518f, -0.089891f, 0.282552f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.705241f, -0.019418f, -0.082463f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 39  ms: 1300 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 39, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.363231f, -2.382177f, -3.054545f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.607965f, -1.486489f, -2.180279f );
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

    lastFrame->pBone[2].T = Vect( 6.016957f, -0.014116f, -0.000033f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.034633f, 0.011091f, 0.133936f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.112449f, 0.345937f, 13.624570f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.063248f, -0.245433f, 2.165315f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.079394f, -0.015209f, -1.050366f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.040661f, -0.194346f, 0.289007f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.809176f, 1.292613f, -13.700110f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.028789f, 0.233008f, 2.662746f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.101188f, 0.010562f, -1.093058f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.025164f, 0.170448f, 0.849233f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.067488f, 0.026673f, 0.265852f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.593291f, 1.248813f, -0.757647f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000411f, 0.000690f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.194951f, 0.040008f, -0.696902f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.317374f, -1.301328f, -0.398848f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, 0.000006f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211339f, -0.052197f, -0.953927f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000055f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.968255f, -0.083756f, 0.282886f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.687681f, -0.019857f, -0.082431f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 40  ms: 1333 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 40, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.314617f, -2.360216f, -2.847288f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.704600f, -1.479899f, -2.277289f );
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

    lastFrame->pBone[2].T = Vect( 6.016878f, -0.014116f, -0.000033f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.035548f, 0.011421f, 0.133873f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.116940f, 0.333155f, 13.622830f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.063775f, -0.247978f, 2.169209f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.081293f, -0.014852f, -1.056658f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.052458f, -0.194689f, 0.299929f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.804650f, 1.304838f, -13.700830f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.024196f, 0.235833f, 2.653232f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.101431f, 0.010811f, -1.093079f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.015722f, 0.175563f, 0.841391f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.069269f, 0.027448f, 0.265702f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.591299f, 1.246295f, -0.762310f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000407f, 0.000690f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195206f, 0.040091f, -0.698975f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.316186f, -1.299479f, -0.405975f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000828f, 0.000007f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211128f, -0.052167f, -0.952782f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000054f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.978744f, -0.077602f, 0.283089f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.668456f, -0.020101f, -0.081965f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 41  ms: 1366 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 41, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.232354f, -2.282026f, -2.619960f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.789859f, -1.472328f, -2.362934f );
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

    lastFrame->pBone[2].T = Vect( 6.016818f, -0.014116f, -0.000032f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.036476f, 0.011698f, 0.133750f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.120738f, 0.319833f, 13.621420f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.064394f, -0.250385f, 2.174486f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.082846f, -0.014947f, -1.062939f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.064996f, -0.194769f, 0.311435f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.800863f, 1.316876f, -13.701260f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.020137f, 0.237916f, 2.643434f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.101539f, 0.010914f, -1.092228f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.005143f, 0.180383f, 0.831923f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.071083f, 0.028119f, 0.265433f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.588516f, 1.244022f, -0.765116f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000403f, 0.000690f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195345f, 0.040167f, -0.701202f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.313692f, -1.298471f, -0.412396f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000827f, -0.000000f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211244f, -0.052093f, -0.951118f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000053f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.988941f, -0.071651f, 0.283354f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.648123f, -0.020421f, -0.081061f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 42  ms: 1400 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 42, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.131340f, -2.239183f, -2.385208f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.866514f, -1.463617f, -2.439998f );
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

    lastFrame->pBone[2].T = Vect( 6.016753f, -0.014116f, -0.000031f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.037352f, 0.011960f, 0.133685f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.124314f, 0.307568f, 13.620070f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.065027f, -0.252947f, 2.180180f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.084571f, -0.014788f, -1.068588f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.077699f, -0.194437f, 0.322631f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.797289f, 1.328529f, -13.701630f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.015870f, 0.240190f, 2.634373f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.101385f, 0.011373f, -1.090357f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.005883f, 0.185341f, 0.821835f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.072793f, 0.028754f, 0.265280f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.584258f, 1.242473f, -0.765631f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000399f, 0.000691f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195419f, 0.040173f, -0.702613f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.307159f, -1.297981f, -0.416069f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000827f, -0.000012f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210984f, -0.051973f, -0.949109f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000052f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.998533f, -0.065870f, 0.283716f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.626111f, -0.020758f, -0.079718f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 43  ms: 1433 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 43, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.057129f, -2.229715f, -2.167190f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.932101f, -1.454227f, -2.505998f );
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

    lastFrame->pBone[2].T = Vect( 6.016899f, -0.014116f, -0.000030f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.038208f, 0.012279f, 0.133622f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.128804f, 0.295617f, 13.618370f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.065550f, -0.255539f, 2.186664f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.086495f, -0.014473f, -1.073811f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.091332f, -0.194896f, 0.334233f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.793076f, 1.339977f, -13.702340f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.011238f, 0.242718f, 2.624589f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100950f, 0.011668f, -1.088152f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.017101f, 0.190940f, 0.811136f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.074459f, 0.029497f, 0.265129f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.578944f, 1.241229f, -0.764570f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000396f, 0.000691f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195485f, 0.040177f, -0.704023f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.298714f, -1.298169f, -0.418636f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000827f, -0.000024f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210911f, -0.051882f, -0.947376f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000051f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.007584f, -0.060472f, 0.284367f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.602806f, -0.021162f, -0.077734f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 44  ms: 1466 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 44, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.966395f, -2.113623f, -1.942627f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.986821f, -1.444745f, -2.560954f );
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

    lastFrame->pBone[2].T = Vect( 6.016956f, -0.014116f, -0.000030f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.039028f, 0.012528f, 0.133557f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.132302f, 0.284135f, 13.617070f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.066643f, -0.257874f, 2.193067f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.087811f, -0.014610f, -1.078909f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.104124f, -0.194606f, 0.345883f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.789759f, 1.350887f, -13.702720f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.006968f, 0.244669f, 2.614938f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100925f, 0.012107f, -1.085312f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.028257f, 0.195725f, 0.800209f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.076061f, 0.030100f, 0.264977f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.571855f, 1.240732f, -0.760982f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000392f, 0.000691f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195499f, 0.040180f, -0.704840f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.287144f, -1.299201f, -0.419071f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000827f, -0.000036f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210833f, -0.051784f, -0.945430f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000051f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.015915f, -0.055360f, 0.284875f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.578676f, -0.021385f, -0.075467f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 45  ms: 1500 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 45, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.911742f, -2.072222f, -1.731934f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.034055f, -1.435160f, -2.608747f );
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

    lastFrame->pBone[2].T = Vect( 6.016833f, -0.014116f, -0.000029f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.039845f, 0.012778f, 0.133492f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.135639f, 0.272663f, 13.615740f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067516f, -0.260042f, 2.199566f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.089336f, -0.014570f, -1.083465f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.116464f, -0.194073f, 0.356638f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.786271f, 1.361731f, -13.703040f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.003065f, 0.246455f, 2.606878f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100271f, 0.012412f, -1.081695f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.038655f, 0.200892f, 0.789654f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.077656f, 0.030702f, 0.264824f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.563626f, 1.240723f, -0.755173f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000389f, 0.000692f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195506f, 0.040181f, -0.704840f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.273563f, -1.301018f, -0.418160f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000826f, -0.000048f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210770f, -0.051717f, -0.944129f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000050f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.023512f, -0.050696f, 0.285214f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.552938f, -0.021680f, -0.072780f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 46  ms: 1533 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 46, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.810130f, -2.049047f, -1.513057f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.070098f, -1.425897f, -2.645170f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.040610f, 0.013014f, 0.133427f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.138968f, 0.261941f, 13.614480f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.068378f, -0.261380f, 2.205429f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.090824f, -0.014785f, -1.087679f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.128179f, -0.193259f, 0.366149f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.783128f, 1.371886f, -13.703390f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.999628f, 0.248626f, 2.599343f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099838f, 0.012894f, -1.078161f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.049082f, 0.205348f, 0.779674f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.079148f, 0.031272f, 0.264673f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.554992f, 1.241410f, -0.747886f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000385f, 0.000692f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195509f, 0.040182f, -0.704616f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.256129f, -1.303480f, -0.414708f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000826f, -0.000060f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210735f, -0.051694f, -0.943050f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000049f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.029930f, -0.046806f, 0.285526f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.526167f, -0.022016f, -0.069634f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 47  ms: 1566 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 47, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.686252f, -1.935355f, -1.286182f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.099050f, -1.417591f, -2.674108f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000027f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.041354f, 0.013309f, 0.133308f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.143067f, 0.251166f, 13.612850f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.070111f, -0.262279f, 2.210844f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.092011f, -0.014445f, -1.091516f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.138394f, -0.192300f, 0.374981f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.779172f, 1.381451f, -13.704110f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.995739f, 0.250720f, 2.592379f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099522f, 0.013167f, -1.074798f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.058015f, 0.209647f, 0.770466f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.080595f, 0.031952f, 0.264412f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.544315f, 1.242749f, -0.738241f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000382f, 0.000692f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195509f, 0.040182f, -0.704021f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.236511f, -1.307132f, -0.409297f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000826f, -0.000072f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210712f, -0.051679f, -0.942831f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000049f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.035117f, -0.043371f, 0.286028f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.498131f, -0.022297f, -0.066038f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 48  ms: 1600 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 48, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.574523f, -1.911437f, -1.028435f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.120446f, -1.410517f, -2.696110f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000026f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.042118f, 0.013545f, 0.133243f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.146265f, 0.240434f, 13.611550f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.071401f, -0.262929f, 2.214849f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.093226f, -0.014422f, -1.095773f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.147843f, -0.190741f, 0.383440f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.775874f, 1.391577f, -13.704430f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.993125f, 0.252827f, 2.587575f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099375f, 0.013624f, -1.070930f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.065477f, 0.213727f, 0.762470f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.082087f, 0.032521f, 0.264259f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.532155f, 1.245203f, -0.725810f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000378f, 0.000693f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195387f, 0.040182f, -0.702616f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.211141f, -1.311486f, -0.399118f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000825f, -0.000085f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210705f, -0.051674f, -0.943268f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000048f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.039342f, -0.040700f, 0.286407f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.469317f, -0.023040f, -0.061703f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 49  ms: 1633 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 49, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.463134f, -1.899016f, -0.805591f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.136519f, -1.404793f, -2.712400f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000025f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.042898f, 0.013728f, 0.133178f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.148838f, 0.229470f, 13.610580f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.072987f, -0.263088f, 2.218028f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.093895f, -0.014337f, -1.099594f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.154444f, -0.189219f, 0.389543f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.773474f, 1.401915f, -13.704390f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.989961f, 0.254921f, 2.583656f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099046f, 0.013906f, -1.067543f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.071517f, 0.217684f, 0.755969f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.083619f, 0.032984f, 0.264103f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.515951f, 1.248908f, -0.708139f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000375f, 0.000693f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195200f, 0.040095f, -0.700538f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.179483f, -1.317190f, -0.383778f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000825f, -0.000097f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210759f, -0.051743f, -0.944565f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000047f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.042259f, -0.038911f, 0.286522f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.439388f, -0.023508f, -0.055785f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 50  ms: 1666 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 50, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.339625f, -1.891868f, -0.615396f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.146748f, -1.400901f, -2.722801f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000024f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.043588f, 0.014007f, 0.133114f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.152688f, 0.219790f, 13.609020f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.074527f, -0.262374f, 2.219823f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.094516f, -0.013962f, -1.103541f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.159692f, -0.187237f, 0.395237f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.769698f, 1.411073f, -13.705060f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.986969f, 0.257199f, 2.581861f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.098845f, 0.014311f, -1.064891f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.075103f, 0.221433f, 0.752545f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.084956f, 0.033628f, 0.263955f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.496554f, 1.254127f, -0.687015f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000371f, 0.000693f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.195007f, 0.039999f, -0.698090f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.138869f, -1.324411f, -0.360431f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000824f, -0.000114f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211067f, -0.051912f, -0.947442f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000047f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.043707f, -0.038062f, 0.286844f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.408454f, -0.024285f, -0.048720f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 51  ms: 1700 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 51, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.181812f, -1.888480f, -0.368718f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.150991f, -1.399175f, -2.727277f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000023f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.044352f, 0.014244f, 0.133048f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.155962f, 0.209067f, 13.607710f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.075713f, -0.261216f, 2.219438f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.094668f, -0.013728f, -1.107749f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.162059f, -0.184884f, 0.399154f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.766469f, 1.421204f, -13.705370f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.985350f, 0.259829f, 2.582259f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099141f, 0.014256f, -1.062449f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.076348f, 0.224189f, 0.750900f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.086448f, 0.034198f, 0.263802f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.472069f, 1.261329f, -0.658864f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000367f, 0.000693f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.194797f, 0.039864f, -0.694453f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.086757f, -1.332709f, -0.326167f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000824f, -0.000137f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211201f, -0.052111f, -0.951118f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000046f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.043707f, -0.038063f, 0.286845f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.376658f, -0.025625f, -0.039970f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 52  ms: 1733 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 52, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.016800f, -1.886306f, -0.147715f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.151035f, -1.399178f, -2.727321f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000022f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.045056f, 0.014472f, 0.132927f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.159144f, 0.198821f, 13.606420f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.077616f, -0.259132f, 2.218842f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.094989f, -0.013242f, -1.111720f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.162915f, -0.182648f, 0.401761f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.763438f, 1.430200f, -13.705710f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.983694f, 0.262067f, 2.583399f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099139f, 0.014661f, -1.060734f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.076281f, 0.226411f, 0.751248f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.087825f, 0.034738f, 0.263536f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.437878f, 1.269741f, -0.618527f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000364f, 0.000694f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.194372f, 0.039655f, -0.688961f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.022435f, -1.342432f, -0.280303f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000823f, -0.000161f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211326f, -0.052335f, -0.955224f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000045f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.042616f, -0.038624f, 0.286710f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.343817f, -0.026717f, -0.030212f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 53  ms: 1766 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 53, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.833286f, -1.899467f, 0.070472f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.149119f, -1.399963f, -2.725378f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000021f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.045720f, 0.014803f, 0.130477f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.165654f, 0.175298f, 13.603820f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.079807f, -0.256909f, 2.219655f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095006f, -0.012739f, -1.115940f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.162533f, -0.180032f, 0.403903f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.760912f, 1.424797f, -13.707350f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.982419f, 0.264526f, 2.588440f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099696f, 0.014646f, -1.059381f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.074682f, 0.228370f, 0.753116f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.089154f, 0.035377f, 0.258612f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.394024f, 1.280200f, -0.566389f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000360f, 0.000694f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.193783f, 0.039383f, -0.681833f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.940044f, -1.353256f, -0.216734f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000823f, -0.000185f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211593f, -0.052599f, -0.959611f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000045f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.040742f, -0.039465f, 0.286576f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.310370f, -0.028188f, -0.019184f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 54  ms: 1800 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 54, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.644948f, -1.985660f, 0.282715f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.146932f, -1.400915f, -2.722987f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000020f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.046319f, 0.015134f, 0.127802f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.172228f, 0.151302f, 13.601100f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.081160f, -0.254724f, 2.219582f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095019f, -0.012576f, -1.120699f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.161968f, -0.177271f, 0.405539f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.758427f, 1.417152f, -13.709170f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.980973f, 0.267421f, 2.593930f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099692f, 0.014703f, -1.058649f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.073255f, 0.230415f, 0.756007f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.090362f, 0.035995f, 0.253237f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.339201f, 1.291355f, -0.500618f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000356f, 0.000694f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.193280f, 0.039073f, -0.672980f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.838438f, -1.363956f, -0.133822f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000822f, -0.000210f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211858f, -0.052845f, -0.963996f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000045f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.038129f, -0.040976f, 0.286638f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.276226f, -0.030140f, -0.007324f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 55  ms: 1833 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 55, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.474925f, -2.030626f, 0.491861f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.143630f, -1.402156f, -2.719807f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000019f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.046914f, 0.015481f, 0.124842f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.179152f, 0.125652f, 13.598190f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.082297f, -0.252535f, 2.219995f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095044f, -0.012318f, -1.125672f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.160717f, -0.175117f, 0.408044f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.755878f, 1.407761f, -13.711190f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.979996f, 0.270106f, 2.599739f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100100f, 0.014915f, -1.057725f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.071065f, 0.232068f, 0.759213f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.091567f, 0.036630f, 0.247293f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.271008f, 1.302383f, -0.419876f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000351f, 0.000694f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.192508f, 0.038685f, -0.662265f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.718200f, -1.373805f, -0.033033f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000793f, -0.000239f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.212078f, -0.053113f, -0.968595f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000044f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.034598f, -0.042819f, 0.286107f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.241436f, -0.032029f, 0.005345f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 56  ms: 1866 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 56, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.315380f, -2.034216f, 0.663386f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.139182f, -1.403873f, -2.715297f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000018f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.047446f, 0.015827f, 0.121713f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.186258f, 0.099878f, 13.595190f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.083722f, -0.250299f, 2.220202f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095144f, -0.011822f, -1.130848f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.159493f, -0.172737f, 0.410207f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.753516f, 1.396486f, -13.713340f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.978796f, 0.272774f, 2.606207f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100567f, 0.014962f, -1.057707f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.068760f, 0.233827f, 0.762799f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.092651f, 0.037242f, 0.241011f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.191210f, 1.312529f, -0.325421f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000347f, 0.000694f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.191692f, 0.038271f, -0.650572f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.577493f, -1.381968f, 0.088576f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000767f, -0.000268f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.212295f, -0.053362f, -0.973188f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000044f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.030453f, -0.045061f, 0.286187f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.206035f, -0.033980f, 0.018252f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 57  ms: 1900 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 57, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.153959f, -2.117258f, 0.828223f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.134803f, -1.405598f, -2.710660f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000017f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.047866f, 0.016153f, 0.118473f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.193069f, 0.074929f, 13.592250f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.085396f, -0.247833f, 2.221094f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095357f, -0.011311f, -1.135907f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.157907f, -0.170347f, 0.411965f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.751399f, 1.383013f, -13.715600f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.977763f, 0.275088f, 2.612640f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100870f, 0.014983f, -1.057603f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.066043f, 0.234781f, 0.766952f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.093522f, 0.037795f, 0.234509f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, -0.097674f, 1.320722f, -0.215342f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000342f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.190744f, 0.037817f, -0.637674f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.420610f, -1.386676f, 0.225454f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000740f, -0.000296f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.212668f, -0.053655f, -0.978487f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000044f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.025531f, -0.047668f, 0.285730f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.170045f, -0.035930f, 0.031382f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 58  ms: 1933 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 58, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.025664f, -2.160589f, 0.949383f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.129159f, -1.407608f, -2.705109f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000015f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048242f, 0.016418f, 0.115173f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.199039f, 0.050215f, 13.589640f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.087423f, -0.245744f, 2.221710f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095379f, -0.010488f, -1.141155f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.155781f, -0.168454f, 0.413778f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.750126f, 1.368555f, -13.717570f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.977506f, 0.277621f, 2.620568f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.101245f, 0.014967f, -1.057424f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.063109f, 0.236034f, 0.771645f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.094312f, 0.038213f, 0.227892f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.009098f, 1.326503f, -0.090889f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000337f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.189674f, 0.037319f, -0.623192f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.249695f, -1.387513f, 0.376766f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000709f, -0.000325f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.212839f, -0.053895f, -0.983290f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000044f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.020201f, -0.050680f, 0.285783f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.133825f, -0.037893f, 0.045209f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 59  ms: 1966 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 59, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.845604f, -2.175451f, 1.108634f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.121870f, -1.410248f, -2.697552f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000014f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048543f, 0.016730f, 0.111763f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.205634f, 0.025870f, 13.586710f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.088417f, -0.243480f, 2.221665f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095296f, -0.010219f, -1.145515f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.153290f, -0.166532f, 0.415299f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.748186f, 1.352427f, -13.720000f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.976460f, 0.279876f, 2.627957f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.101505f, 0.015161f, -1.057831f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.059414f, 0.237076f, 0.776998f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.094953f, 0.038713f, 0.221056f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.123963f, 1.328407f, 0.043401f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000331f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.188531f, 0.036793f, -0.607348f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.077342f, -1.383937f, 0.529072f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000654f, -0.000363f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.213208f, -0.054138f, -0.988575f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000044f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.014120f, -0.053729f, 0.285356f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.097365f, -0.039934f, 0.058606f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 60  ms: 2000 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 60, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.727711f, -2.272955f, 1.183421f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.114645f, -1.412716f, -2.690235f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000013f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048755f, 0.016957f, 0.108467f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.210906f, 0.003366f, 13.584300f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.089517f, -0.241438f, 2.222442f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.095138f, -0.009551f, -1.149783f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.150652f, -0.164736f, 0.416438f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.747263f, 1.335704f, -13.721990f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.976680f, 0.282071f, 2.636167f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.102007f, 0.014876f, -1.057911f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.055798f, 0.237450f, 0.782204f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095424f, 0.039034f, 0.214449f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.241147f, 1.326232f, 0.180898f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000326f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.187263f, 0.036270f, -0.591489f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.088915f, -1.375428f, 0.675411f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000587f, -0.000396f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.213478f, -0.054525f, -0.993726f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000044f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.007776f, -0.057362f, 0.285308f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.060735f, -0.041805f, 0.072140f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 61  ms: 2033 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 61, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.622861f, -2.318129f, 1.253910f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.105270f, -1.415787f, -2.680743f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000012f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048910f, 0.017166f, 0.105284f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.215883f, -0.017676f, 13.582040f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.090436f, -0.239443f, 2.223012f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.094973f, -0.009506f, -1.153841f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.147547f, -0.163295f, 0.417801f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.746525f, 1.318887f, -13.723960f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.977015f, 0.283878f, 2.643711f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.102416f, 0.014673f, -1.058045f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.051885f, 0.237746f, 0.787129f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095781f, 0.039318f, 0.208073f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.356832f, 1.319937f, 0.317908f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000320f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.186127f, 0.035748f, -0.574551f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.240875f, -1.363013f, 0.807101f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000513f, -0.000422f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.213743f, -0.054768f, -0.998791f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000044f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 2.000734f, -0.061032f, 0.284778f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.024061f, -0.043849f, 0.085215f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 62  ms: 2066 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 62, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.552230f, -2.323580f, 1.289817f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.094365f, -1.419137f, -2.669879f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000011f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048902f, 0.017327f, 0.102218f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.219966f, -0.035848f, 13.580120f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.091294f, -0.237419f, 2.223443f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.094865f, -0.009176f, -1.156973f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.144245f, -0.161970f, 0.418081f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.746229f, 1.300488f, -13.725820f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.977710f, 0.285510f, 2.652002f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.102829f, 0.014466f, -1.058143f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.047838f, 0.237790f, 0.792642f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095817f, 0.039494f, 0.201935f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.464250f, 1.309588f, 0.448049f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000268f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.184748f, 0.035206f, -0.556779f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.375156f, -1.347067f, 0.920931f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000461f, -0.000439f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.214213f, -0.055122f, -1.004422f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000045f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.993433f, -0.064807f, 0.284871f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.012960f, -0.045559f, 0.097743f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 63  ms: 2100 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 63, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.481674f, -2.322729f, 1.284779f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.082702f, -1.422638f, -2.657911f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000010f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048787f, 0.017447f, 0.099380f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.223344f, -0.051226f, 13.578500f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.091727f, -0.235665f, 2.223206f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.094371f, -0.008748f, -1.159101f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.140147f, -0.160846f, 0.417055f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.746267f, 1.281995f, -13.727520f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.978478f, 0.286629f, 2.660291f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.102805f, 0.014829f, -1.058087f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.043691f, 0.237157f, 0.798308f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095641f, 0.039591f, 0.196259f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.559508f, 1.295191f, 0.566353f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000210f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.183420f, 0.034682f, -0.538678f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.491766f, -1.329300f, 1.016995f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000384f, -0.000453f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.214426f, -0.055462f, -1.009770f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000045f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.985729f, -0.068825f, 0.284409f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.051233f, -0.046978f, 0.109621f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 64  ms: 2133 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 64, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.443647f, -2.426981f, 1.215673f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.069763f, -1.426257f, -2.644832f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000008f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048568f, 0.017531f, 0.096715f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.226147f, -0.064146f, 13.577200f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.091476f, -0.234410f, 2.223830f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.093857f, -0.008715f, -1.160153f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.135750f, -0.160789f, 0.416267f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.746838f, 1.263077f, -13.729090f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.980374f, 0.287203f, 2.668804f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.103487f, 0.014634f, -1.058800f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.039348f, 0.235425f, 0.803984f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.095253f, 0.039610f, 0.190930f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.640498f, 1.277854f, 0.671110f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000149f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.182045f, 0.034181f, -0.520788f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.592388f, -1.310107f, 1.096374f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000298f, -0.000465f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.214742f, -0.055720f, -1.015320f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000046f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.977905f, -0.073068f, 0.284227f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.095810f, -0.047613f, 0.121459f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 65  ms: 2166 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 65, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.507599f, -2.452188f, 1.052954f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.054992f, -1.430148f, -2.629886f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000007f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.048247f, 0.017563f, 0.094448f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.227906f, -0.073336f, 13.576350f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.091103f, -0.233923f, 2.223598f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.093456f, -0.008504f, -1.160239f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.130978f, -0.161106f, 0.414284f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.747701f, 1.245124f, -13.730360f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.982078f, 0.286302f, 2.676510f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.103294f, 0.014432f, -1.059478f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.035020f, 0.233081f, 0.810085f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.094660f, 0.039540f, 0.186404f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.708395f, 1.258723f, 0.763648f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000108f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.180673f, 0.033685f, -0.501973f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.678811f, -1.290332f, 1.161870f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000227f, -0.000476f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.214904f, -0.056149f, -1.020951f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000047f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.969763f, -0.077520f, 0.284266f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.149607f, -0.047550f, 0.133165f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 66  ms: 2200 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 66, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.606009f, -2.458895f, 0.782261f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.038491f, -1.434133f, -2.613055f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000006f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.047783f, 0.017480f, 0.092522f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.227905f, -0.078586f, 13.576320f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.090672f, -0.233771f, 2.224578f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.092983f, -0.008378f, -1.158852f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.125976f, -0.162432f, 0.411376f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.749965f, 1.227208f, -13.731030f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.984723f, 0.284965f, 2.684071f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.103251f, 0.014271f, -1.060641f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.030780f, 0.230073f, 0.815958f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.093783f, 0.039243f, 0.182565f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.762594f, 1.237956f, 0.842264f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000037f, 0.000695f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.179249f, 0.033222f, -0.483743f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.753679f, -1.270738f, 1.215596f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000167f, -0.000479f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.215260f, -0.056440f, -1.026348f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000049f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.961549f, -0.081945f, 0.284080f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.210456f, -0.046870f, 0.144243f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 67  ms: 2233 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 67, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.763794f, -2.458364f, 0.440965f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 1.018139f, -1.438445f, -2.592536f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000005f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.047205f, 0.017397f, 0.091054f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.227639f, -0.079536f, 13.576460f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.089726f, -0.234003f, 2.225349f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.092437f, -0.008360f, -1.156340f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.120640f, -0.164197f, 0.408451f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.751959f, 1.210465f, -13.731700f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.987720f, 0.283028f, 2.691030f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.103173f, 0.014128f, -1.061724f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.026426f, 0.226279f, 0.821070f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.092668f, 0.038959f, 0.179646f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.805377f, 1.216831f, 0.909720f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000005f, 0.000669f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.177884f, 0.032794f, -0.465189f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.817950f, -1.251858f, 1.258554f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000098f, -0.000486f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.215565f, -0.056843f, -1.032033f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000050f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.953105f, -0.086390f, 0.283987f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.276858f, -0.045825f, 0.155110f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 68  ms: 2266 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 68, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -0.928420f, -2.392344f, 0.085646f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.995606f, -1.442831f, -2.569811f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000004f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.046431f, 0.017181f, 0.089984f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.225211f, -0.075509f, 13.577550f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.087620f, -0.234604f, 2.225300f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.091523f, -0.008908f, -1.151792f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.114571f, -0.166205f, 0.403169f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.755474f, 1.193375f, -13.731680f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.991234f, 0.280706f, 2.698413f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.103090f, 0.014062f, -1.061797f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.022053f, 0.222156f, 0.826058f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.091165f, 0.038410f, 0.177531f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.837733f, 1.195777f, 0.967178f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000062f, 0.000639f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.176412f, 0.032396f, -0.447006f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.874954f, -1.234319f, 1.294198f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000031f, -0.000493f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.215974f, -0.057043f, -1.037835f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000052f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.944709f, -0.090900f, 0.283981f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.347145f, -0.044486f, 0.164938f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 69  ms: 2300 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 69, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.131884f, -2.370314f, -0.298766f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.972051f, -1.447198f, -2.546256f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.045578f, 0.016853f, 0.089479f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.221012f, -0.067041f, 13.579500f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.085946f, -0.235168f, 2.226353f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.090685f, -0.009200f, -1.144372f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.108121f, -0.168617f, 0.396524f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.760231f, 1.178548f, -13.730960f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.995352f, 0.277973f, 2.706400f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.102846f, 0.014128f, -1.059615f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.017124f, 0.217973f, 0.829492f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.089500f, 0.037657f, 0.176554f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.860202f, 1.175636f, 1.015105f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000100f, 0.000633f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.175020f, 0.032022f, -0.429640f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.925533f, -1.219500f, 1.322976f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000010f, -0.000500f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.216172f, -0.057435f, -1.043303f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000054f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.936294f, -0.095380f, 0.283981f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.419157f, -0.042929f, 0.173094f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 70  ms: 2333 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 70, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.317812f, -2.248064f, -0.626740f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.944800f, -1.451948f, -2.518957f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000001f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.044572f, 0.016460f, 0.089375f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.215814f, -0.054105f, 13.581970f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.084669f, -0.235468f, 2.228222f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.089128f, -0.009634f, -1.134166f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.101453f, -0.170773f, 0.388381f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.765759f, 1.164018f, -13.729910f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 2.999385f, 0.275006f, 2.714208f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.102243f, 0.014365f, -1.054956f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.012643f, 0.213404f, 0.831539f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.087528f, 0.036781f, 0.176381f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.876528f, 1.156289f, 1.056414f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000147f, 0.000628f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.173729f, 0.031646f, -0.412329f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.971049f, -1.206114f, 1.346353f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000065f, -0.000508f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.216522f, -0.057722f, -1.048751f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000055f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.927969f, -0.099740f, 0.283976f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.491556f, -0.041164f, 0.180424f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 71  ms: 2366 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 71, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.460479f, -2.106909f, -0.978099f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.914732f, -1.456767f, -2.488343f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000000f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.043386f, 0.016064f, 0.089559f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.210304f, -0.037009f, 13.584540f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.083845f, -0.235188f, 2.231184f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.087674f, -0.010530f, -1.121162f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.094469f, -0.172368f, 0.378615f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.771086f, 1.148724f, -13.728940f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.004165f, 0.272339f, 2.722960f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.101509f, 0.014851f, -1.048547f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.007824f, 0.209039f, 0.832188f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.085190f, 0.035894f, 0.176789f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.887262f, 1.138641f, 1.091309f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000177f, 0.000623f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.172489f, 0.031387f, -0.395840f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.012622f, -1.194790f, 1.365279f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000100f, -0.000516f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.216668f, -0.058071f, -1.054422f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000057f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.919674f, -0.104279f, 0.283918f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.562290f, -0.039672f, 0.186612f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 72  ms: 2400 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 72, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.567056f, -1.955924f, -1.249151f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.880801f, -1.461583f, -2.454199f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000001f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.042165f, 0.015592f, 0.089911f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.203677f, -0.018441f, 13.587590f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.083079f, -0.234546f, 2.234479f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.086111f, -0.011657f, -1.107224f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.087215f, -0.173412f, 0.367643f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.777388f, 1.133952f, -13.727520f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.008682f, 0.269821f, 2.732628f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.100609f, 0.015368f, -1.039966f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, -0.002695f, 0.205065f, 0.831712f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.082787f, 0.034858f, 0.177535f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.894914f, 1.121585f, 1.123102f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000180f, 0.000618f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.171275f, 0.031160f, -0.380330f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.050773f, -1.184905f, 1.380495f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000130f, -0.000524f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.217156f, -0.058444f, -1.060000f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000059f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.911596f, -0.108396f, 0.284222f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.629799f, -0.038395f, 0.192136f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 73  ms: 2433 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 73, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.677253f, -1.815032f, -1.489013f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.842684f, -1.466386f, -2.415863f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000002f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.040836f, 0.015087f, 0.090321f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.196645f, 0.001953f, 13.590830f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.082902f, -0.233337f, 2.236961f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.084510f, -0.012253f, -1.092876f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.080103f, -0.173892f, 0.356880f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.784133f, 1.118058f, -13.726000f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.013154f, 0.267871f, 2.742699f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099633f, 0.016250f, -1.030447f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.003034f, 0.201743f, 0.831406f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.080169f, 0.033751f, 0.178398f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.899332f, 1.106316f, 1.150765f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000183f, 0.000614f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.170139f, 0.030871f, -0.365413f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.085889f, -1.177427f, 1.391778f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000162f, -0.000532f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.217347f, -0.058712f, -1.065439f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000061f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.903676f, -0.112487f, 0.284205f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.692225f, -0.037147f, 0.196489f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 74  ms: 2466 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 74, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.739107f, -1.659923f, -1.638330f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.799662f, -1.471136f, -2.372786f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000003f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.039472f, 0.014509f, 0.090899f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.188418f, 0.023793f, 13.594540f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.082989f, -0.231593f, 2.239565f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.082592f, -0.013243f, -1.078567f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.072348f, -0.173652f, 0.345810f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.791702f, 1.102652f, -13.724010f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.018354f, 0.266156f, 2.752330f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.099171f, 0.016619f, -1.020387f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.008649f, 0.198516f, 0.829823f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.077487f, 0.032498f, 0.179599f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.900967f, 1.092557f, 1.175068f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000186f, 0.000610f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.168961f, 0.030630f, -0.352395f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.118530f, -1.171829f, 1.400349f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000187f, -0.000540f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.217427f, -0.059116f, -1.070748f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000064f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.896129f, -0.116668f, 0.284524f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.748054f, -0.035942f, 0.199675f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 75  ms: 2500 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 75, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.795290f, -1.515155f, -1.789299f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.749891f, -1.475923f, -2.322777f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000004f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.037982f, 0.013951f, 0.091594f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.180421f, 0.048082f, 13.598100f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.082687f, -0.229746f, 2.241379f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.081019f, -0.013966f, -1.065048f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.064562f, -0.173652f, 0.334433f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.799006f, 1.086239f, -13.722250f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.022520f, 0.264435f, 2.761037f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.098397f, 0.017154f, -1.011498f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.014758f, 0.195387f, 0.829711f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.074549f, 0.031276f, 0.181035f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.900987f, 1.080915f, 1.196494f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000189f, 0.000607f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.167936f, 0.030584f, -0.340051f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.148889f, -1.168680f, 1.405368f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000199f, -0.000548f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.217857f, -0.059442f, -1.075890f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000066f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.888821f, -0.120522f, 0.284801f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.795177f, -0.034904f, 0.201538f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 76  ms: 2533 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 76, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.851940f, -1.377208f, -1.920526f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.692001f, -1.480658f, -2.264807f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000006f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.036398f, 0.013306f, 0.092401f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.171337f, 0.074320f, 13.602170f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.082026f, -0.227669f, 2.241615f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.079377f, -0.015035f, -1.052112f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.056755f, -0.173002f, 0.322815f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.807496f, 1.069209f, -13.720030f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.027789f, 0.262380f, 2.770312f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097348f, 0.017698f, -1.003356f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.020685f, 0.192111f, 0.829642f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.071431f, 0.029877f, 0.182697f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.898787f, 1.070695f, 1.215004f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000191f, 0.000604f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.167203f, 0.030437f, -0.329131f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.177865f, -1.167957f, 1.408737f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000210f, -0.000556f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.218083f, -0.059823f, -1.081251f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000068f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.881749f, -0.124049f, 0.285036f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.832000f, -0.033458f, 0.202053f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 77  ms: 2566 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 77, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.911266f, -1.331191f, -2.058517f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.626369f, -1.485165f, -2.198921f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000007f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.034799f, 0.012717f, 0.093267f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.162726f, 0.101113f, 13.605850f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.081041f, -0.225720f, 2.240628f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.077921f, -0.015418f, -1.041867f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.048439f, -0.172918f, 0.312480f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.815014f, 1.052316f, -13.718110f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.031430f, 0.260642f, 2.777521f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097056f, 0.017946f, -0.998319f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.027432f, 0.189108f, 0.831424f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.068278f, 0.028584f, 0.184472f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.894435f, 1.063366f, 1.229288f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000192f, 0.000601f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.166550f, 0.030312f, -0.319957f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.203969f, -1.170404f, 1.408363f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000218f, -0.000563f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.218355f, -0.060161f, -1.086394f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000070f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.875541f, -0.127588f, 0.285038f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.856895f, -0.031946f, 0.200565f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 78  ms: 2600 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 78, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.912125f, -1.235915f, -2.138653f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.553820f, -1.489265f, -2.125946f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000008f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.033109f, 0.012040f, 0.094301f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.152942f, 0.130174f, 13.610030f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.079796f, -0.223240f, 2.237805f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.076790f, -0.015977f, -1.033656f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.040592f, -0.172250f, 0.302358f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.823714f, 1.035199f, -13.715720f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.036029f, 0.258445f, 2.783443f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.096832f, 0.017930f, -0.996226f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.033828f, 0.185782f, 0.834831f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.064950f, 0.027112f, 0.186588f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.889166f, 1.057845f, 1.241720f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000194f, 0.000598f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.165823f, 0.030196f, -0.312078f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.227979f, -1.175768f, 1.405442f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000224f, -0.000570f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.218576f, -0.060418f, -1.091036f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000073f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.869598f, -0.130684f, 0.285404f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.867492f, -0.030287f, 0.197453f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 79  ms: 2633 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 79, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.959746f, -1.342879f, -2.218292f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.470099f, -1.493036f, -2.041952f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000009f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.031363f, 0.011351f, 0.095393f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.142868f, 0.160319f, 13.614240f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.078399f, -0.221124f, 2.233003f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.075573f, -0.016004f, -1.028763f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.031946f, -0.172343f, 0.293514f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.832504f, 1.017652f, -13.713280f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.039915f, 0.256321f, 2.787520f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097075f, 0.017622f, -0.997042f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.040945f, 0.182204f, 0.839750f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.061514f, 0.025606f, 0.188815f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.882097f, 1.055001f, 1.250412f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000195f, 0.000595f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.165355f, 0.030189f, -0.306392f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.249512f, -1.184595f, 1.399099f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000226f, -0.000575f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.218841f, -0.060808f, -1.096245f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000075f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.864256f, -0.133625f, 0.285666f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.869602f, -0.028229f, 0.192686f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 80  ms: 2666 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 80, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.001003f, -1.395453f, -2.281960f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.376390f, -1.496263f, -1.948142f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000010f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.029544f, 0.010703f, 0.096543f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.133512f, 0.191868f, 13.618100f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.076963f, -0.218781f, 2.226439f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.074478f, -0.015883f, -1.025173f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.023398f, -0.172130f, 0.285446f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.840905f, 0.999488f, -13.711110f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.043947f, 0.254062f, 2.791159f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097156f, 0.017320f, -0.999462f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.047472f, 0.178947f, 0.845887f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.057928f, 0.024174f, 0.191158f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.874850f, 1.054315f, 1.257985f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000196f, 0.000592f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164968f, 0.030183f, -0.301926f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.260986f, -1.211100f, 1.371641f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000191f, -0.000580f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.219166f, -0.061112f, -1.101863f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000077f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.859914f, -0.135874f, 0.285652f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.869267f, -0.026387f, 0.187681f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 81  ms: 2700 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 81, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.044925f, -1.484408f, -2.359462f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.275192f, -1.498785f, -1.846499f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000011f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.027687f, 0.009985f, 0.097804f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.122950f, 0.224585f, 13.622320f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.075504f, -0.216121f, 2.218955f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.073557f, -0.015938f, -1.022953f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.015041f, -0.171651f, 0.277686f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.849934f, 0.981453f, -13.708530f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.048106f, 0.251622f, 2.793488f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097389f, 0.016769f, -1.003746f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.054822f, 0.175183f, 0.852763f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.054274f, 0.022601f, 0.193723f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.865346f, 1.054748f, 1.264002f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000197f, 0.000589f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164688f, 0.030179f, -0.298358f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.251300f, -1.264214f, 1.305901f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000092f, -0.000585f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.219437f, -0.061539f, -1.108475f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000079f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.856526f, -0.137699f, 0.285937f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.867438f, -0.024290f, 0.181892f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 82  ms: 2733 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 82, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.070745f, -1.563281f, -2.405236f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.163045f, -1.500566f, -1.734239f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000012f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.025830f, 0.009271f, 0.099122f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.112406f, 0.257644f, 13.626480f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.073592f, -0.213454f, 2.210725f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.072891f, -0.015542f, -1.021951f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.006686f, -0.171809f, 0.269679f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.858928f, 0.963772f, -13.705950f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.051448f, 0.248840f, 2.795850f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097448f, 0.016353f, -1.009112f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.062392f, 0.171460f, 0.860523f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.050622f, 0.021030f, 0.196397f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.855914f, 1.055682f, 1.270801f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000197f, 0.000586f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164557f, 0.030176f, -0.294712f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.194437f, -1.335197f, 1.181269f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000054f, -0.000588f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.219860f, -0.061999f, -1.115847f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000082f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.854189f, -0.138819f, 0.285980f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.864221f, -0.022184f, 0.176023f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 83  ms: 2766 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 83, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.129990f, -1.721400f, -2.498342f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.039254f, -1.501446f, -1.609976f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000013f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.023859f, 0.008533f, 0.100496f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.101517f, 0.292612f, 13.630660f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.072325f, -0.210382f, 2.201669f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.071969f, -0.015233f, -1.021037f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.003176f, -0.171100f, 0.260691f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.868199f, 0.944883f, -13.703280f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.056203f, 0.246367f, 2.798005f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097898f, 0.015458f, -1.015284f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.070245f, 0.167727f, 0.868595f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.046748f, 0.019393f, 0.199184f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.845606f, 1.058304f, 1.276971f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000198f, 0.000582f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164377f, 0.030175f, -0.292509f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.008548f, -1.414346f, 0.922325f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000217f, -0.000590f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220223f, -0.062466f, -1.122797f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000084f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.852566f, -0.139631f, 0.285943f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.859269f, -0.020101f, 0.169384f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 84  ms: 2800 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 84, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.223562f, -1.872828f, -2.576365f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.134256f, -1.500865f, -1.436557f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000014f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.021960f, 0.007757f, 0.101925f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.090093f, 0.326948f, 13.635010f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.070887f, -0.206331f, 2.190688f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.070342f, -0.015215f, -1.018812f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.016321f, -0.169738f, 0.249476f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.877975f, 0.927300f, -13.700320f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.060897f, 0.243173f, 2.803239f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.098448f, 0.014750f, -1.020431f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.081232f, 0.163165f, 0.878608f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.043020f, 0.017689f, 0.202077f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.834686f, 1.062098f, 1.283108f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000198f, 0.000579f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164173f, 0.030174f, -0.290396f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.413591f, -1.473744f, 0.252012f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000365f, -0.000590f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220432f, -0.062813f, -1.128967f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000086f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851798f, -0.140115f, 0.285926f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.852762f, -0.018174f, 0.162322f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 85  ms: 2833 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 85, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.193858f, -2.023649f, -2.615117f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.354950f, -1.496858f, -1.215125f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000015f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.019932f, 0.007011f, 0.103412f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.079008f, 0.363421f, 13.639020f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.070374f, -0.199954f, 2.178596f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.068212f, -0.014907f, -1.013015f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.033492f, -0.167167f, 0.233011f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.887284f, 0.908315f, -13.697590f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.067139f, 0.238934f, 2.811912f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.098429f, 0.014117f, -1.024417f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.095843f, 0.156501f, 0.891468f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.039033f, 0.016025f, 0.205083f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.823525f, 1.066384f, 1.289359f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000198f, 0.000575f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164035f, 0.030173f, -0.289035f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.486430f, -1.455483f, -0.719942f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000451f, -0.000559f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220773f, -0.063200f, -1.133868f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000088f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851470f, -0.140311f, 0.286152f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.845077f, -0.016198f, 0.154984f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 86  ms: 2866 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 86, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.201080f, -2.169863f, -2.707284f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.579722f, -1.487853f, -0.989661f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000016f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.017900f, 0.006271f, 0.105012f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.067855f, 0.400612f, 13.642950f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.070770f, -0.192489f, 2.165456f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.065450f, -0.014813f, -1.004578f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.054844f, -0.163495f, 0.212110f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.896421f, 0.889980f, -13.694870f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.074179f, 0.234174f, 2.823898f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.098526f, 0.013552f, -1.026788f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.113343f, 0.148854f, 0.905202f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.035044f, 0.014365f, 0.208312f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.811109f, 1.071865f, 1.294699f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000198f, 0.000569f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.163922f, 0.030173f, -0.288202f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.856818f, -1.386344f, -1.155091f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000448f, -0.000462f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220755f, -0.063410f, -1.136737f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000090f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851231f, -0.140484f, 0.286220f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.835862f, -0.014235f, 0.147383f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 87  ms: 2900 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 87, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.187233f, -2.257643f, -2.783048f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.771791f, -1.473929f, -0.796817f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000017f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.015867f, 0.005535f, 0.106554f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.056812f, 0.437493f, 13.646700f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.072321f, -0.183706f, 2.152461f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.062552f, -0.014450f, -0.993287f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.077883f, -0.158878f, 0.188603f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.905459f, 0.871286f, -13.692160f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.082621f, 0.228567f, 2.839025f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.098305f, 0.012798f, -1.027477f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.133137f, 0.140337f, 0.919801f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.031055f, 0.012712f, 0.211422f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.798581f, 1.078166f, 1.299851f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000198f, 0.000563f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.163863f, 0.030178f, -0.288059f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.978968f, -1.317132f, -1.329780f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000397f, -0.000332f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220788f, -0.063441f, -1.137217f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000092f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851211f, -0.140452f, 0.286187f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.825278f, -0.012343f, 0.139328f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 88  ms: 2933 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 88, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.185170f, -2.419073f, -2.861544f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.918117f, -1.456417f, -0.649844f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000018f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.013777f, 0.004789f, 0.108152f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.045619f, 0.475531f, 13.650390f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.074252f, -0.174004f, 2.140377f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.059316f, -0.014323f, -0.979316f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.102410f, -0.153195f, 0.163431f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.914605f, 0.852151f, -13.689410f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.091102f, 0.222041f, 2.855153f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097909f, 0.012256f, -1.026310f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.153896f, 0.131207f, 0.934037f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.026951f, 0.011030f, 0.214641f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.786335f, 1.085488f, 1.305198f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000198f, 0.000557f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.163847f, 0.030193f, -0.288064f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.025142f, -1.264925f, -1.411381f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000294f, -0.000262f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220633f, -0.063207f, -1.134270f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000093f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851450f, -0.140383f, 0.286153f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.813852f, -0.010573f, 0.131151f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 89  ms: 2966 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 89, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.151433f, -2.584826f, -2.919848f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.026958f, -1.436765f, -0.540181f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000019f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.011683f, 0.004054f, 0.109806f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.034441f, 0.513938f, 13.653950f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.076616f, -0.164201f, 2.129348f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.055579f, -0.014442f, -0.963344f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.127056f, -0.147093f, 0.137314f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.923612f, 0.833331f, -13.686690f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.099558f, 0.215012f, 2.872197f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.097093f, 0.011746f, -1.023535f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.174870f, 0.121820f, 0.947679f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.022848f, 0.009352f, 0.217970f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.772851f, 1.093987f, 1.309775f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000171f, 0.000551f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.163893f, 0.030210f, -0.288213f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.043639f, -1.230761f, -1.449180f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000239f, -0.000164f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220272f, -0.062876f, -1.128057f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000095f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851608f, -0.140314f, 0.286215f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.801063f, -0.008761f, 0.122354f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 90  ms: 3000 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 90, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.127929f, -2.706800f, -3.025142f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.102760f, -1.416542f, -0.463563f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000020f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.009603f, 0.003269f, 0.111401f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.022640f, 0.551831f, 13.657670f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.078981f, -0.154092f, 2.120039f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.052117f, -0.014833f, -0.946134f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.150498f, -0.140600f, 0.111285f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.933268f, 0.814358f, -13.683630f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.108078f, 0.207195f, 2.888580f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.096572f, 0.011272f, -1.019648f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.194518f, 0.112266f, 0.959298f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.018779f, 0.007576f, 0.221178f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.760185f, 1.102633f, 1.314584f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000144f, 0.000544f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164149f, 0.030227f, -0.289649f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.054584f, -1.204464f, -1.473072f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000181f, -0.000163f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.220028f, -0.062359f, -1.120628f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000096f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851787f, -0.140283f, 0.285898f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.787111f, -0.007407f, 0.113911f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 91  ms: 3033 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 91, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.076500f, -2.772005f, -3.061355f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.159907f, -1.397242f, -0.405519f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000021f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.007559f, 0.002558f, 0.113053f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.011797f, 0.589576f, 13.660870f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.081708f, -0.144552f, 2.113047f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.048785f, -0.014742f, -0.927365f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.172350f, -0.134631f, 0.086601f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.941856f, 0.796228f, -13.680970f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.115142f, 0.199699f, 2.903369f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.094981f, 0.011089f, -1.015024f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.212781f, 0.103638f, 0.969137f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.014777f, 0.005945f, 0.224495f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.746637f, 1.112344f, 1.318753f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000116f, 0.000538f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164172f, 0.030245f, -0.291175f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.062722f, -1.178591f, -1.493318f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000127f, -0.000104f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.219565f, -0.061803f, -1.112710f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000098f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.852143f, -0.140460f, 0.285837f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.772371f, -0.006146f, 0.104785f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 92  ms: 3066 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 92, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.093637f, -2.878263f, -3.176891f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.197570f, -1.380006f, -0.367363f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000021f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.005474f, 0.001786f, 0.114761f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -6.000156f, 0.628254f, 13.664310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.083869f, -0.136020f, 2.107469f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.045937f, -0.015030f, -0.908900f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.190898f, -0.129103f, 0.063497f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.951323f, 0.777897f, -13.677960f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.122792f, 0.192695f, 2.917045f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093853f, 0.010598f, -1.009097f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.227961f, 0.095824f, 0.976141f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.010702f, 0.004181f, 0.227920f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.732827f, 1.122303f, 1.322274f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000092f, 0.000531f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164248f, 0.030264f, -0.292545f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.069381f, -1.153477f, -1.511466f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000113f, 0.000033f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.219136f, -0.061330f, -1.104014f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000099f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.852693f, -0.140647f, 0.285835f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.756662f, -0.004851f, 0.095838f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 93  ms: 3100 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 93, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.059071f, -2.900721f, -3.279517f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.222864f, -1.366071f, -0.341361f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000022f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.003424f, 0.001089f, 0.116411f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.989352f, 0.666086f, 13.667200f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.084883f, -0.128863f, 2.104503f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.043364f, -0.015356f, -0.891342f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.206137f, -0.124600f, 0.044211f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.959593f, 0.759690f, -13.675330f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.129199f, 0.186241f, 2.927501f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092711f, 0.010414f, -1.003780f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.240406f, 0.089015f, 0.981430f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.006693f, 0.002563f, 0.231226f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.718991f, 1.133163f, 1.325649f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000080f, 0.000525f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164408f, 0.030284f, -0.294753f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.074126f, -1.129203f, -1.526431f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000065f, 0.000042f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.218809f, -0.060652f, -1.094793f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000100f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.853417f, -0.140833f, 0.285739f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.739941f, -0.003867f, 0.086896f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 94  ms: 3133 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 94, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.108073f, -2.905195f, -3.355454f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.239908f, -1.356860f, -0.324176f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000023f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.001372f, 0.000399f, 0.118060f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.978786f, 0.703991f, 13.669980f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.085434f, -0.123918f, 2.103704f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.041501f, -0.015720f, -0.877772f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.216469f, -0.121701f, 0.030678f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.967907f, 0.741472f, -13.672740f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.133455f, 0.181031f, 2.932706f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091699f, 0.010422f, -1.000046f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.248436f, 0.084550f, 0.983680f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.002680f, 0.000952f, 0.234528f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.705606f, 1.144440f, 1.328671f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000044f, 0.000518f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.164658f, 0.030303f, -0.297633f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.077477f, -1.106212f, -1.539128f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000032f, 0.000088f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.218162f, -0.060057f, -1.084948f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000101f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.854412f, -0.141176f, 0.285516f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.722619f, -0.002832f, 0.077599f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 95  ms: 3166 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 95, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.134717f, -2.891813f, -3.446211f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.245656f, -1.352611f, -0.318254f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000024f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.000628f, -0.000272f, 0.119708f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.968399f, 0.741167f, 13.672530f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.084261f, -0.121906f, 2.102499f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.040547f, -0.015822f, -0.868867f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.221085f, -0.121799f, 0.022607f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.975847f, 0.723965f, -13.670190f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.136902f, 0.178456f, 2.933858f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091364f, 0.010443f, -0.998639f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.251679f, 0.081958f, 0.984068f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.001226f, -0.000620f, 0.237824f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.691992f, 1.156425f, 1.331188f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, 0.000004f, 0.000512f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.165007f, 0.030322f, -0.300436f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.080271f, -1.084392f, -1.550642f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000049f, 0.000214f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.217814f, -0.059353f, -1.074499f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000101f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.855189f, -0.141357f, 0.285418f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.704691f, -0.002267f, 0.068250f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 96  ms: 3200 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 96, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.182896f, -2.785067f, -3.523771f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.244928f, -1.353096f, -0.319000f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000024f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.002648f, -0.000881f, 0.121297f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.958886f, 0.778284f, 13.674600f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.081642f, -0.121480f, 2.103252f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.040139f, -0.016561f, -0.863951f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.220795f, -0.122446f, 0.019873f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.983002f, 0.705864f, -13.668010f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.138930f, 0.176764f, 2.930152f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091181f, 0.010472f, -0.999789f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.251028f, 0.081042f, 0.982598f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.005176f, -0.002078f, 0.241001f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.677451f, 1.168401f, 1.332880f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000034f, 0.000506f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.165043f, 0.030341f, -0.303484f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.082299f, -1.063365f, -1.559797f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000145f, -0.000253f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.217050f, -0.058733f, -1.063841f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000101f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.856083f, -0.141668f, 0.284974f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.685842f, -0.001715f, 0.059008f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 97  ms: 3233 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 97, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.190862f, -2.785666f, -3.570732f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.241428f, -1.355355f, -0.322413f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000025f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.004653f, -0.001539f, 0.122887f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.948742f, 0.815212f, 13.676900f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.079093f, -0.122347f, 2.104153f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.040007f, -0.016542f, -0.859857f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.219713f, -0.124458f, 0.018889f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.990839f, 0.687967f, -13.665500f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.140417f, 0.176367f, 2.925386f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091152f, 0.010502f, -1.001493f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.248687f, 0.080743f, 0.980348f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.009089f, -0.003637f, 0.244174f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.663802f, 1.181306f, 1.334734f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000059f, 0.000500f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.165314f, 0.030359f, -0.306443f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.083199f, -1.043439f, -1.567178f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000147f, 0.000488f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.216628f, -0.058058f, -1.052883f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.857276f, -0.141897f, 0.285062f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.666526f, -0.001381f, 0.049748f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 98  ms: 3266 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 98, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.256099f, -2.760351f, -3.627091f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.236039f, -1.359276f, -0.327963f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000025f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.006532f, -0.002220f, 0.124418f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.938168f, 0.850072f, 13.679330f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.075953f, -0.124046f, 2.105520f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.040519f, -0.016906f, -0.858018f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.215711f, -0.126819f, 0.020427f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.998839f, 0.671433f, -13.662760f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.141332f, 0.176283f, 2.918678f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091267f, 0.010530f, -1.003373f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.245123f, 0.081285f, 0.977586f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.012748f, -0.005230f, 0.247230f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.649890f, 1.194189f, 1.335470f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000082f, 0.000494f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.165679f, 0.030377f, -0.310388f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.084515f, -1.025018f, -1.573950f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000554f, 0.001429f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.216316f, -0.057178f, -1.041320f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.858500f, -0.142234f, 0.284740f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.646808f, -0.001417f, 0.040563f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 99  ms: 3300 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 99, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.377657f, -2.652689f, -3.764510f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.226192f, -1.364147f, -0.338133f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000026f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.008504f, -0.002797f, 0.125948f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.929218f, 0.886209f, 13.680970f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.072586f, -0.126124f, 2.107242f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.040914f, -0.017501f, -0.856894f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.211015f, -0.129542f, 0.023477f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.005729f, 0.653682f, -13.660670f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.141055f, 0.176739f, 2.911010f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091437f, 0.010556f, -1.005253f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.240167f, 0.082187f, 0.973588f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.016597f, -0.006638f, 0.250280f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.635666f, 1.207178f, 1.335498f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000105f, 0.000489f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.166039f, 0.030393f, -0.314329f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.084454f, -1.007399f, -1.578354f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000017f, 0.000048f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.215394f, -0.056627f, -1.029669f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.859456f, -0.142372f, 0.284322f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.626511f, -0.001575f, 0.031642f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 100  ms: 3333 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 100, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.456545f, -2.595610f, -3.841675f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.215435f, -1.370231f, -0.349116f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000026f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.010292f, -0.003386f, 0.127422f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.919957f, 0.919506f, 13.682750f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.069384f, -0.128873f, 2.109379f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.041166f, -0.017859f, -0.856632f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.205432f, -0.133098f, 0.027148f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.012535f, 0.638048f, -13.658370f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.140663f, 0.177577f, 2.903003f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091371f, 0.011066f, -1.007185f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.234461f, 0.083942f, 0.968887f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.020083f, -0.008047f, 0.253213f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.621576f, 1.220186f, 1.335308f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000131f, 0.000484f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.166313f, 0.030407f, -0.317817f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.085833f, -0.991387f, -1.583167f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.002547f, -0.005823f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.215177f, -0.055747f, -1.018008f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.860739f, -0.142580f, 0.284248f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.606140f, -0.001838f, 0.022640f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 101  ms: 3366 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 101, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.505050f, -2.546438f, -3.898757f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.201190f, -1.377722f, -0.363472f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000027f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.012085f, -0.003970f, 0.128837f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.910907f, 0.952531f, 13.684430f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.066021f, -0.132059f, 2.112520f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.041999f, -0.018292f, -0.857260f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.198155f, -0.136783f, 0.032773f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.019448f, 0.622064f, -13.656110f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.140531f, 0.178771f, 2.893789f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091810f, 0.010853f, -1.009927f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.227557f, 0.085597f, 0.963765f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.023572f, -0.009451f, 0.256031f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.607756f, 1.233453f, 1.334241f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000177f, 0.000479f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.166617f, 0.030418f, -0.322146f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.085997f, -0.976915f, -1.585498f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000495f, -0.001165f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.214075f, -0.055250f, -1.006287f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.861753f, -0.142589f, 0.284079f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.585350f, -0.002395f, 0.014063f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 102  ms: 3400 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 102, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.596897f, -2.425806f, -3.961577f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.185286f, -1.385864f, -0.379698f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000027f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.013823f, -0.004537f, 0.130083f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.902077f, 0.983756f, 13.685990f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.062523f, -0.136007f, 2.115795f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.042880f, -0.018857f, -0.858685f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.189683f, -0.140496f, 0.039271f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.026171f, 0.605803f, -13.653840f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.140833f, 0.180303f, 2.883922f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091830f, 0.011235f, -1.012331f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.219295f, 0.087970f, 0.957948f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.026952f, -0.010820f, 0.258504f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.593012f, 1.246563f, 1.331504f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000213f, 0.000475f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.166921f, 0.030426f, -0.326626f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.085990f, -0.963485f, -1.586566f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000345f, 0.000631f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.213413f, -0.054705f, -0.994205f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.862896f, -0.142782f, 0.283941f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.564586f, -0.002838f, 0.005467f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 103  ms: 3433 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 103, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.707556f, -2.373037f, -4.053014f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.163859f, -1.394762f, -0.401620f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.015507f, -0.005088f, 0.131383f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.893499f, 1.014622f, 13.687440f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.058015f, -0.140134f, 2.118626f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.044042f, -0.019128f, -0.860708f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.180802f, -0.145143f, 0.046397f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.032586f, 0.590608f, -13.651650f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, -3.141490f, 0.182403f, 2.874089f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092254f, 0.011137f, -1.014678f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.211100f, 0.090593f, 0.951835f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.030228f, -0.012152f, 0.261088f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.578348f, 1.259433f, 1.328306f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000244f, 0.000471f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.167311f, 0.030428f, -0.330947f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.087159f, -0.951675f, -1.587679f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000209f, 0.000339f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.212726f, -0.053893f, -0.981941f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.864001f, -0.142769f, 0.283612f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.543469f, -0.003714f, -0.002944f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 104  ms: 3466 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 104, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.802084f, -2.254065f, -4.103463f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.139398f, -1.404260f, -0.426617f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.017152f, -0.005565f, 0.132570f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.885994f, 1.044263f, 13.688440f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.054410f, -0.144580f, 2.122006f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.045105f, -0.019433f, -0.863584f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.170892f, -0.149696f, 0.055003f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.038167f, 0.575266f, -13.649850f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.140886f, 0.184497f, 2.863480f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092248f, 0.011409f, -1.016943f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.201794f, 0.093898f, 0.944929f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.033433f, -0.013337f, 0.263441f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.563206f, 1.272377f, 1.323604f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000260f, 0.000468f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.167728f, 0.030428f, -0.335264f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.088281f, -0.941269f, -1.587579f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000075f, 0.000075f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.212068f, -0.053163f, -0.969779f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.864975f, -0.142621f, 0.283471f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.522383f, -0.004575f, -0.010896f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 105  ms: 3500 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 105, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.916984f, -2.195421f, -4.194479f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.110069f, -1.414256f, -0.456335f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.018688f, -0.006017f, 0.133699f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.878914f, 1.072064f, 13.689360f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.050615f, -0.149376f, 2.126095f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.046709f, -0.019798f, -0.867252f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.159840f, -0.154190f, 0.064666f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.043435f, 0.561091f, -13.648130f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.139467f, 0.186721f, 2.852219f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092326f, 0.011597f, -1.019660f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.192109f, 0.097025f, 0.938012f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.036422f, -0.014459f, 0.265681f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.547889f, 1.285203f, 1.318001f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000287f, 0.000464f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.167965f, 0.030605f, -0.340125f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.089399f, -0.932363f, -1.586372f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000086f, -0.000239f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.211430f, -0.052427f, -0.957920f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.865778f, -0.142465f, 0.283477f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.501360f, -0.005497f, -0.018735f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 106  ms: 3533 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 106, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.005870f, -2.076952f, -4.253530f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.075107f, -1.424547f, -0.491702f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000029f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.020159f, -0.006474f, 0.133748f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.872608f, 1.092552f, 13.690420f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.046856f, -0.154230f, 2.130960f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.048185f, -0.020140f, -0.871117f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.148677f, -0.158835f, 0.074534f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.049597f, 0.541361f, -13.646170f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.138643f, 0.189169f, 2.842262f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092535f, 0.011724f, -1.022004f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.181433f, 0.100283f, 0.930443f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.039291f, -0.015563f, 0.265760f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.532982f, 1.297412f, 1.311411f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000315f, 0.000461f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.168398f, 0.030685f, -0.344670f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.090989f, -0.925416f, -1.584410f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000178f, 0.000319f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210737f, -0.051869f, -0.946415f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.866570f, -0.142313f, 0.283493f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.480524f, -0.006628f, -0.025776f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 107  ms: 3566 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 107, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.085273f, -2.018976f, -4.312560f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -1.035342f, -1.434864f, -0.531721f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000029f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.021505f, -0.006957f, 0.133801f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.865913f, 1.111336f, 13.691770f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.042721f, -0.159486f, 2.136350f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.049655f, -0.020586f, -0.875659f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.136977f, -0.163239f, 0.085122f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.056163f, 0.523364f, -13.643950f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.137230f, 0.191525f, 2.831775f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092957f, 0.012042f, -1.024447f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.170944f, 0.103607f, 0.922917f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.041906f, -0.016708f, 0.265841f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.516875f, 1.309411f, 1.302795f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000341f, 0.000458f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.168771f, 0.030710f, -0.348989f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.093075f, -0.919746f, -1.581467f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000069f, -0.000167f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.210117f, -0.051117f, -0.934640f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.867096f, -0.142004f, 0.283516f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.459558f, -0.007679f, -0.033031f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 108  ms: 3600 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 108, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.185206f, -1.899451f, -4.381148f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.985347f, -1.445028f, -0.582128f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000029f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.022769f, -0.007307f, 0.133844f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.861062f, 1.128980f, 13.692390f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.039238f, -0.164611f, 2.141304f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.050943f, -0.021339f, -0.880203f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.125339f, -0.167757f, 0.096070f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.060874f, 0.506450f, -13.642490f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.135895f, 0.194033f, 2.820980f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092940f, 0.012046f, -1.026648f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.159837f, 0.107010f, 0.915126f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.044377f, -0.017572f, 0.265920f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.501257f, 1.320881f, 1.294021f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000367f, 0.000456f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.169148f, 0.030746f, -0.354067f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.095114f, -0.916132f, -1.577427f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000007f, -0.000004f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.209429f, -0.050576f, -0.923235f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.867502f, -0.141345f, 0.283540f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.439166f, -0.009149f, -0.039376f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 109  ms: 3633 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 109, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.285838f, -1.862514f, -4.461164f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.925985f, -1.455181f, -0.641926f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000029f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.023948f, -0.007753f, 0.133871f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.854974f, 1.145502f, 13.693670f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.036055f, -0.169835f, 2.146505f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.052837f, -0.021472f, -0.885312f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.112825f, -0.171976f, 0.107393f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.066969f, 0.490754f, -13.640390f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.134435f, 0.196205f, 2.811346f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093251f, 0.012273f, -1.028827f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.148942f, 0.110482f, 0.907558f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.046665f, -0.018617f, 0.266003f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.484210f, 1.331497f, 1.282439f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000390f, 0.000453f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.169671f, 0.030785f, -0.358831f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.097624f, -0.914019f, -1.572670f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000007f, 0.000008f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.208800f, -0.049926f, -0.912232f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.867953f, -0.140847f, 0.283591f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.418921f, -0.010443f, -0.045698f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 110  ms: 3666 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 110, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.349993f, -1.736522f, -4.501412f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.856137f, -1.464908f, -0.712205f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000029f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.025045f, -0.008066f, 0.133892f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.850634f, 1.160514f, 13.694230f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.031979f, -0.175027f, 2.151696f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.054551f, -0.021541f, -0.890850f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.100152f, -0.176587f, 0.119357f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.071169f, 0.475779f, -13.639020f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.132682f, 0.198683f, 2.801059f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093684f, 0.012562f, -1.031195f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.137804f, 0.113965f, 0.899968f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.048808f, -0.019383f, 0.266015f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.467986f, 1.341764f, 1.270302f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000450f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.169860f, 0.030830f, -0.363082f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.100138f, -0.913796f, -1.566510f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000005f, 0.000114f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.208178f, -0.049445f, -0.901367f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.868003f, -0.140010f, 0.283736f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.398991f, -0.011901f, -0.051351f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 111  ms: 3700 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 111, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.449905f, -1.719848f, -4.571959f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.776307f, -1.473646f, -0.792450f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000028f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.026015f, -0.008405f, 0.133912f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.845981f, 1.174163f, 13.695090f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.028773f, -0.180357f, 2.156655f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.056253f, -0.022024f, -0.896921f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.087723f, -0.180632f, 0.131380f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.075822f, 0.462919f, -13.637440f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.131426f, 0.200994f, 2.790738f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093707f, 0.012566f, -1.033282f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.126624f, 0.117601f, 0.892353f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.050695f, -0.020189f, 0.266016f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.450739f, 1.351356f, 1.256567f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000448f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.170356f, 0.030905f, -0.367468f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.103376f, -0.915484f, -1.559626f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000003f, 0.000052f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.207491f, -0.048883f, -0.891300f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.867637f, -0.139168f, 0.283923f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.379707f, -0.013279f, -0.056495f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 112  ms: 3733 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 112, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.567358f, -1.684955f, -4.643022f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.681418f, -1.481644f, -0.887929f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000066f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.026837f, -0.008649f, 0.133931f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.842596f, 1.185414f, 13.695570f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.025211f, -0.185288f, 2.161059f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.057861f, -0.022214f, -0.903123f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.076135f, -0.184888f, 0.143139f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.079185f, 0.451729f, -13.636310f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.129187f, 0.203059f, 2.780597f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093743f, 0.012823f, -1.035428f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.115606f, 0.120869f, 0.885053f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.052298f, -0.020790f, 0.266027f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.432353f, 1.360137f, 1.239456f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000446f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.170610f, 0.030977f, -0.371941f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.106986f, -0.918889f, -1.551540f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000000f, 0.000103f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.206822f, -0.048363f, -0.881287f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.867431f, -0.137963f, 0.284008f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.360396f, -0.014760f, -0.061189f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 113  ms: 3766 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 113, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.654838f, -1.556178f, -4.688126f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.572395f, -1.488482f, -0.997362f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000030f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.027604f, -0.008869f, 0.133954f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.839508f, 1.196264f, 13.695920f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.022567f, -0.190196f, 2.165804f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.059622f, -0.022183f, -0.910479f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.064088f, -0.188518f, 0.155615f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.082098f, 0.441599f, -13.635330f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.126915f, 0.205165f, 2.770253f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093842f, 0.013027f, -1.038281f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.105082f, 0.124186f, 0.878072f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.053797f, -0.021328f, 0.266115f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.415234f, 1.368096f, 1.222506f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000444f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.170859f, 0.031049f, -0.375653f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.110651f, -0.924480f, -1.542287f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000004f, -0.000073f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.206375f, -0.047803f, -0.871719f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.866678f, -0.136832f, 0.284644f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.341654f, -0.016196f, -0.065423f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 114  ms: 3800 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 114, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.728461f, -1.537990f, -4.727800f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.451366f, -1.493940f, -1.118778f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000102f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.028209f, -0.009033f, 0.133993f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.837215f, 1.204879f, 13.696150f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.019989f, -0.194493f, 2.169218f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.061730f, -0.021892f, -0.918000f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.052151f, -0.192577f, 0.167841f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.084321f, 0.433694f, -13.634590f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.125356f, 0.207024f, 2.760353f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.094207f, 0.012788f, -1.041692f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.094972f, 0.127140f, 0.872138f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.054978f, -0.021740f, 0.266208f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.397556f, 1.375144f, 1.203615f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000442f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.171187f, 0.031122f, -0.379970f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.114244f, -0.932068f, -1.531673f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000018f, -0.000134f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.205925f, -0.047427f, -0.862912f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.865837f, -0.135460f, 0.284888f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.323693f, -0.017739f, -0.068786f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 115  ms: 3833 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 115, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.780594f, -1.531631f, -4.777072f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.322993f, -1.497880f, -1.247168f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000019f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.028542f, -0.009124f, 0.134044f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.836008f, 1.209796f, 13.696250f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.017425f, -0.198798f, 2.171400f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.063332f, -0.022031f, -0.926248f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.041151f, -0.195507f, 0.179628f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.085483f, 0.429493f, -13.634220f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.123244f, 0.208967f, 2.751116f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.094437f, 0.012731f, -1.045624f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.085457f, 0.129799f, 0.867550f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.055629f, -0.021960f, 0.266310f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.381410f, 1.380940f, 1.185274f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000440f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.171591f, 0.031192f, -0.384128f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.118475f, -0.942057f, -1.520824f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000099f, 0.000147f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.205208f, -0.047037f, -0.854838f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.864701f, -0.133781f, 0.285441f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.307262f, -0.019123f, -0.071506f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 116  ms: 3866 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 116, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.851237f, -1.618152f, -4.800556f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.196824f, -1.500307f, -1.373832f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, 0.000085f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.028709f, -0.009125f, 0.134097f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.835425f, 1.212064f, 13.696250f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.015290f, -0.202437f, 2.173004f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.065064f, -0.021699f, -0.935295f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.031088f, -0.198409f, 0.191189f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.085930f, 0.427194f, -13.634050f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.120996f, 0.210790f, 2.743048f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.094630f, 0.012731f, -1.049156f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.076476f, 0.132596f, 0.862901f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.055958f, -0.022055f, 0.266303f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.365000f, 1.385703f, 1.164640f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000438f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.171831f, 0.031264f, -0.387840f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.122997f, -0.954861f, -1.508466f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000078f, 0.000066f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.204726f, -0.046644f, -0.847240f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.863069f, -0.131906f, 0.285993f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.291509f, -0.020302f, -0.073421f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 117  ms: 3900 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 117, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.849193f, -1.635360f, -4.769947f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, -0.073738f, -1.501483f, -1.497054f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000031f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.028601f, -0.009126f, 0.134152f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.835879f, 1.210918f, 13.696170f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.013733f, -0.205298f, 2.174542f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.066499f, -0.021565f, -0.944638f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.021652f, -0.200103f, 0.202503f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.085423f, 0.429013f, -13.634230f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.118862f, 0.213401f, 2.736117f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.094959f, 0.012731f, -1.052386f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.068482f, 0.135843f, 0.859457f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.055745f, -0.021974f, 0.266421f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.346673f, 1.389654f, 1.138909f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000437f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.172228f, 0.031340f, -0.391617f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.127848f, -0.971040f, -1.494249f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000199f, -0.000764f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.204396f, -0.046276f, -0.839928f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.861312f, -0.129894f, 0.286732f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.276906f, -0.021151f, -0.074648f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 118  ms: 3933 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 118, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.765263f, -1.640094f, -4.637671f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.039349f, -1.501618f, -1.610073f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.028268f, -0.009036f, 0.134212f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.836974f, 1.206699f, 13.696030f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.013529f, -0.207137f, 2.176189f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.068070f, -0.020954f, -0.953304f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.012820f, -0.200937f, 0.213209f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.084090f, 0.433871f, -13.634650f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.115926f, 0.215957f, 2.729044f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.095276f, 0.012732f, -1.054916f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.061549f, 0.139116f, 0.855950f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.055095f, -0.021753f, 0.266546f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.327968f, 1.392737f, 1.109403f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000435f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.172539f, 0.031421f, -0.396310f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.133341f, -0.990887f, -1.478853f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000681f, -0.002461f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.204494f, -0.045392f, -0.832749f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.859158f, -0.127497f, 0.287342f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.263353f, -0.022185f, -0.075073f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 119  ms: 3966 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 119, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.676661f, -1.661761f, -4.467162f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.134558f, -1.501039f, -1.705513f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.027826f, -0.008927f, 0.134329f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.838428f, 1.201333f, 13.695910f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.013064f, -0.208375f, 2.176556f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.069289f, -0.020569f, -0.961883f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005556f, -0.201000f, 0.222657f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.082557f, 0.440597f, -13.635120f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.113626f, 0.218911f, 2.724598f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.095748f, 0.012805f, -1.055419f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.056197f, 0.142888f, 0.852909f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.054227f, -0.021480f, 0.266790f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.306172f, 1.395025f, 1.073743f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000434f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.172843f, 0.031506f, -0.401383f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.137694f, -1.013994f, -1.459317f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.001961f, -0.008017f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.203695f, -0.045398f, -0.826584f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.856702f, -0.124964f, 0.288233f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.251016f, -0.022927f, -0.074874f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 120  ms: 4000 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 120, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.584544f, -1.641604f, -4.281486f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.206235f, -1.500168f, -1.777366f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.027159f, -0.008773f, 0.134392f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.840538f, 1.192551f, 13.695800f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.013719f, -0.208593f, 2.177041f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.070416f, -0.020382f, -0.968536f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.000926f, -0.200244f, 0.230240f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.080403f, 0.450047f, -13.635790f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.111434f, 0.221646f, 2.722029f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.096103f, 0.012953f, -1.054398f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.051799f, 0.146158f, 0.850071f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.052918f, -0.021084f, 0.266927f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.287502f, 1.396666f, 1.038432f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000433f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.173307f, 0.031600f, -0.406143f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.140760f, -1.040305f, -1.437274f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000115f, -0.000388f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.203026f, -0.045370f, -0.820834f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.854173f, -0.122287f, 0.289310f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.239929f, -0.023719f, -0.073569f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 121  ms: 4033 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 121, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.456020f, -1.626121f, -4.079957f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.264392f, -1.499170f, -1.835672f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.026356f, -0.008469f, 0.134453f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.844728f, 1.181883f, 13.694980f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.015044f, -0.208602f, 2.178841f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.071257f, -0.020009f, -0.973556f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.005854f, -0.198809f, 0.236332f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.076292f, 0.461304f, -13.637300f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.109422f, 0.224674f, 2.720943f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.096191f, 0.013007f, -1.051825f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.048470f, 0.149592f, 0.847191f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.051360f, -0.020374f, 0.267065f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.265606f, 1.397280f, 0.997797f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000432f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.173762f, 0.031703f, -0.411661f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.143422f, -1.069289f, -1.412641f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000029f, 0.000074f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.202844f, -0.045044f, -0.815027f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.851114f, -0.119257f, 0.290418f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.229163f, -0.024056f, -0.071891f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 122  ms: 4066 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 122, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.299821f, -1.531127f, -3.840198f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.302912f, -1.498352f, -1.874465f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.025371f, -0.008161f, 0.133095f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.850019f, 1.160239f, 13.694530f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.016577f, -0.208097f, 2.182052f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.071366f, -0.019928f, -0.976245f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.009370f, -0.197183f, 0.240626f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.073223f, 0.466619f, -13.638460f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.107533f, 0.227272f, 2.723553f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.096095f, 0.013708f, -1.046507f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.046157f, 0.152802f, 0.843979f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.049453f, -0.019599f, 0.264368f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.244760f, 1.397281f, 0.955068f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000431f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.174214f, 0.031798f, -0.416797f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.144229f, -1.101004f, -1.385118f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000015f, -0.000125f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.202432f, -0.044819f, -0.809606f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.848002f, -0.116195f, 0.291303f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.217825f, -0.023659f, -0.068995f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 123  ms: 4100 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 123, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -3.172041f, -1.481299f, -3.653736f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.329568f, -1.497713f, -1.901191f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.024260f, -0.007882f, 0.131682f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.855040f, 1.136577f, 13.694400f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.019019f, -0.207820f, 2.186691f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.071801f, -0.020040f, -0.976008f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.012599f, -0.195118f, 0.243325f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.070583f, 0.473305f, -13.639430f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.105091f, 0.229734f, 2.727561f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.096020f, 0.014206f, -1.039565f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.044847f, 0.155479f, 0.840106f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.047293f, -0.018865f, 0.261561f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.224700f, 1.397089f, 0.911171f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000431f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.174651f, 0.031905f, -0.423072f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.142045f, -1.134905f, -1.353339f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000055f, -0.000108f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.202070f, -0.044581f, -0.804403f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.844787f, -0.113004f, 0.292532f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.206638f, -0.023482f, -0.065569f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 124  ms: 4133 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 124, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.992072f, -1.333297f, -3.469280f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.347113f, -1.497260f, -1.918674f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.023052f, -0.007524f, 0.130098f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.861196f, 1.110529f, 13.693880f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.021433f, -0.207366f, 2.194246f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.071553f, -0.020573f, -0.970978f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.014442f, -0.192539f, 0.243680f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.066916f, 0.480287f, -13.640790f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.103874f, 0.231575f, 2.734218f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.095503f, 0.014981f, -1.028577f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.043825f, 0.157960f, 0.834715f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.044950f, -0.017957f, 0.258413f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.204868f, 1.396348f, 0.865766f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000430f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.175006f, 0.031995f, -0.429123f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.135824f, -1.170806f, -1.316465f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000145f, -0.000248f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.201811f, -0.044335f, -0.799638f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.841301f, -0.109443f, 0.293538f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.194824f, -0.022829f, -0.061526f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 125  ms: 4166 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 125, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.879041f, -1.092444f, -3.387383f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.353630f, -1.497085f, -1.925136f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.021735f, -0.007135f, 0.128458f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.867785f, 1.082664f, 13.693280f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.024182f, -0.207049f, 2.203503f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.071067f, -0.021178f, -0.961203f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.015643f, -0.190596f, 0.241134f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.062901f, 0.488403f, -13.642280f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.102887f, 0.233281f, 2.744594f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.094303f, 0.016412f, -1.013314f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.043632f, 0.160239f, 0.828041f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.042394f, -0.016981f, 0.255152f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.185859f, 1.395136f, 0.819106f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000430f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.175523f, 0.032091f, -0.434858f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.122760f, -1.208228f, -1.272100f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000236f, -0.000228f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.201405f, -0.044086f, -0.795026f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.837561f, -0.105911f, 0.294796f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.182844f, -0.022253f, -0.056788f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 126  ms: 4200 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 126, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.765929f, -0.799030f, -3.319293f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.357943f, -1.496968f, -1.929395f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.020362f, -0.006730f, 0.126761f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.874604f, 1.053689f, 13.692600f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.027870f, -0.206622f, 2.214990f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.069980f, -0.021995f, -0.948652f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.015407f, -0.187893f, 0.237751f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.058661f, 0.496953f, -13.643830f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.102193f, 0.234585f, 2.755592f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.093273f, 0.017613f, -0.995882f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.043405f, 0.161685f, 0.820180f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.039726f, -0.015968f, 0.251779f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.169939f, 1.393600f, 0.774360f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000430f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.176000f, 0.032233f, -0.441354f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.102038f, -1.247159f, -1.219242f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000344f, -0.000308f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.201085f, -0.043856f, -0.790260f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.833920f, -0.102194f, 0.295922f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.170611f, -0.020971f, -0.051302f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 127  ms: 4233 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 127, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.663012f, -0.516491f, -3.262172f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.347094f, -1.497263f, -1.918538f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.018881f, -0.006297f, 0.124950f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.881969f, 1.022563f, 13.691810f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.031333f, -0.206162f, 2.226969f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.069010f, -0.023395f, -0.934474f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.015280f, -0.185295f, 0.232766f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.054165f, 0.506306f, -13.645490f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.102365f, 0.236101f, 2.768261f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.092562f, 0.019175f, -0.976557f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.044328f, 0.162969f, 0.812262f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.036846f, -0.014886f, 0.248177f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.154308f, 1.391817f, 0.728593f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000430f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.176468f, 0.032377f, -0.447847f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.068481f, -1.286753f, -1.152912f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000423f, -0.000321f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.200831f, -0.043711f, -0.786151f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.830205f, -0.098504f, 0.297206f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.158266f, -0.019764f, -0.045355f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 128  ms: 4266 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 128, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.553603f, -0.325344f, -3.199618f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.333978f, -1.497605f, -1.905442f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.017362f, -0.005791f, 0.123138f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.890385f, 0.990905f, 13.690550f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.035451f, -0.205341f, 2.238584f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.068036f, -0.024140f, -0.920458f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.014591f, -0.182671f, 0.227679f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.048717f, 0.516186f, -13.647570f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.101556f, 0.237553f, 2.782042f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.091291f, 0.020641f, -0.957092f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.045709f, 0.164610f, 0.804504f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.033896f, -0.013658f, 0.244574f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.139989f, 1.389701f, 0.683193f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000441f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.176924f, 0.032526f, -0.454339f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 1.016835f, -1.326356f, -1.068206f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000497f, -0.000384f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.200600f, -0.043525f, -0.782038f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.826026f, -0.094614f, 0.298334f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.145630f, -0.018204f, -0.039115f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 129  ms: 4300 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 129, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.432427f, -0.047008f, -3.104713f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.311848f, -1.498144f, -1.883425f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.015774f, -0.005319f, 0.121213f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.898263f, 0.957629f, 13.689540f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.038796f, -0.204369f, 2.248552f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.066815f, -0.025437f, -0.907926f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.013321f, -0.179585f, 0.223001f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.043738f, 0.526321f, -13.649400f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.101294f, 0.238700f, 2.795155f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.090250f, 0.022101f, -0.938998f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.046924f, 0.165604f, 0.798062f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.030802f, -0.012500f, 0.240742f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.127608f, 1.387491f, 0.638644f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000468f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.177531f, 0.032687f, -0.460897f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.932954f, -1.365034f, -0.950907f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000562f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.200375f, -0.043324f, -0.777917f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.821993f, -0.090744f, 0.299523f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.132731f, -0.016684f, -0.032575f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 130  ms: 4333 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 130, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.297624f, 0.113518f, -3.031900f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.287163f, -1.498704f, -1.858503f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.014203f, -0.004792f, 0.119286f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.906907f, 0.924578f, 13.688060f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.042451f, -0.202957f, 2.256835f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.066102f, -0.025724f, -0.898760f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.011622f, -0.177128f, 0.218872f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.037907f, 0.536203f, -13.651560f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.100723f, 0.240030f, 2.807335f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089498f, 0.023326f, -0.924426f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.048920f, 0.166694f, 0.793711f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.027748f, -0.011230f, 0.236906f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.118404f, 1.385336f, 0.596668f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000500f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.177963f, 0.032838f, -0.467385f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.802390f, -1.401142f, -0.786625f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000561f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.200146f, -0.043116f, -0.773794f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.818387f, -0.086881f, 0.300676f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.119739f, -0.015040f, -0.025589f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 131  ms: 4366 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 131, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.175924f, 0.254764f, -2.903069f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.257487f, -1.499299f, -1.828922f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.012565f, -0.004295f, 0.117360f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.915057f, 0.890594f, 13.686800f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.045257f, -0.201730f, 2.261677f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.065396f, -0.026263f, -0.894176f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.009614f, -0.174420f, 0.216752f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.032531f, 0.547032f, -13.653520f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.099658f, 0.241786f, 2.817732f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089018f, 0.024026f, -0.913509f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.051635f, 0.167675f, 0.791421f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.024551f, -0.010026f, 0.233070f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.107215f, 1.383162f, 0.552010f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000526f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.178546f, 0.033004f, -0.473938f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.596192f, -1.431833f, -0.546576f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000561f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.199777f, -0.042895f, -0.769819f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.814366f, -0.083024f, 0.301864f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.106486f, -0.013046f, -0.018662f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 132  ms: 4400 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 132, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -2.059521f, 0.270386f, -2.794580f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.225012f, -1.499872f, -1.796362f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.011000f, -0.003754f, 0.115432f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.923903f, 0.857641f, 13.685090f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.048502f, -0.200203f, 2.265169f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.065090f, -0.026098f, -0.892437f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.007545f, -0.171841f, 0.215411f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.026551f, 0.556844f, -13.655790f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.099142f, 0.243519f, 2.826639f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088803f, 0.024670f, -0.905380f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.053892f, 0.168863f, 0.790984f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.021506f, -0.008744f, 0.229229f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.097979f, 1.381242f, 0.509257f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.179019f, 0.033173f, -0.481027f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, 0.289073f, -1.451593f, -0.205997f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000558f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.199560f, -0.042695f, -0.765906f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.810259f, -0.079153f, 0.302987f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.093202f, -0.011485f, -0.011672f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 133  ms: 4433 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 133, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.932871f, 0.278511f, -2.673047f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.192049f, -1.500371f, -1.763146f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.009421f, -0.003260f, 0.113505f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.931990f, 0.824471f, 13.683640f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.051074f, -0.198146f, 2.267109f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064784f, -0.026128f, -0.892098f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.005447f, -0.169293f, 0.214643f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.021142f, 0.566856f, -13.657760f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.097754f, 0.244922f, 2.834902f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088806f, 0.025257f, -0.898995f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.056894f, 0.169524f, 0.791530f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.018422f, -0.007563f, 0.225385f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.091052f, 1.379539f, 0.468679f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.179579f, 0.033344f, -0.487576f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.088062f, -1.454963f, 0.204775f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000515f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.199275f, -0.042532f, -0.761993f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.806117f, -0.075128f, 0.304141f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.079818f, -0.009842f, -0.004392f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 134  ms: 4466 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 134, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.815795f, 0.286835f, -2.526947f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.158640f, -1.500787f, -1.729823f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.007861f, -0.002707f, 0.111633f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.940850f, 0.791917f, 13.681710f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.053748f, -0.196458f, 2.267809f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064382f, -0.025907f, -0.893685f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.003272f, -0.166780f, 0.214718f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.014878f, 0.576939f, -13.660100f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.096741f, 0.246603f, 2.842630f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088822f, 0.025593f, -0.894067f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.059637f, 0.170593f, 0.792856f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.015383f, -0.006269f, 0.221651f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.082632f, 1.377876f, 0.427411f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.179960f, 0.033498f, -0.494060f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.425781f, -1.441014f, 0.575981f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000459f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.199013f, -0.042371f, -0.758074f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.801967f, -0.071278f, 0.305266f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.066372f, -0.008088f, 0.002300f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 135  ms: 4500 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 135, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.654788f, 0.287361f, -2.361605f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.124874f, -1.501127f, -1.695803f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.006288f, -0.002203f, 0.109817f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.948913f, 0.759506f, 13.679990f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.056386f, -0.194536f, 2.267697f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064479f, -0.025394f, -0.896374f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, -0.001502f, -0.164779f, 0.214740f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.009101f, 0.587546f, -13.662130f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.095549f, 0.248196f, 2.849616f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.088887f, 0.025908f, -0.890358f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.062358f, 0.171620f, 0.794680f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.012306f, -0.005075f, 0.218029f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.074897f, 1.376330f, 0.386594f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.180490f, 0.033671f, -0.500606f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.667247f, -1.414461f, 0.850641f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000389f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.198836f, -0.042213f, -0.753998f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.798110f, -0.067250f, 0.306321f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.052658f, -0.006265f, 0.009278f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 136  ms: 4533 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 136, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.601147f, 0.266731f, -2.275015f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.095693f, -1.501352f, -1.666724f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.004883f, -0.001731f, 0.108001f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.956649f, 0.729415f, 13.678310f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.058582f, -0.192595f, 2.267358f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064483f, -0.024570f, -0.899983f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.000329f, -0.162705f, 0.215584f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -6.004003f, 0.595890f, -13.664050f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.094564f, 0.249938f, 2.856487f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089002f, 0.025957f, -0.887233f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.065301f, 0.172437f, 0.796710f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.009557f, -0.003980f, 0.214402f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.065930f, 1.374911f, 0.345746f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.180996f, 0.033851f, -0.507531f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.821752f, -1.381372f, 1.038086f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000304f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.198543f, -0.042031f, -0.749482f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.794165f, -0.063416f, 0.307505f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.039025f, -0.004517f, 0.015694f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 137  ms: 4566 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 137, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.466120f, 0.270122f, -2.133404f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.063899f, -1.501530f, -1.634681f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.003479f, -0.001258f, 0.106241f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.964206f, 0.699671f, 13.676530f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.061044f, -0.190759f, 2.266893f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064484f, -0.024169f, -0.903513f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.002008f, -0.160480f, 0.216698f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.998645f, 0.604530f, -13.666000f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.093680f, 0.251512f, 2.862333f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089188f, 0.026237f, -0.884906f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.067285f, 0.173723f, 0.798832f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.006812f, -0.002879f, 0.210887f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.059071f, 1.374059f, 0.307920f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.181601f, 0.034027f, -0.513540f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.920435f, -1.345230f, 1.169013f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000212f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.198174f, -0.041857f, -0.745338f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.790172f, -0.059597f, 0.308692f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.025286f, -0.003059f, 0.022068f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 138  ms: 4600 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 138, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.338985f, 0.272091f, -1.958462f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.036893f, -1.501624f, -1.607781f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, 0.002205f, -0.000753f, 0.104594f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.972137f, 0.672389f, 13.674420f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.062933f, -0.189047f, 2.266267f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064483f, -0.024034f, -0.907094f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.003455f, -0.158127f, 0.217661f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.992772f, 0.612069f, -13.668220f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.092577f, 0.253216f, 2.867867f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089553f, 0.026288f, -0.882397f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.069835f, 0.174672f, 0.800931f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, 0.004327f, -0.001736f, 0.207596f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.049433f, 1.373232f, 0.267703f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.181927f, 0.034187f, -0.520016f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -0.982608f, -1.307972f, 1.262960f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, -0.000126f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197733f, -0.041670f, -0.740972f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.786610f, -0.055722f, 0.309466f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, 0.011249f, -0.001580f, 0.028072f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );



// ---------------Key Time: 139  ms: 4633 --------------------------------------- 

   pResult->addFrameBucket(lastFrame, 139, numBones);

    //          Node Name: RootNode

         // ------ No animation data ------ 

    //          Node Name: Bip01

    lastFrame->pBone[0].T = Vect( -1.095868f, 0.277034f, -1.648066f );
    lastFrame->pBone[0].Q = Quat( ROT_XYZ, 0.002446f, -1.501672f, -1.573252f );
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

    lastFrame->pBone[2].T = Vect( 6.016889f, -0.014116f, -0.000036f );
    lastFrame->pBone[2].Q = Quat( ROT_XYZ, -0.000058f, 0.000017f, 0.101584f );
    lastFrame->pBone[2].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Thigh

    lastFrame->pBone[3].T = Vect( -5.984612f, 0.623430f, 13.671320f );
    lastFrame->pBone[3].Q = Quat( ROT_XYZ, -3.067076f, -0.186012f, 2.266414f );
    lastFrame->pBone[3].S = Vect( 1.000000f, 0.999999f, 1.000000f );

    //          Node Name: Bip01 L Calf

    lastFrame->pBone[4].T = Vect( 16.961590f, 0.000002f, -0.000008f );
    lastFrame->pBone[4].Q = Quat( ROT_XYZ, 0.064322f, -0.023477f, -0.913134f );
    lastFrame->pBone[4].S = Vect( 1.000001f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Foot

    lastFrame->pBone[5].T = Vect( 13.263520f, -0.000005f, -0.000000f );
    lastFrame->pBone[5].Q = Quat( ROT_XYZ, 0.005184f, -0.153719f, 0.220037f );
    lastFrame->pBone[5].S = Vect( 1.000000f, 1.000000f, 0.999999f );

    //          Node Name: Bip01 R Thigh

    lastFrame->pBone[6].T = Vect( -5.984199f, 0.625004f, -13.671420f );
    lastFrame->pBone[6].Q = Quat( ROT_XYZ, 3.090555f, 0.256940f, 2.878011f );
    lastFrame->pBone[6].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Calf

    lastFrame->pBone[7].T = Vect( 16.961580f, 0.000000f, -0.000005f );
    lastFrame->pBone[7].Q = Quat( ROT_XYZ, -0.089731f, 0.027036f, -0.876201f );
    lastFrame->pBone[7].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Foot

    lastFrame->pBone[8].T = Vect( 13.263530f, 0.000000f, 0.000001f );
    lastFrame->pBone[8].Q = Quat( ROT_XYZ, 0.072969f, 0.176891f, 0.802901f );
    lastFrame->pBone[8].S = Vect( 1.000001f, 1.000001f, 1.000000f );

    //          Node Name: Bip01 Spine1

    lastFrame->pBone[9].T = Vect( 17.730410f, -0.017626f, 0.000001f );
    lastFrame->pBone[9].Q = Quat( ROT_XYZ, -0.000109f, 0.000034f, 0.201576f );
    lastFrame->pBone[9].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Neck

    lastFrame->pBone[10].T = Vect( 22.140869f, -0.008818f, 0.000005f );
    lastFrame->pBone[10].Q = Quat( ROT_XYZ, 0.000000f, -0.000000f, -0.000000f );
    lastFrame->pBone[10].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L Clavicle

    lastFrame->pBone[11].T = Vect( 0.000023f, 0.008803f, 5.461464f );
    lastFrame->pBone[11].Q = Quat( ROT_XYZ, 1.570794f, -1.396266f, 1.570002f );
    lastFrame->pBone[11].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 L UpperArm

    lastFrame->pBone[12].T = Vect( 13.067830f, -0.000001f, -0.000003f );
    lastFrame->pBone[12].Q = Quat( ROT_XYZ, 0.075016f, 1.372793f, 0.252299f );
    lastFrame->pBone[12].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Forearm

    lastFrame->pBone[13].T = Vect( 15.099380f, -0.000400f, 0.000537f );
    lastFrame->pBone[13].Q = Quat( ROT_XYZ, 0.182892f, 0.034531f, -0.532339f );
    lastFrame->pBone[13].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 L Hand

    lastFrame->pBone[14].T = Vect( 15.099400f, 0.000095f, 0.000103f );
    lastFrame->pBone[14].Q = Quat( ROT_XYZ, -1.868661f, 0.117072f, 0.287848f );
    lastFrame->pBone[14].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R Clavicle

    lastFrame->pBone[15].T = Vect( 0.000027f, 0.008833f, -5.461464f );
    lastFrame->pBone[15].Q = Quat( ROT_XYZ, -1.570798f, 1.396261f, 1.569999f );
    lastFrame->pBone[15].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 R UpperArm

    lastFrame->pBone[16].T = Vect( 13.067830f, -0.000001f, 0.000004f );
    lastFrame->pBone[16].Q = Quat( ROT_XYZ, -1.056774f, -1.227629f, 1.382526f );
    lastFrame->pBone[16].S = Vect( 1.000000f, 1.000000f, 1.000001f );

    //          Node Name: Bip01 R Forearm

    lastFrame->pBone[17].T = Vect( 15.099400f, 0.000048f, -0.000427f );
    lastFrame->pBone[17].Q = Quat( ROT_XYZ, -0.197222f, -0.041325f, -0.731995f );
    lastFrame->pBone[17].S = Vect( 1.000000f, 1.000001f, 1.000001f );

    //          Node Name: Bip01 R Hand

    lastFrame->pBone[18].T = Vect( 15.099400f, 0.000102f, -0.000130f );
    lastFrame->pBone[18].Q = Quat( ROT_XYZ, 1.779648f, -0.048758f, 0.311560f );
    lastFrame->pBone[18].S = Vect( 1.000000f, 1.000000f, 1.000000f );

    //          Node Name: Bip01 Head

    lastFrame->pBone[19].T = Vect( 11.079170f, -0.000001f, 0.000002f );
    lastFrame->pBone[19].Q = Quat( ROT_XYZ, -0.001359f, -0.000363f, 0.047524f );
    lastFrame->pBone[19].S = Vect( 1.000000f, 1.000000f, 1.000000f );
}