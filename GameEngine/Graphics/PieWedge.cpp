#include "OpenGLWrapper.h"
#include "PieWedge.h"
#include "MathEngine.h"
#include "Camera.h"
#include "File.h"
#include "GraphicsObjectFileHdr.h"
#include "TextureManager.h"
#include "TextureMap.h"

#define CREATE_PIEWEDGE_DATA 1 // 1 - creates file, 0 - uses file

void PieWedge::loadTexture(void)
{
    // ------ declare file handle -----------------
    FileHandle fh;
    FileError ferror;

#if CREATE_PIEWEDGE_DATA

   //----------- WRITE ------------------------------------------

   ferror = File::open(fh, "piewedge.cdm", FILE_WRITE );
   assert( ferror == FILE_SUCCESS );

   // instantiate File Header on the stack
   // gObjFileHdr  graphicsFileHdr;

   // set object name - _TRUnCATE PARAM makes sure it's always 0 terminated (secure string copy)
   strncpy_s(this->graphicsFileHdr.objName, OBJECT_NAME_SIZE, "piewedge", _TRUNCATE); 

   // set texture params
   this->graphicsFileHdr.textData[0].target = GL_TEXTURE_2D;
   this->graphicsFileHdr.textData[0].minFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[0].magFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[0].wrapMode = GL_CLAMP_TO_EDGE;
   strncpy_s(this->graphicsFileHdr.textData[0].textName, TEXTURE_NAME_SIZE, "cheese.tga", _TRUNCATE);

   this->graphicsFileHdr.textData[1].target = GL_TEXTURE_2D;
   this->graphicsFileHdr.textData[1].minFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[1].magFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[1].wrapMode = GL_CLAMP_TO_EDGE;
   strncpy_s(this->graphicsFileHdr.textData[1].textName, TEXTURE_NAME_SIZE, "rice.tga", _TRUNCATE);

   // write the data
   ferror = File::write( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
   assert( ferror == FILE_SUCCESS );

   // close for now
   ferror = File::close( fh );
   assert( ferror == FILE_SUCCESS );

#else

   ferror = File::open(fh, "piewedge.cdm", FILE_READ );
   assert( ferror == FILE_SUCCESS );

   // we'll read file data into this object, and use it in our call to load the texture
   // gObjFileHdr  graphicsFileHdr;

   // Read the header
   ferror = File::read( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
   assert( ferror == FILE_SUCCESS );

   // close
   ferror = File::close( fh );
   assert( ferror == FILE_SUCCESS );

#endif

   // install the textures
   this->textureID[0] = TextureManager::addTexture(this->graphicsFileHdr.textData[0]);
   this->textureID[1] = TextureManager::addTexture(this->graphicsFileHdr.textData[1]);
}

void PieWedge::createVAO(void)
{
    struct MyVertex_stride
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

    struct MyTriList
    {   // short is ~64K, we only have a list of 18 vertices, OK as long as it's < 64K
	    unsigned short v1;
	    unsigned short v2;
	    unsigned short v3;
    };

#if CREATE_PIEWEDGE_DATA

    // 1 buffer for index data 
    MyTriList	tlist[8];
    // 1 buffer for stride
    MyVertex_stride pVerts[24];

    //Bottom
    tlist[0].v1 = 0;
    tlist[0].v2 = 1;
    tlist[0].v3 = 2;
    
    tlist[1].v1 = 3;
    tlist[1].v2 = 4;
    tlist[1].v3 = 5;
    
    //left
    tlist[2].v1 = 6;
    tlist[2].v2 = 7;
    tlist[2].v3 = 8;
    
    
    tlist[3].v1 = 9;
    tlist[3].v2 = 10;
    tlist[3].v3 = 11;
    
    //right
    tlist[4].v1 = 12;
    tlist[4].v2 = 13;
    tlist[4].v3 = 14;
    
    
    tlist[5].v1 = 15;
    tlist[5].v2 = 16;
    tlist[5].v3 = 17;
    
    //front
    tlist[6].v1 = 18;
    tlist[6].v2 = 19;
    tlist[6].v3 = 20;

    //back
    tlist[7].v1 = 21;
    tlist[7].v2 = 22;
    tlist[7].v3 = 23;

    //*************************************************
    // credit to AnneBecker who posted the following vetex info for the PieWedge in common dir
    //*************************************************

    //bottom
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
    pVerts[1].s  =  1;
    pVerts[1].t  =  0;
    pVerts[1].nx = 0;
    pVerts[1].ny = -1;
    pVerts[1].nz =  0;
    
    pVerts[2].x  = 1;
    pVerts[2].y  = -1;
    pVerts[2].z  = 1;
    pVerts[2].s  =  1;
    pVerts[2].t  =  1;
    pVerts[2].nx = 0;
    pVerts[2].ny = -1;
    pVerts[2].nz =  0;
    
    pVerts[3].x  = -1;
    pVerts[3].y  = -1;
    pVerts[3].z  = 1;
    pVerts[3].s  =  0;
    pVerts[3].t  =  1;
    pVerts[3].nx = 0;
    pVerts[3].ny = -1;
    pVerts[3].nz =  0;
    
    pVerts[4].x  =  -1;
    pVerts[4].y  =  -1;
    pVerts[4].z  =  -1;
    pVerts[4].s  =   0;
    pVerts[4].t  =   0;
    pVerts[4].nx =  0;
    pVerts[4].ny =  -1;
    pVerts[4].nz =   0;
    
    pVerts[5].x  =  1;
    pVerts[5].y  =  -1;
    pVerts[5].z  =  1;
    pVerts[5].s  =   1;
    pVerts[5].t  =   1;
    pVerts[5].nx =  0;
    pVerts[5].ny =  -1;
    pVerts[5].nz =   0;
    
    //left
    pVerts[6].x  = 0;
    pVerts[6].y  = 1;
    pVerts[6].z  = 1;
    pVerts[6].s  = 1;
    pVerts[6].t  = 1;
    pVerts[6].nx = -0.9f;
    pVerts[6].ny = 0.45f;
    pVerts[6].nz = 0;
    
    pVerts[7].x  = 0;
    pVerts[7].y  = 1;
    pVerts[7].z  =-1;
    pVerts[7].s  = 1;
    pVerts[7].t  = 0;
    pVerts[7].nx =-0.9f;
    pVerts[7].ny = 0.45f;
    pVerts[7].nz = 0;
    
    pVerts[8].x  = -1;
    pVerts[8].y  =-1;
    pVerts[8].z  =-1;
    pVerts[8].s  = 0;
    pVerts[8].t  = 0;
    pVerts[8].nx =-0.9f;
    pVerts[8].ny = 0.45f;
    pVerts[8].nz = 0;
    
    pVerts[9].x = 0;
    pVerts[9].y = 1;
    pVerts[9].z = 1;
    pVerts[9].s = 1;
    pVerts[9].t = 1;
    pVerts[9].nx = -0.9f;
    pVerts[9].ny = 0.45f;
    pVerts[9].nz = 0;
    
    pVerts[10].x = -1;
    pVerts[10].y = -1;
    pVerts[10].z = -1;
    pVerts[10].s = 0;
    pVerts[10].t = 0;
    pVerts[10].nx = -0.9f;
    pVerts[10].ny = 0.45f;
    pVerts[10].nz = 0;
    
    pVerts[11].x = -1;
    pVerts[11].y = -1;
    pVerts[11].z = 1;
    pVerts[11].s = 0;
    pVerts[11].t = 1;
    pVerts[11].nx = -0.9f;
    pVerts[11].ny = 0.45f;
    pVerts[11].nz = 0;
    
    //right
    pVerts[12].x = 1;
    pVerts[12].y = -1;
    pVerts[12].z = -1;
    pVerts[12].s = 0;
    pVerts[12].t = 0;
    pVerts[12].nx = 0.9f;
    pVerts[12].ny = 0.45f;
    pVerts[12].nz = 0;
    
    pVerts[13].x = 0;
    pVerts[13].y = 1;
    pVerts[13].z =-1;
    pVerts[13].s = 1;
    pVerts[13].t = 0;
    pVerts[13].nx = 0.9f;
    pVerts[13].ny = 0.45f;
    pVerts[13].nz = 0;
    
    pVerts[14].x = 0;
    pVerts[14].y = 1;
    pVerts[14].z = 1;
    pVerts[14].s = 1;
    pVerts[14].t = 1;
    pVerts[14].nx = 0.9f;
    pVerts[14].ny = 0.45f;
    pVerts[14].nz = 0;
    
    pVerts[15].x = 0;
    pVerts[15].y = 1;
    pVerts[15].z = 1;
    pVerts[15].s  = 1;
    pVerts[15].t  = 1;
    pVerts[15].nx = 0.9f;
    pVerts[15].ny = 0.45f;
    pVerts[15].nz = 0;
    
    pVerts[16].x = 1;
    pVerts[16].y = -1;
    pVerts[16].z = 1;
    pVerts[16].s = 0;
    pVerts[16].t  = 1;
    pVerts[16].nx = 0.9f;
    pVerts[16].ny = 0.45f;
    pVerts[16].nz = 0;
    
    pVerts[17].x = 1;
    pVerts[17].y = -1;
    pVerts[17].z = -1;
    pVerts[17].s = 0;
    pVerts[17].t = 0;
    pVerts[17].nx = 0.9f;
    pVerts[17].ny = 0.45f;
    pVerts[17].nz = 0;
    
    
    //front
    pVerts[18].x  = 1;
    pVerts[18].y  = -1;
    pVerts[18].z  = 1;
    pVerts[18].s  =  1;
    pVerts[18].t  =  0;
    pVerts[18].nx = 0;
    pVerts[18].ny = 1;
    pVerts[18].nz =  1;
    
    pVerts[19].x  = 0;
    pVerts[19].y  = 1;
    pVerts[19].z  = 1;
    pVerts[19].s  =  1;
    pVerts[19].t  =  1;
    pVerts[19].nx = 0;
    pVerts[19].ny = 1;
    pVerts[19].nz =  1;
    
    pVerts[20].x  = -1;
    pVerts[20].y  = -1;
    pVerts[20].z  = 1;
    pVerts[20].s  =  0;
    pVerts[20].t  =  1;
    pVerts[20].nx = 0;
    pVerts[20].ny = 1;
    pVerts[20].nz =  1;
    
    //back
    pVerts[21].x  = 1;
    pVerts[21].y  = -1;
    pVerts[21].z  = -1;
    pVerts[21].s  = 1;
    pVerts[21].t  = 0;
    pVerts[21].nx = 0;
    pVerts[21].ny = 0;
    pVerts[21].nz = -1;
    
    pVerts[22].x  = -1;
    pVerts[22].y  = -1;
    pVerts[22].z  = -1;
    pVerts[22].s  = 0;
    pVerts[22].t  = 0;
    pVerts[22].nx = 0;
    pVerts[22].ny = 0;
    pVerts[22].nz = -1;
    
    pVerts[23].x  = 0;
    pVerts[23].y  = 1;
    pVerts[23].z  = -1;
    pVerts[23].s  = 0;
    pVerts[23].t  = 1;
    pVerts[23].nx = 0;
    pVerts[23].ny = 0;
    pVerts[23].nz = -1;
    
// ----------------------Write the data to a file------------------------

    FileHandle fh;
    FileError ferror;

   // 1)  Get the existing GraphicsFileHeader from the file
    
      // Since we didn't wrap the ReOpen functionality, 
      // I need to read, close then write again
      ferror = File::open(fh, "piewedge.cdm", FILE_READ );
      assert( ferror == FILE_SUCCESS );
      
      // create object to which file header data will be read
      // gObjFileHdr  graphicsFileHdr;
      
      // Read the header
      ferror = File::read( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
      assert( ferror == FILE_SUCCESS );
      
      // close
      ferror = File::close( fh );
      assert( ferror == FILE_SUCCESS );

   // 2)  Write the data (Header, Buffers) to the file

      // create the file, write the header (Take 1)
      ferror = File::open(fh, "piewedge.cdm", FILE_READ_WRITE );
      assert( ferror == FILE_SUCCESS );

      // write texture data that we have to this point - now my file pointer is where all vertex data will go
      ferror = File::write( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
      assert( ferror == FILE_SUCCESS );
    
   // Now that we created vertex/index buffers and know their info, update the header: numVerts, VertBufferOffset 
       // ****to be written to file header in Take 2****
       this->graphicsFileHdr.numVerts = 24;
       ferror = File::tell( fh, this->graphicsFileHdr.vertBufferOffset );
       assert( ferror == FILE_SUCCESS );
       
       // write the vertex data to the file contents (NOT THE HEADER)
       ferror = File::write( fh, pVerts, 24 * sizeof(MyVertex_stride) );
       assert( ferror == FILE_SUCCESS );

   // update the header: numTriList, triListBufferOffset
      // ****to be written to file header in Take 2****
      this->graphicsFileHdr.numTriList = 8;
      ferror = File::tell( fh, this->graphicsFileHdr.triListBufferOffset );
      assert( ferror == FILE_SUCCESS );

      // write the triListBuffer data to the file contents (NOT THE HEADER)
      ferror = File::write( fh, tlist, 8 * sizeof(MyTriList) );
      assert( ferror == FILE_SUCCESS );

   // write the header (Take 2) now with updated data for Vert buffer and Index buffer
      // reset to the beginning of file
      ferror = File::seek( fh, FILE_SEEK_BEGIN, 0 );
      assert( ferror == FILE_SUCCESS );

      // write the buffer - with update data
      ferror = File::write( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
      assert( ferror == FILE_SUCCESS );

   // All done 
   ferror = File::close( fh );
   assert( ferror == FILE_SUCCESS );    

#else

   // read number of Verts/triangles and their offsets from file to become data driven!!!
   FileHandle fh;
   FileError  ferror;

   ferror = File::open(fh, "piewedge.cdm", FILE_READ );
   assert( ferror == FILE_SUCCESS );

   // read the data into this object, and get the data we need from it to create vertex/index buffers
   // gObjFileHdr  gFileHdr;

   // Read the header
   ferror = File::read( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
   assert( ferror == FILE_SUCCESS );

   // create the vertex buffer
   MyVertex_stride *pVerts = (MyVertex_stride *)malloc( this->graphicsFileHdr.numVerts * sizeof(MyVertex_stride) );

   // load the verts
      // seek to the location using the offset in the file header
      ferror = File::seek( fh, FILE_SEEK_BEGIN, this->graphicsFileHdr.vertBufferOffset );
      assert( ferror == FILE_SUCCESS );

      // read it into pVerts, which we just allocated
      ferror = File::read( fh, pVerts, this->graphicsFileHdr.numVerts  * sizeof(MyVertex_stride) );
      assert( ferror == FILE_SUCCESS );

   // create the triLists buffer
   MyTriList *tlist = (MyTriList*) malloc( this->graphicsFileHdr.numTriList * sizeof(MyTriList) );

   // load the triList
      // seek to the location using the offset in the file header
      ferror = File::seek( fh, FILE_SEEK_BEGIN, this->graphicsFileHdr.triListBufferOffset );
      assert( ferror == FILE_SUCCESS );

      // read it into tlist, which we just allocated
      ferror = File::read( fh, tlist, this->graphicsFileHdr.numTriList * sizeof(MyTriList)  );
      assert( ferror == FILE_SUCCESS );

   // close
   ferror = File::close( fh );
   assert( ferror == FILE_SUCCESS );

#endif

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
        glBufferData(GL_ARRAY_BUFFER, sizeof(MyVertex_stride) * 24, pVerts, GL_STATIC_DRAW);
        
    // VERTEX data: ---------------------------------------------------------
        // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_VERTEX = 0 in ShaderManager.h
        glEnableVertexAttribArray(0);

        // Specify that our coordinate data is going into attribute index 0, and contains 3 floats per vertex 
        // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
        // first calculate offset into first vert coofdinate as & of x - beginning & of buffer
        void *offsetVert = (void *) ( (unsigned int)&pVerts[0].x - (unsigned int)&pVerts[0].x );
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(MyVertex_stride), offsetVert);

    // Texture data: ---------------------------------------------------------
        // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_TEXTURE0 = 3 in ShaderManager.h
        glEnableVertexAttribArray(3);

        // Specify that our coordinate data is going into attribute index 3, and contains 2 floats per vertex 
        // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
        // offset into first Tex coordinate = & of s - beggining & of buffer
        void *offsetTex = (void *) ( (unsigned int)&pVerts[0].s - (unsigned int)&pVerts[0].x );
        glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(MyVertex_stride), offsetTex);

    // Normal data: ---------------------------------------------------------
        // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_NORMAL = 2 in ShaderManager.h
        glEnableVertexAttribArray(2);

        // Specify that our coordinate data is going into attribute index 2, and contains 3 floats per vertex 
        // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
        // offset into first Norm coordinate = & of nx - beggining & of buffer
        void *offsetNorm = (void *) ( (unsigned int)&pVerts[0].nx - (unsigned int)&pVerts[0].x );
        glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(MyVertex_stride), offsetNorm);


     // Load the index data: ---------------------------------------------------------

         // Bind our 2nd VBO as being the active buffer and storing index )
         // notice the type - GL_ELEMENT_ARRAY_BUFFER - it's a lookup into GL_ARRAY_BUFFER
		 glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vbo[1]);

	     // Copy the index data to our buffer 
         // glBufferData(type, size in bytes, data, usage) 
		 glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(MyTriList)*8, tlist, GL_STATIC_DRAW);

};

