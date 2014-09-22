// OpenGL SuperBible, Chapter 5
// Demonstrates Texture mapping a pyramid
// Program by Richard S. Wright Jr.

#include "OpenGLWrapper.h"
#include "RenderState.h"
#include "GlobalState.h"
#include "Time.h"
#include "Timer.h"

/////////////////////////////////////////////////////////////////////////////////
// An assortment of needed classes
GLShaderManager		shaderManager;

// Main entry point for GLUT based programs
int main(int argc, char* argv[])
{
    // set directory (for textures or whatever we import)
	gltSetWorkingDirectory(argv[0]);
	
    // initialize GLUT (for params passed in - in this case, none)
	glutInit(&argc, argv);
    
    // create graphics window with defaults
    createGraphicsWindow();
	
    // set up the Render Context
    // internal context (slate) for the graphics chips
	SetupRC();

    // main loop - processes, messages keystrokes until window is closed
	glutMainLoop();
    
    // closes the rendering context before quitting, removes textures
    ShutdownRC();
    
	return 0;
}