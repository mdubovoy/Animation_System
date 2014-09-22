#include "TwoBones.h"
#include "Pyramid.h"
#include "PyramidObject.h"
#include "GraphicsObjectManager.h"

TwoBones::TwoBones()
{
    // ***HARD-WIRED***
    numBones = 2;

    // Initialize the bone hierarchy, create the bones and attach them into a PCSTree
    this->SetBoneHierarchy();
}

void TwoBones::SetBoneHierarchy()
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

    // create two bones
    PyramidObject* p0 = new PyramidObject( "name", pPyramid );
    p0->setIndex(0);
    p0->setName("Bone_0");
    tree->insert(p0, root);
    
    p0->setPos( Vect(0.0f, 0.0f, 0.0f) );
    p0->setLightPos( Vect(50.0f, 50.0f, 0.0f) );
    p0->setLightColor( Vect(1.5f, 0.5f, 0.5f) );   // RED
    

    PyramidObject* p1 = new PyramidObject( "name", pPyramid );
    p1->setIndex(1);
    p1->setName("Bone_1");
    tree->insert(p1, p0);

    p1->setPos( Vect(1.0f, 1.0f, 0.0f) );
    p1->setLightPos( Vect(50.0f, 50.0f, 0.0f) );
    p1->setLightColor( Vect(0.5f, 1.5f, 0.5f) );   // Green

    // set the first bone to pass into updateSkeleton in GlobalState.cpp's GameLoop()
    this->SetFirstBone(p0);

    // Debug
    tree->dumpTree();
}