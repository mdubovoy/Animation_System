#include "OpenGLWrapper.h"

#include "RenderState.h"
#include "Pyramid.h"
#include "TextureManager.h"

extern GLShaderManager		shaderManager;

// This function does any needed initialization on the rendering context. 
// This is the first opportunity to do any OpenGL related tasks.
void SetupRC()
{
    // background color
    glClearColor(1.0f, 0.6f, 0.12f, 1.0f );

	shaderManager.InitializeStockShaders();

	glEnable(GL_DEPTH_TEST);

    // glEnable(GL_POLYGON);

    // glEnable(GL_LINE);
}

// Cleanup... such as deleting texture objects
void ShutdownRC(void)
{
    TextureManager::deleteTextures();
}