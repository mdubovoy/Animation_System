#include "GraphicsObject.h"
#include "GraphicsObjectManager.h"
#include "Skeleton.h"

#include "PyramidObject.h"

void Skeleton::setBonePose(GraphicsObject * node, FrameBucket* pResult)
{
    // need this value for Scale Vector - would it change in derived classes?
    const float BONE_WIDTH = 2.0f;
	// Now get the world matrices - we know nodes are PyramidObjects for Skeleton
    // this casting may not be needed if we create a new AnimationObject to pass in instead of GraphicsObject
    PyramidObject *childNode = (PyramidObject *)node;
    PyramidObject *parentNode = (PyramidObject *)node->getParent();

    // Get the manager
    GraphicsObjectManager *goMgr = GraphicsObjectManager::getInstance();
    PCSTree* tree = goMgr->getTree();
	PCSNode* root = tree->getRoot();

    // for bone Bip01 - it is the anchor point, no need to set its pose when its parent is dummy root node
    if(parentNode == root)
        return;

	if( parentNode != 0 && childNode != 0 )
	{
        // starting point
	    Vect start(0.0f,0.0f,0.0f);

        // calling transform first to evaluate an up-to-date world, then get starting point in World coords
        // ***ORDER*** do this for parent first, then child - in transform, p1 will get parent's world matrix
        parentNode->transform(pResult);
	    Vect ptA = start * parentNode->getWorld();

        childNode->transform(pResult);
	    Vect ptB = start * childNode->getWorld();

        // At this point, we have the two bones initial positions in world space
        // Now get the direction between two anchor points of respective bones, and direction
		Vect dir = -(ptB- ptA);
		float mag = dir.mag();

        // used to flip pyramids to point outward
        Matrix T_flip(TRANS, 0.0f, 0.0f, 1.0f);
		// rotates it to Z axis
		Matrix R_flip( ROT_X, 180.0f * MATH_PI_180);

        Matrix S( SCALE, BONE_WIDTH, BONE_WIDTH, mag);
		Quat Q( ROT_ORIENT, dir.getNorm(), Vect( 0.0f, 1.0f, 0.0f) );
        Matrix T(TRANS, ptB);

        
        Matrix BoneOrient = S * Q * T;
        // Matrix BoneOrient = R_flip * T_flip * S * Q * T ;
        // Matrix BoneOrient = S * Q ;
        // Matrix BoneOrient = S;

        childNode->setBoneOrientation(BoneOrient);
    }

    /* deal with last node, when there isn't a terminal node - does this help in any way? 
    // copy orientation matrix from grandparent to set Parent's orientation 
	if( parentNode != 0 && childNode == 0 )
    {
		// get the parent's parent  -> grandParent
		GraphicsObject *grandParentNode = (GraphicsObject *)parentNode->getParent();
		Matrix BoneOrient = grandParentNode->getBoneOrientation();

		parentNode->setBoneOrientation( BoneOrient );
        // should be childNode now???
	} */
}

void Skeleton::updateSkeleton(GraphicsObject *node, FrameBucket* pResult) 
{
   // --------- Do pose stuff here -----------------------
   this->setBonePose(node, pResult);
   
   
   // iterate through all of the active children - copied from GOM, will it work here???
   GraphicsObject *child = 0;

   if (node->getChild() != 0)
	{  
	   child =	(GraphicsObject *)node->getChild();
	   // make sure that allocation is not a child node 
	   while (child != 0)
	   {
          updateSkeleton( child, pResult );
         // goto next sibling - node's child, but now we are iterating SIBLINGS
         child = (GraphicsObject *)child->getSibling();
	   }
   }
   else
	{
      // bye bye exit condition
	}
}