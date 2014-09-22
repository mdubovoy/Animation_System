#include "TeddyBearBones.h"
#include "Pyramid.h"
#include "PyramidObject.h"
#include "GraphicsObjectManager.h"

TeddyBearBones::TeddyBearBones()
{
    // ***HARD-WIRED***
    numBones = 20;
    
    // Initialize the bone hierarchy, create the bones and attach them into a PCSTree
    this->SetBoneHierarchy();
}

void TeddyBearBones::SetBoneHierarchy()
{
    // setup the bone model, this case we are using pyramid
    // todo - create a cool Bone Object, ball(drk blue) + pyramid arm (dark yellow)
    Pyramid* pPyramid = new Pyramid();
    pPyramid->loadTexture();
    pPyramid->createVAO();

    // Get the manager
    GraphicsObjectManager *goMgr = GraphicsObjectManager::getInstance();

    // here we insert bones directly into tree - 
    // vs calling goMgr->addObject which inserts every node with root as parent FIXME
    PCSTree* tree = goMgr->getTree();
	PCSNode* root = tree->getRoot();

    // for position
    // if(name = TeddyWalk, set pos variable to x, if name = TeddyIdle, set pos variable to y)

    PyramidObject *pBip01 = new PyramidObject( "name", pPyramid );
    pBip01->setIndex(0);
    pBip01->setName("Bip01");
    tree->insert( pBip01, root );
    
    PyramidObject *pBip01_Pelvis = new PyramidObject( "name", pPyramid );
    pBip01_Pelvis->setIndex(1);
    pBip01_Pelvis->setName("Bip01_Pelvis");
    tree->insert( pBip01_Pelvis, pBip01 );
    
    PyramidObject *pBip01_Spine = new PyramidObject( "name", pPyramid );
    pBip01_Spine->setIndex(2);
    pBip01_Spine->setName("Bip01_Spine");
    tree->insert( pBip01_Spine, pBip01_Pelvis );
    
    PyramidObject *pBip01_L_Thigh = new PyramidObject( "name", pPyramid );
    pBip01_L_Thigh->setIndex(3);
    pBip01_L_Thigh->setName("Bip01_L_Thigh");
    tree->insert( pBip01_L_Thigh, pBip01_Spine );
    
    PyramidObject *pBip01_L_Calf = new PyramidObject( "name", pPyramid );
    pBip01_L_Calf->setIndex(4);
    pBip01_L_Calf->setName("Bip01_L_Calf");
    tree->insert( pBip01_L_Calf, pBip01_L_Thigh );
    
    PyramidObject *pBip01_L_Foot = new PyramidObject( "name", pPyramid );
    pBip01_L_Foot->setIndex(5);
    pBip01_L_Foot->setName("Bip01_L_Foot");
    tree->insert( pBip01_L_Foot, pBip01_L_Calf );
    
    PyramidObject *pBip01_R_Thigh = new PyramidObject( "name", pPyramid );
    pBip01_R_Thigh->setIndex(6);
    pBip01_R_Thigh->setName("Bip01_R_Thigh");
    tree->insert( pBip01_R_Thigh, pBip01_Spine );
    
    PyramidObject *pBip01_R_Calf = new PyramidObject( "name", pPyramid );
    pBip01_R_Calf->setIndex(7);
    pBip01_R_Calf->setName("Bip01_R_Calf");
    tree->insert( pBip01_R_Calf, pBip01_R_Thigh );
    
    PyramidObject *pBip01_R_Foot = new PyramidObject( "name", pPyramid );
    pBip01_R_Foot->setIndex(8);
    pBip01_R_Foot->setName("Bip01_R_Foot");
    tree->insert( pBip01_R_Foot, pBip01_R_Calf );
    
    PyramidObject *pBip01_Spine1 = new PyramidObject( "name", pPyramid );
    pBip01_Spine1->setIndex(9);
    pBip01_Spine1->setName("Bip01_Spine1");
    tree->insert( pBip01_Spine1, pBip01_Spine );
    
    PyramidObject *pBip01_Neck = new PyramidObject( "name", pPyramid );
    pBip01_Neck->setIndex(10);
    pBip01_Neck->setName("Bip01_Neck");
    tree->insert( pBip01_Neck, pBip01_Spine1 );
    
    PyramidObject *pBip01_L_Clavicle = new PyramidObject( "name", pPyramid );
    pBip01_L_Clavicle->setIndex(11);
    pBip01_L_Clavicle->setName("Bip01_L_Clavicle");
    tree->insert( pBip01_L_Clavicle, pBip01_Neck );
    
    PyramidObject *pBip01_L_UpperArm = new PyramidObject( "name", pPyramid );
    pBip01_L_UpperArm->setIndex(12);
    pBip01_L_UpperArm->setName("Bip01_L_UpperArm");
    tree->insert( pBip01_L_UpperArm, pBip01_L_Clavicle );
    
    PyramidObject *pBip01_L_Forearm = new PyramidObject( "name", pPyramid );
    pBip01_L_Forearm->setIndex(13);
    pBip01_L_Forearm->setName("Bip01_L_Forearm");
    tree->insert( pBip01_L_Forearm, pBip01_L_UpperArm );
    
    PyramidObject *pBip01_L_Hand = new PyramidObject( "name", pPyramid );
    pBip01_L_Hand->setIndex(14);
    pBip01_L_Hand->setName("Bip01_L_Hand");
    tree->insert( pBip01_L_Hand, pBip01_L_Forearm );
    
    PyramidObject *pBip01_R_Clavicle = new PyramidObject( "name", pPyramid );
    pBip01_R_Clavicle->setIndex(15);
    pBip01_R_Clavicle->setName("Bip01_R_Clavicle");
    tree->insert( pBip01_R_Clavicle, pBip01_Neck );
    
    PyramidObject *pBip01_R_UpperArm = new PyramidObject( "name", pPyramid );
    pBip01_R_UpperArm->setIndex(16);
    pBip01_R_UpperArm->setName("Bip01_R_UpperArm");
    tree->insert( pBip01_R_UpperArm, pBip01_R_Clavicle );
    
    PyramidObject *pBip01_R_Forearm = new PyramidObject( "name", pPyramid );
    pBip01_R_Forearm->setIndex(17);
    pBip01_R_Forearm->setName("Bip01_R_Forearm");
    tree->insert( pBip01_R_Forearm, pBip01_R_UpperArm );
    
    PyramidObject *pBip01_R_Hand = new PyramidObject( "name", pPyramid );
    pBip01_R_Hand->setIndex(18);
    pBip01_R_Hand->setName("Bip01_R_Hand");
    tree->insert( pBip01_R_Hand, pBip01_R_Forearm );
    
    PyramidObject *pBip01_Head = new PyramidObject( "name", pPyramid );
    pBip01_Head->setIndex(19);
    pBip01_Head->setName("Bip01_Head");
    tree->insert( pBip01_Head, pBip01_Neck );

	pBip01->setLightColor(        Vect(2.75f, 2.75f, 2.75f) );
    pBip01_Pelvis->setLightColor( Vect(2.75f, 2.75f, 2.75f) );
    pBip01_Spine->setLightColor(  Vect(2.75f, 2.75f, 2.75f) );
    pBip01_Spine1->setLightColor( Vect(2.75f, 2.75f, 2.75f) );
    pBip01_Neck->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );

	pBip01_L_Foot->setLightColor( Vect(2.75f, 0.0f, 0.0f) );
    pBip01_R_Foot->setLightColor( Vect(2.75f, 0.0f, 0.0f) );

    pBip01_R_Clavicle->setLightColor( Vect(0.0f, 0.0f, 0.0f) );
    pBip01_L_Clavicle->setLightColor( Vect(0.0f, 0.0f, 0.0f) );
    pBip01_Head->setLightColor( Vect(0.0f, 2.75f, 0.0f) );

    pBip01_R_UpperArm->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );
    pBip01_R_Forearm->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );
    pBip01_R_Hand->setLightColor(   Vect(0.0f, 0.0f, 2.75f) );

    pBip01_R_Thigh->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );
    pBip01_R_Calf->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );

    pBip01_L_Thigh->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );
    pBip01_L_Calf->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );

    pBip01_L_UpperArm->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );
    pBip01_L_Forearm->setLightColor(   Vect(2.75f, 2.75f, 2.75f) );
    pBip01_L_Hand->setLightColor(   Vect(0.0f, 0.0f, 2.75f) );

    // set the first bone to pass into updateSkeleton in GlobalState.cpp's GameLoop()
    this->SetFirstBone(pBip01);
    // firstBone = pBip01_Pelvis; do we want to skip first node?

    // Debug
	tree->dumpTree();
}

/*TeddyBearBones* TeddyBearBones::GetInstance()
{
    return PrivGetInstance();
}

TeddyBearBones* TeddyBearBones::PrivGetInstance()
{
    static TeddyBearBones bearBones;
    return &bearBones;
}*/