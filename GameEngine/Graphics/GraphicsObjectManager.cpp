#include "GraphicsObjectManager.h"
#include "AnimationManager.h"
#include "GraphicsObject.h"
#include "NullObject.h"
#include "PCSNode.h"
#include "PCSTree.h"

#include "PyramidObject.h"

#define COLLISION_DEMO 0 // 1 - keys set up to move cube for collision demo, 0 - keys set up to move camera

// adds NullObject as root for goTree
GraphicsObjectManager::GraphicsObjectManager()
{
    // get the root
    PCSNode *root = this->goTree.getRoot();

    // it should be null the first time initializing it
    assert(root == 0);

   // Create a Dummy root object, it does nothing
   // remember you need to remove this in the destructor
   // gets trickly with singletons
   NullObject *nodeRoot = new NullObject("Root");

   // insert it into tree
   this->goTree.insert( nodeRoot, root );
}

PCSTree *GraphicsObjectManager::getTree( void )
{
	return &this->goTree;
}


void GraphicsObjectManager::addObject(GraphicsObject* p)
{
   // Attach new node to the root
   // later we will expose more hierarchy

       // Get root 
      PCSNode  *root = this->goTree.getRoot();

      // This should NOT be the first time using the tree, root should NOT be NULL
      assert(root != 0 );

      // insert p into tree's root
      this->goTree.insert( p, root );
}

void GraphicsObjectManager::drawObjects()
{
   // Get root - it is a PCSNode, we are looking at it from GraphicObject's perspective
   GraphicsObject  *root = (GraphicsObject  *)this->goTree.getRoot();
   this->privDrawObjectsDepthFirst( root );
}

void GraphicsObjectManager::privDrawObjectsDepthFirst( GraphicsObject *node ) const
{
   char name[PCSNODE_NAME_SIZE];
   GraphicsObject *child = 0;

   node->getName(name, PCSNODE_NAME_SIZE);

   // --------- Do draw stuff here -----------------------
   
      // node->print();
      node->transform();

#if COLLISION_DEMO
      // for collision demo, draw cube even when not colliding with sphere. Change color upon colision
      node->setRenderState(node->getTexture(), node->getShader() );
      node->draw();
      if(node->inViewOfCamera())
          node->setLightColor( Vect(253.0f, 0.0f, 187.0f) );
      else
          node->setLightColor(Vect(0.0f, 1.0f, 0.0f));

#else

      if( node->inViewOfCamera() ) // this conditional uses data from fucntions used inside transform()
      {
         node->setRenderState( node->getTexture(), node->getShader() );
	     node->draw();
      }
      else
      {
         //  printf("%s not Drawn\n", name);
      }
#endif   
   // iterate through all of the active children - even with flat hierarchy, root will always have one child
   if (node->getChild() != 0)
	{  
	   child =	(GraphicsObject *)node->getChild();
	   while (child != 0)
	   {
               privDrawObjectsDepthFirst( child );
               // goto next sibling - child of the root node, but now we are iterating SIBLINGS
               child = (GraphicsObject *)child->getSibling();
	   }
   }
   else
	{
      // bye bye exit condition
	}

}

GraphicsObjectManager* GraphicsObjectManager::getInstance(void)
{
    return privGetInstance();
}

GraphicsObjectManager* GraphicsObjectManager::privGetInstance(void)
{
    static GraphicsObjectManager gom;
    return &gom;
}