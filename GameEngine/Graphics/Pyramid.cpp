#include <assert.h>
#include "OpenGLWrapper.h"
#include "Pyramid.h"
#include "MathEngine.h"
#include "Camera.h"
#include "File.h"
#include "GraphicsObjectFileHdr.h"
#include "TextureManager.h"
#include "TextureMap.h"

void Pyramid::loadTexture( void )
{
   // write the data
   gObjFileHdr  graphicsFileHdr;

   // object name
   strncpy_s( graphicsFileHdr.objName, OBJECT_NAME_SIZE, "pyramid", _TRUNCATE);

   // squirrel away the parameters
   graphicsFileHdr.textData[0].target = GL_TEXTURE_2D;
   graphicsFileHdr.textData[0].minFilter = GL_LINEAR;
   graphicsFileHdr.textData[0].magFilter = GL_LINEAR;
   graphicsFileHdr.textData[0].wrapMode = GL_CLAMP_TO_EDGE;
   strncpy_s( graphicsFileHdr.textData[0].textName, TEXTURE_NAME_SIZE, "stone.tga", _TRUNCATE);

   // install texture
   this->textureID[0] = TextureManager::addTexture( graphicsFileHdr.textData[0] );

}

     
void Pyramid::createVAO(void )
{

    struct VBO_Vertex_vsn
    {
    	float x;
    	float y;
    	float z;
    	float s;
    	float t;
    	float nx; 
    	float ny;
    	float nz;
    };
    
    struct VBO_Trilist
    {
    	unsigned short v1;
    	unsigned short v2;
    	unsigned short v3;
    };
    
    
    VBO_Trilist	tlist[18];
    
    // front
    tlist[0].v1 = 0;
    tlist[0].v2 = 1;
    tlist[0].v3 = 2;
    
    // left
    tlist[1].v1 = 3;
    tlist[1].v2 = 4;
    tlist[1].v3 = 5;
    
    // right
    tlist[2].v1 = 6;
    tlist[2].v2 = 7;
    tlist[2].v3 = 8;
    
    // back
    tlist[3].v1 = 9;
    tlist[3].v2 = 10;
    tlist[3].v3 = 11;
    
    // bottom 1
    tlist[4].v1 = 12;
    tlist[4].v2 = 13;
    tlist[4].v3 = 14;
    
    // bottom 2
    tlist[5].v1 = 15;
    tlist[5].v2 = 16;
    tlist[5].v3 = 17;
    
    
    VBO_Vertex_vsn pVerts[18];
      
    pVerts[0].x  = -1;
    pVerts[0].y  = -1;
    pVerts[0].z  = -1;
    pVerts[0].s  =  0;
    pVerts[0].t  =  0;
    pVerts[0].nx = 0;
    pVerts[0].ny = -1;
    pVerts[0].nz =  0; 
    
    pVerts[1].x  = 1;
    pVerts[1].y  = -1;
    pVerts[1].z  = -1; 
    pVerts[1].s  = 1;
    pVerts[1].t  = 0; 
    pVerts[1].nx = 0;
    pVerts[1].ny = -1; 
    pVerts[1].nz = 0;
    
    pVerts[2].x  = 1;
    pVerts[2].y  = -1; 
    pVerts[2].z  = 1; 
    pVerts[2].s  = 1; 
    pVerts[2].t  = 1; 
    pVerts[2].nx = 0;
    pVerts[2].ny = -1; 
    pVerts[2].nz = 0; 
    
    pVerts[3].x  = -1;
    pVerts[3].y  = -1;
    pVerts[3].z  = 1;
    pVerts[3].s  = 0;
    pVerts[3].t  = 1;
    pVerts[3].nx = 0;
    pVerts[3].ny = -1;
    pVerts[3].nz = 0; 
    
    pVerts[4].x  = -1;
    pVerts[4].y  = -1;
    pVerts[4].z  = -1; 
    pVerts[4].s  = 0; 
    pVerts[4].t  = 0; 
    pVerts[4].nx = 0;
    pVerts[4].ny = -1;
    pVerts[4].nz = 0;
    
    pVerts[5].x  = 1;
    pVerts[5].y  = -1;
    pVerts[5].z  = 1; 
    pVerts[5].s  = 1; 
    pVerts[5].t  = 1; 
    pVerts[5].nx = 0;
    pVerts[5].ny = -1;
    pVerts[5].nz = 0; 
    
    pVerts[6].x  = 0;
    pVerts[6].y  = 1;
    pVerts[6].z  = 0; 
    pVerts[6].s  = 0.5;
    pVerts[6].t  = 1.0; 
    pVerts[6].nx = 0; 
    pVerts[6].ny = 2; 
    pVerts[6].nz = 4; 
    
    pVerts[7].x  = -1;
    pVerts[7].y  = -1;
    pVerts[7].z  = 1; 
    pVerts[7].s  = 0; 
    pVerts[7].t  = 0; 
    pVerts[7].nx = 0;
    pVerts[7].ny = 2;
    pVerts[7].nz = 4; 
    
    pVerts[8].x  = 1;
    pVerts[8].y  = -1;
    pVerts[8].z  = 1; 
    pVerts[8].s  = 1; 
    pVerts[8].t  = 0; 
    pVerts[8].nx = 0; 
    pVerts[8].ny = 2; 
    pVerts[8].nz = 4; 
    
    pVerts[9].x  = 0;
    pVerts[9].y  = 1;
    pVerts[9].z  = 0; 
    pVerts[9].s  = 0.5;
    pVerts[9].t  = 1.0f; 
    pVerts[9].nx = -4;
    pVerts[9].ny = 2;
    pVerts[9].nz = 0; 
    
    pVerts[10].x  = -1;
    pVerts[10].y  = -1;
    pVerts[10].z  = -1; 
    pVerts[10].s  = 1;
    pVerts[10].t  = 0; 
    pVerts[10].nx = -4; 
    pVerts[10].ny = 2; 
    pVerts[10].nz = 0; 
    
    pVerts[11].x  = -1;
    pVerts[11].y  = -1;
    pVerts[11].z  = 1; 
    pVerts[11].s  = 0;
    pVerts[11].t  = 0; 
    pVerts[11].nx = -4;
    pVerts[11].ny = 2;
    pVerts[11].nz = 0; 
    
    pVerts[12].x  = 0;
    pVerts[12].y  = 1; 
    pVerts[12].z  = 0;
    pVerts[12].s  = 0.5;
    pVerts[12].t  = 1.0;
    pVerts[12].nx = 4;
    pVerts[12].ny = 2;
    pVerts[12].nz = 0;
    
    pVerts[13].x  = 1;
    pVerts[13].y  = -1;
    pVerts[13].z  = 1;
    pVerts[13].s  = 1;
    pVerts[13].t  = 0; 
    pVerts[13].nx = 4;
    pVerts[13].ny = 2;
    pVerts[13].nz = 0; 
    
    pVerts[14].x  = 1;
    pVerts[14].y  = -1;
    pVerts[14].z  = -1; 
    pVerts[14].s  = 0;
    pVerts[14].t  = 0; 
    pVerts[14].nx = 4;
    pVerts[14].ny = 2; 
    pVerts[14].nz = 0; 
    
    pVerts[15].x  = 0;
    pVerts[15].y  = 1;
    pVerts[15].z  = 0;
    pVerts[15].s  = 0.5;
    pVerts[15].t  = 1.0;
    pVerts[15].nx = 0;
    pVerts[15].ny = 2;
    pVerts[15].nz = -4; 
    
    pVerts[16].x  = 1;
    pVerts[16].y  = -1;
    pVerts[16].z  = -1; 
    pVerts[16].s  = 0;
    pVerts[16].t  = 0; 
    pVerts[16].nx = 0;
    pVerts[16].ny = 2;
    pVerts[16].nz = -4; 
    
    pVerts[17].x  = -1;
    pVerts[17].y  = -1;
    pVerts[17].z  = -1; 
    pVerts[17].s  = 1; 
    pVerts[17].t  = 0; 
    pVerts[17].nx = 0; 
    pVerts[17].ny = 2; 
    pVerts[17].nz = -4; 


   // modify the mode once, to correct the size, lenght and orientation
  
	for( int i = 0; i<18; i++)
	{
		// first center around origin
		Matrix Trans(TRANS, 0.0f, 1.0f, 0.0f);

		// shink the Y axis to be 0-1,
		Matrix Scale(SCALE, 1.0f, 0.5f, 1.0f);

		// rotates it to Z axis
		Matrix Rot( ROT_X, 90.0f * MATH_PI_180);

		Matrix M = Trans * Scale * Rot;

        // length of one bone by visualization
	    // Matrix Scale2( SCALE, 13.0f, 13.0f, 109.43f);
        // Matrix Scale2( SCALE, 13.0f, 13.0f, 13.0f);

        // Matrix Rot2;
        // orientation going down x direction with "y" up
        // IMPORTANT - this change needs to be reflected in camera's orientation and position - up is in y direction, zoom out from z axis
        // Rot2.set( ROT_ORIENT, Vect(1.0f,0.0f,0.0f), Vect( 0.0f, 1.0f, 0.0f) );

        // M =  M * Scale2 * Rot2;
        // M = M * Scale2;

		Vect vert( pVerts[i].x, pVerts[i].y, pVerts[i].z);
		Vect vertNorm( pVerts[i].nx, pVerts[i].ny, pVerts[i].nz);

		Vect vout;
		Vect voutNorm;

		vout = vert * M;
		voutNorm = vertNorm * M;
		voutNorm.norm();

		pVerts[i].x  = vout[x] ;
		pVerts[i].y  = vout[y] ;
		pVerts[i].z  = vout[z] ;
		pVerts[i].nx = voutNorm[x];
		pVerts[i].ny = voutNorm[y];
		pVerts[i].nz = voutNorm[z];

		printf(" vert[%d]  %f  %f  %f\n",i, vout[x], vout[y], vout[z]);

	}

   //**************************************DONE READING DATA********************************************************

        /* Allocate and assign a Vertex Array Object to our handle */
        glGenVertexArrays(1, &this->vao);
 
        /* Bind our Vertex Array Object as the current used object */
        glBindVertexArray(this->vao);

        // now we have 1 buffer for stride, and one for index data
        GLuint vbo[2];

        // allocate and assign two VBO to my handle
        glGenBuffers(2, vbo);

        // Load the combined data: ---------------------------------------------------------

            // Bind our first VBO as being the active buffer and storing vertex attributes (coordinates) 
            glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
            
            // Copy the vertex data to our buffer 
            // glBufferData(type, size in bytes, data, usage) - copy the contents of data
            glBufferData(GL_ARRAY_BUFFER, sizeof(VBO_Vertex_vsn) * 18, pVerts, GL_STATIC_DRAW);
            
        // VERTEX data: ---------------------------------------------------------
            // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_VERTEX = 0 in ShaderManager.h
            glEnableVertexAttribArray(0);

            // Specify that our coordinate data is going into attribute index 0, and contains 3 floats per vertex 
            // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
            // first calculate offset into first vert coofdinate as & of x - beginning & of buffer
            void *offsetVert = (void *) ( (unsigned int)&pVerts[0].x - (unsigned int)&pVerts[0].x );
            glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(VBO_Vertex_vsn), offsetVert);

        // Texture data: ---------------------------------------------------------
            // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_TEXTURE0 = 3 in ShaderManager.h
            glEnableVertexAttribArray(3);

            // Specify that our coordinate data is going into attribute index 3, and contains 2 floats per vertex 
            // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
            // offset into first Tex coordinate = & of s - beggining & of buffer
            void *offsetTex = (void *) ( (unsigned int)&pVerts[0].s - (unsigned int)&pVerts[0].x );
            glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(VBO_Vertex_vsn), offsetTex);

        // Normal data: ---------------------------------------------------------
            // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_NORMAL = 2 in ShaderManager.h
            glEnableVertexAttribArray(2);

            // Specify that our coordinate data is going into attribute index 2, and contains 3 floats per vertex 
            // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
            // offset into first Norm coordinate = & of nx - beggining & of buffer
            void *offsetNorm = (void *) ( (unsigned int)&pVerts[0].nx - (unsigned int)&pVerts[0].x );
            glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(VBO_Vertex_vsn), offsetNorm);


         // Load the index data: ---------------------------------------------------------

             // Bind our 2nd VBO as being the active buffer and storing index )
             // notice the type - GL_ELEMENT_ARRAY_BUFFER - it's a lookup into GL_ARRAY_BUFFER
	    	 glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vbo[1]);

	         // Copy the index data to our buffer 
             // glBufferData(type, size in bytes, data, usage) 
	    	 glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(VBO_Trilist)*6, tlist, GL_STATIC_DRAW);
}

