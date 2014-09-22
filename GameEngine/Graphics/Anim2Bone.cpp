#include "OpenGLWrapper.h"
#include "Pyramid.h"
#include "PyramidObject.h"
#include "GraphicsObjectManager.h"

#include "Anim.h"
#include "Constants.h"

#define BONE_ANIM 0

#if BONE_ANIM
// temporary hack
Frame_Bucket *pHead = 0;
PyramidObject *firstBone;
// PyramidObject *p1;
Pyramid *pPyramid;

#define BONE_WIDTH 13.0f
void walk_anim_node( GraphicsObject *node ); // move to Anim.h?

void SetAnimationHierarchy()
{
    // setup the bone model, this case we are using pyramid
    // todo - create a cool Bone Object, ball(drk blue) + pyramid arm (dark yellow)
    pPyramid = new Pyramid();
    pPyramid->loadTexture();
    pPyramid->createVAO();

    // Get the manager
    GraphicsObjectManager *goMgr = GraphicsObjectManager::getInstance();

    // create two bones
	PyramidObject* p0 = new PyramidObject( "Bone_0", pPyramid );
	p0->setPos( Vect(0.0f, 0.0f, 0.0f) );
	p0->setLightPos( Vect(50.0f, 50.0f, 0.0f) );
	p0->setLightColor( Vect(1.5f, 0.5f, 0.5f) );   // RED
    // p0->setTexture(TEX1);
	// goMgr->addObject(p0);
    p0->setIndex(0);

	PyramidObject* p1 = new PyramidObject( "Bone_1", pPyramid );
	p1->setPos( Vect(1.0f, 1.0f, 0.0f) );
	p1->setLightPos( Vect(50.0f, 50.0f, 0.0f) );
	p1->setLightColor( Vect(0.5f, 1.5f, 0.5f) );   // Green
    // p1->setTexture(TEX1);
	// goMgr->addObject(p1);
    p1->setIndex(1);

    // here we insert bones directly into tree - 
    // vs calling goMgr->addObject which inserts every node with root as parent
    PCSTree *tree = goMgr->getTree();
	PCSNode *root = tree->getRoot();

	// Add 1st two bones
	tree->insert( p0, root );
	tree->insert( p1, p0 );

    firstBone = p0;

    // Debug
	// tree->dumpTree();
}

// picture: double-linked list with Result at head, followed by each frame
// Each node's pBone points to an array of size NUM_Bones (all the bones)
// we fill each bone's data with the matrices provided by FBX output
void SetAnimationData()
{

// ------------- Result Frame -----------------------------
    // create head bucket - the head of our list points to the bone_result array
	pHead = new Frame_Bucket();
	pHead->prevBucket = 0;
	pHead->nextBucket = 0;
	pHead->KeyTime = Time(TIME_ZERO);
    pHead->pBone = new Bone[NUM_BONES];

// --------------- Frame 0 ------------------------------------
    Frame_Bucket *pTmp = new Frame_Bucket();
	pTmp->prevBucket = pHead;
	pTmp->nextBucket = 0;			  
	pTmp->KeyTime = 0 * Time(TIME_NTSC_30_FRAME);
    pTmp->pBone = new Bone[NUM_BONES];
	pHead->nextBucket = pTmp;

    // Bone 0 ---------------------------------
      
      //Local matrix
      //Trans: -113.894875, 0.000000, 0.000000
	  //Rot: -0.000000, -0.000000, 0.005445
	  //Scale: 1.000000, 1.000000, 1.000000
      
      pTmp->pBone[0].T = Vect(-113.894875f, 0.000000f, 0.000000f);
      pTmp->pBone[0].Q = Quat(ROT_XYZ, 0.0f* MATH_PI_180 , 0.0f* MATH_PI_180, 0.005445f * MATH_PI_180 );
      pTmp->pBone[0].S = Vect(1.0f, 1.0f, 1.0f);

    // Bone 1 --------------------------------------

	  //	Trans: 114.826065, -0.000016, 0.000000
	  //  Rot: 0.000000, 0.000000, -0.005444
	  //  Scale: 1.000000, 1.000000, 1.000000
      
      pTmp->pBone[1].T = Vect(114.826065f, -0.000016f, 0.000000f);
      pTmp->pBone[1].Q = Quat(ROT_XYZ, 0.000000f * MATH_PI_180, 0.000000f* MATH_PI_180, -0.005444f * MATH_PI_180);
      pTmp->pBone[1].S = Vect(1.0f, 1.0f, 1.0f);

// --------------- Frame 35 -----------------------------

    Frame_Bucket *pTmp2 = new Frame_Bucket();
	pTmp2->prevBucket = pTmp;
	pTmp2->nextBucket = 0;
	pTmp2->KeyTime = 35 * Time(TIME_NTSC_30_FRAME);
	pTmp2->pBone = new Bone[NUM_BONES];
	pTmp->nextBucket = pTmp2;

    // Bone 0 -------------------------------

	  //Trans: -69.141525, 0.000000, 0.000000
	  //Rot: -0.000000, -0.000000, 35.000000
	  //Scale: 1.000000, 1.000000, 1.000000

      pTmp2->pBone[0].T = Vect(-69.141525f, 0.000000f, 0.000000f);
      pTmp2->pBone[0].Q = Quat(ROT_XYZ, 0.0f* MATH_PI_180, 0.0f* MATH_PI_180, 35.0f * MATH_PI_180);
      pTmp2->pBone[0].S = Vect(1.0f, 1.0f, 1.0f);

    // Bone 1 ---------------------------------

	  //Trans: 114.826065, -0.000016, 0.000000
	  //	Rot: -0.000000, 0.000000, -69.954391
	  //Scale: 1.000000, 1.000000, 1.000000

      pTmp2->pBone[1].T = Vect(114.826065f, -0.000016f, 0.000000f);
      pTmp2->pBone[1].Q = Quat(ROT_XYZ, 0.000000f* MATH_PI_180 , 0.000000f* MATH_PI_180, -69.954391f * MATH_PI_180);
      pTmp2->pBone[1].S = Vect(1.0f, 1.0f, 1.0f);

//------------------------- Frame 70 -----------------------------------

    Frame_Bucket *pTmp3 = new Frame_Bucket();
	pTmp3->prevBucket = pTmp2;
	pTmp3->nextBucket = 0;
	pTmp3->KeyTime = 70 * Time(TIME_NTSC_30_FRAME);
	pTmp3->pBone = new Bone[NUM_BONES];   
	pTmp2->nextBucket = pTmp3;

    // Bone 0 ---------------------------------------
	  //Trans: -39.924347, 0.000000, 0.000000
	  //Rot: 0.000000, -0.000000, 0.000003
	  //Scale: 1.000000, 1.000000, 1.000000

      pTmp3->pBone[0].T = Vect(-39.924347f, 0.000000f, 0.000000f);
      pTmp3->pBone[0].Q = Quat(ROT_XYZ, 0.0f* MATH_PI_180,0.0f* MATH_PI_180 ,0.000003f * MATH_PI_180);
      pTmp3->pBone[0].S = Vect(1.0f, 1.0f, 1.0f);


    // Bone 1--------------------------------------
      //Trans: 114.826065, -0.000016, 0.000000
      //Rot: 0.000000, 0.000000, -0.000000
      //Scale: 1.000000, 1.000000, 1.000000
     
      pTmp3->pBone[1].T = Vect(114.826065f, -0.000016f, 0.000000f);
      pTmp3->pBone[1].Q = Quat(ROT_XYZ, 0.000000f * MATH_PI_180, 0.000000f* MATH_PI_180, 0.0f * MATH_PI_180);
      pTmp3->pBone[1].S = Vect( 1.0f, 1.0f, 1.0f);	
}

