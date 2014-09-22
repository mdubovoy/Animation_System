#include "OpenGLWrapper.h"

#include "RenderScene.h"
#include "Pyramid.h"
#include "PyramidObject.h"
#include "Camera.h"
#include "GraphicsObjectManager.h"

// camera created inside frameworkSetup in GlobalState.cpp
extern Camera*              pCamera;

// Called to draw scene
// ***as time goes on, list of objects will go through loop - setup, transform, draw
// can link up to our PCS tree
void RenderScene(void)
{        
    // breadcrumb
    // printf("RenderScene()\n");

    // Clear the window with current clearing color
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT); 

    // using our new camera, make sure everything is consistent
    pCamera->updateCamera();

    GraphicsObjectManager* gom =  GraphicsObjectManager::getInstance();
    gom->drawObjects();
		
	// Flush drawing commands
	glutSwapBuffers();

    // redraws and update graphics, now that we've set pyramid to rotate on its own
    glutPostRedisplay();
}