void SetAnimationPose(GraphicsObject* root)
{
	// First thing, get the first frame of animation
	Time tCurr(TIME_ZERO);
    // IS THIS NEEDED? Already called via GameLoop at Time Zero by now
	ProcessAnimation( tCurr ); // fills result array with bone's position at time 0 
	
    // walks the anim node does the pose for everything that
	walk_anim_node( root );
}

void setBonePose(GraphicsObject * node)
{
	// Now get the world matrices
	GraphicsObject *childNode = (GraphicsObject *)node->getChild();
	GraphicsObject *parentNode = node;

	if( parentNode != 0 && childNode != 0 )
	{
        // starting point
	    Vect start(0.0f,0.0f,0.0f);

        // calling transform first to evaluate an up-to-date world, then get starting point in World coords
        // ***ORDER*** do this for parent first, then child - in transform, p1 will get parent's world matrix
        parentNode->transform();
	    Vect ptA = start * parentNode->getWorld();

        childNode->transform();
	    Vect ptB = start * childNode->getWorld();

        // At this point, we have the two bones initial positions in world space
        // Now get the direction between two anchor points of respective bones, and direction
		Vect dir = ptB- ptA;
		float mag = dir.mag();
        
		Matrix S( SCALE, BONE_WIDTH, BONE_WIDTH, mag);
        // rotate along dir or DOF
		Quat Q( ROT_ORIENT, dir.getNorm(), Vect( 0.0f, 1.0f, 0.0f) );
        Matrix BoneOrient = S * Q;

        parentNode->setBoneOrientation(BoneOrient);
    }

    // deal with last node, when there isn't a terminal node
    // copy orientation matrix from grandparent to set Parent's orientation 
	if( parentNode != 0 && childNode == 0 )
    {
		// get the parent's parent  -> grandParent
		GraphicsObject *grandParentNode = (GraphicsObject *)parentNode->getParent();
		Matrix BoneOrient = grandParentNode->getBoneOrientation();

		parentNode->setBoneOrientation( BoneOrient ); 
	} 
}

void walk_anim_node( GraphicsObject *node ) 
{
   // --------- Do pose stuff here -----------------------
   setBonePose(node);
   
   
   // iterate through all of the active children - copied from GOM, will it work here???
   GraphicsObject *child = 0;

   if (node->getChild() != 0)
	{  
	   child =	(GraphicsObject *)node->getChild();
	   // make sure that allocation is not a child node 
	   while (child != 0)
	   {
          walk_anim_node( child );
         // goto next sibling - node's child, but now we are iterating SIBLINGS
         child = (GraphicsObject *)child->getSibling();
	   }
   }
   else
	{
      // bye bye exit condition
	}
}


#else
//
#endif