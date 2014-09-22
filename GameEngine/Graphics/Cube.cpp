#include "OpenGLWrapper.h"
#include "Cube.h"
#include "MathEngine.h"
#include "Camera.h"
#include "File.h"
#include "GraphicsObjectFileHdr.h"
#include "TextureManager.h"
#include "TextureMap.h"

#define CREATE_CUBE_DATA 1 // 1 - creates file, 0 - uses file
#define COLLISION_DEMO 0 

void Cube::loadTexture(void)
{
    // ------ declare file handle -----------------
    FileHandle fh;
    FileError ferror;

#if CREATE_CUBE_DATA

   //----------- WRITE ------------------------------------------

   ferror = File::open(fh, "cube.cdm", FILE_WRITE );
   assert( ferror == FILE_SUCCESS );

   // instantiate File Header on the stack
   // gObjFileHdr graphicsFileHdr;

   // set object name - _TRUnCATE PARAM makes sure it's always 0 terminated (secure string copy)
   strncpy_s(this->graphicsFileHdr.objName, OBJECT_NAME_SIZE, "cube", _TRUNCATE); 

   // set texture params
   this->graphicsFileHdr.textData[0].target = GL_TEXTURE_2D;
   this->graphicsFileHdr.textData[0].minFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[0].magFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[0].wrapMode = GL_CLAMP_TO_EDGE;
   strncpy_s(this->graphicsFileHdr.textData[0].textName, TEXTURE_NAME_SIZE, "cube1.tga", _TRUNCATE);

   this->graphicsFileHdr.textData[1].target = GL_TEXTURE_2D;
   this->graphicsFileHdr.textData[1].minFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[1].magFilter = GL_LINEAR;
   this->graphicsFileHdr.textData[1].wrapMode = GL_CLAMP_TO_EDGE;
   strncpy_s(this->graphicsFileHdr.textData[1].textName, TEXTURE_NAME_SIZE, "earth.tga", _TRUNCATE);

   // write the data
   ferror = File::write( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
   assert( ferror == FILE_SUCCESS );

   // close for now
   ferror = File::close( fh );
   assert( ferror == FILE_SUCCESS );

#else

   ferror = File::open(fh, "cube.cdm", FILE_READ );
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

   // install the texture
   this->textureID[0] = TextureManager::addTexture(this->graphicsFileHdr.textData[0]);
   this->textureID[1] = TextureManager::addTexture(this->graphicsFileHdr.textData[1]);
}

void Cube::createVAO(void)
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
    {   // short is ~64K, we only have a list of 36 vertices, OK as long as it's < 64K
	    unsigned short v1;
	    unsigned short v2;
	    unsigned short v3;
    };

    

#if CREATE_CUBE_DATA

    // 1 buffer for index data - 6 faces to cube, each with 2 triangles    
    MyTriList	tlist[12];

    // top 1
    tlist[0].v1 = 0;
    tlist[0].v2 = 1;
    tlist[0].v3 = 2;
    
    // top 2
    tlist[1].v1 = 3;
    tlist[1].v2 = 4;
    tlist[1].v3 = 5;
    
    // bottom 1
    tlist[2].v1 = 6;
    tlist[2].v2 = 7;
    tlist[2].v3 = 8;
    
    // bottom 2
    tlist[3].v1 = 9;
    tlist[3].v2 = 10;
    tlist[3].v3 = 11;
    
    // left 1
    tlist[4].v1 = 12;
    tlist[4].v2 = 13;
    tlist[4].v3 = 14;
    
    // left 2
    tlist[5].v1 = 15;
    tlist[5].v2 = 16;
    tlist[5].v3 = 17;

    // right 1
    tlist[6].v1 = 18;
    tlist[6].v2 = 19;
    tlist[6].v3 = 20;
    
    // right 2
    tlist[7].v1 = 21;
    tlist[7].v2 = 22;
    tlist[7].v3 = 23;
    
    // front 1
    tlist[8].v1 = 24;
    tlist[8].v2 = 25;
    tlist[8].v3 = 26;
    
    // front 2
    tlist[9].v1 = 27;
    tlist[9].v2 = 28;
    tlist[9].v3 = 29;
    
    // back 1
    tlist[10].v1 = 30;
    tlist[10].v2 = 31;
    tlist[10].v3 = 32;
    
    // back 2
    tlist[11].v1 = 33;
    tlist[11].v2 = 34;
    tlist[11].v3 = 35;

    // 1 buffer for stride
    MyVertex_stride cVerts[36];

#if COLLISION_DEMO
    this->radius = 0.5f;
#else
    this->radius = .15f;
#endif
    
    // top 1,1,1
    cVerts[0].x  =  radius;
    cVerts[0].y  =  radius;
    cVerts[0].z  =  radius;
    cVerts[0].s  =  radius;
    cVerts[0].t  =  radius;
    cVerts[0].nx =  0;
    cVerts[0].ny =  radius;
    cVerts[0].nz =  0;

    this->topNorm = Vect(cVerts[0].nx, cVerts[0].ny, cVerts[0].nz);
    
    //1,1,-1 FarTopRight
    cVerts[1].x  =  radius;
    cVerts[1].y  =  radius;
    cVerts[1].z  = -radius; 
    cVerts[1].s  =  radius;
    cVerts[1].t  =  0; 
    cVerts[1].nx =  0;
    cVerts[1].ny =  radius; 
    cVerts[1].nz =  0;
    
    this->farTopRight = Vect(cVerts[1].x, cVerts[1].y, cVerts[1].z);

    //-1,1,-1
    cVerts[2].x  = -radius;
    cVerts[2].y  =  radius; 
    cVerts[2].z  = -radius; 
    cVerts[2].s  =  0; 
    cVerts[2].t  =  0; 
    cVerts[2].nx =  0;
    cVerts[2].ny =  radius; 
    cVerts[2].nz =  0; 
    
    //1,1,1
    cVerts[3].x  =  radius;
    cVerts[3].y  =  radius;
    cVerts[3].z  =  radius;
    cVerts[3].s  =  radius;
    cVerts[3].t  =  radius;
    cVerts[3].nx =  0;
    cVerts[3].ny =  radius;
    cVerts[3].nz =  0; 
    
    //-1,1,-1
    cVerts[4].x  = -radius;
    cVerts[4].y  =  radius;
    cVerts[4].z  = -radius; 
    cVerts[4].s  =  0; 
    cVerts[4].t  =  0; 
    cVerts[4].nx =  0;
    cVerts[4].ny =  radius;
    cVerts[4].nz =  0;
    
    //-1,1,1
    cVerts[5].x  = -radius;
    cVerts[5].y  =  radius;
    cVerts[5].z  =  radius; 
    cVerts[5].s  =  0; 
    cVerts[5].t  =  radius; 
    cVerts[5].nx =  0;
    cVerts[5].ny =  radius;
    cVerts[5].nz =  0;
    
    // bottom -1,-1,-1
    cVerts[6].x  = -radius;
    cVerts[6].y  = -radius;
    cVerts[6].z  = -radius; 
    cVerts[6].s  =  0;
    cVerts[6].t  =  0; 
    cVerts[6].nx =  0; 
    cVerts[6].ny = -radius; 
    cVerts[6].nz =  0; 

    this->bottomNorm = Vect(cVerts[6].nx, cVerts[6].ny, cVerts[6].nz);
    
    // 1, -1, -1
    cVerts[7].x  =  radius;
    cVerts[7].y  = -radius;
    cVerts[7].z  = -radius; 
    cVerts[7].s  =  radius; 
    cVerts[7].t  =  0; 
    cVerts[7].nx =  0;
    cVerts[7].ny = -radius;
    cVerts[7].nz =  0;
    
    // 1, -1, 1
    cVerts[8].x  =  radius;
    cVerts[8].y  = -radius;
    cVerts[8].z  =  radius; 
    cVerts[8].s  =  radius; 
    cVerts[8].t  =  radius; 
    cVerts[8].nx =  0;
    cVerts[8].ny = -radius;
    cVerts[8].nz =  0;
    
    // -1, -1, 1
    cVerts[9].x  = -radius;
    cVerts[9].y  = -radius;
    cVerts[9].z  =  radius; 
    cVerts[9].s  =  0;
    cVerts[9].t  =  radius; 
    cVerts[9].nx =  0;
    cVerts[9].ny = -radius;
    cVerts[9].nz =  0;

    this->nearBottomLeft = Vect(cVerts[9].x, cVerts[9].y, cVerts[9].z);
    
    // -1, -1, -1
    cVerts[10].x  = -radius;
    cVerts[10].y  = -radius;
    cVerts[10].z  = -radius; 
    cVerts[10].s  =  0;
    cVerts[10].t  =  0; 
    cVerts[10].nx =  0;
    cVerts[10].ny = -radius;
    cVerts[10].nz =  0;
    
    // 1, -1, 1
    cVerts[11].x  =  radius;
    cVerts[11].y  = -radius;
    cVerts[11].z  =  radius; 
    cVerts[11].s  =  radius;
    cVerts[11].t  =  radius; 
    cVerts[11].nx =  0;
    cVerts[11].ny = -radius;
    cVerts[11].nz =  0;
    
    // left
    cVerts[12].x  = -radius;
    cVerts[12].y  =  radius; 
    cVerts[12].z  =  radius;
    cVerts[12].s  =  radius;
    cVerts[12].t  =  radius;
    cVerts[12].nx = -radius;
    cVerts[12].ny =  0;
    cVerts[12].nz =  0;

    this->leftNorm = Vect(cVerts[12].nx, cVerts[12].ny, cVerts[12].nz);
    
    cVerts[13].x  = -radius;
    cVerts[13].y  =  radius;
    cVerts[13].z  = -radius;
    cVerts[13].s  =  radius;
    cVerts[13].t  =  0; 
    cVerts[13].nx = -radius;
    cVerts[13].ny =  0;
    cVerts[13].nz =  0;
    
    cVerts[14].x  = -radius;
    cVerts[14].y  = -radius;
    cVerts[14].z  = -radius; 
    cVerts[14].s  =  0;
    cVerts[14].t  =  0; 
    cVerts[14].nx = -radius;
    cVerts[14].ny =  0;
    cVerts[14].nz =  0;
    
    cVerts[15].x  = -radius;
    cVerts[15].y  =  radius;
    cVerts[15].z  =  radius;
    cVerts[15].s  =  radius;
    cVerts[15].t  =  radius;
    cVerts[15].nx = -radius;
    cVerts[15].ny =  0;
    cVerts[15].nz =  0; 
    
    cVerts[16].x  = -radius;
    cVerts[16].y  = -radius;
    cVerts[16].z  = -radius; 
    cVerts[16].s  =  0;
    cVerts[16].t  =  0; 
    cVerts[16].nx = -radius;
    cVerts[16].ny =  0;
    cVerts[16].nz =  0;
    
    cVerts[17].x  = -radius;
    cVerts[17].y  = -radius;
    cVerts[17].z  =  radius; 
    cVerts[17].s  =  0; 
    cVerts[17].t  =  radius; 
    cVerts[17].nx = -radius;
    cVerts[17].ny =  0;
    cVerts[17].nz =  0;

    // right
    cVerts[18].x  =  radius;
    cVerts[18].y  = -radius;
    cVerts[18].z  = -radius;
    cVerts[18].s  =  0;
    cVerts[18].t  =  0;
    cVerts[18].nx =  radius;
    cVerts[18].ny =  0;
    cVerts[18].nz =  0; 
    
    this->rightNorm = Vect(cVerts[18].nx, cVerts[18].ny, cVerts[18].nz);

    cVerts[19].x  =  radius;
    cVerts[19].y  =  radius;
    cVerts[19].z  = -radius; 
    cVerts[19].s  =  radius;
    cVerts[19].t  =  0; 
    cVerts[19].nx =  radius;
    cVerts[19].ny =  0; 
    cVerts[19].nz =  0;
    
    cVerts[20].x  =  radius;
    cVerts[20].y  =  radius; 
    cVerts[20].z  =  radius; 
    cVerts[20].s  =  radius; 
    cVerts[20].t  =  radius; 
    cVerts[20].nx =  radius;
    cVerts[20].ny =  0; 
    cVerts[20].nz =  0; 
    
    cVerts[21].x  =  radius;
    cVerts[21].y  =  radius;
    cVerts[21].z  =  radius;
    cVerts[21].s  =  radius;
    cVerts[21].t  =  radius;
    cVerts[21].nx =  radius;
    cVerts[21].ny =  0;
    cVerts[21].nz =  0; 
    
    cVerts[22].x  =  radius;
    cVerts[22].y  = -radius;
    cVerts[22].z  =  radius; 
    cVerts[22].s  =  0; 
    cVerts[22].t  =  radius; 
    cVerts[22].nx =  radius;
    cVerts[22].ny =  0;
    cVerts[22].nz =  0;
    
    cVerts[23].x  =  radius;
    cVerts[23].y  = -radius;
    cVerts[23].z  = -radius; 
    cVerts[23].s  =  0; 
    cVerts[23].t  =  0; 
    cVerts[23].nx =  radius;
    cVerts[23].ny =  0;
    cVerts[23].nz =  0;
    
    // front 1, -1, 1
    cVerts[24].x  =  radius;
    cVerts[24].y  = -radius;
    cVerts[24].z  =  radius; 
    cVerts[24].s  =  radius;
    cVerts[24].t  =  0; 
    cVerts[24].nx =  0; 
    cVerts[24].ny =  0; 
    cVerts[24].nz =  radius; 

    this->frontNorm = Vect(cVerts[24].nx, cVerts[24].ny, cVerts[24].nz);
    this->nearBottomRight = Vect(cVerts[24].x, cVerts[24].y, cVerts[24].z);
    
    // 1, 1, 1
    cVerts[25].x  =  radius;
    cVerts[25].y  =  radius;
    cVerts[25].z  =  radius; 
    cVerts[25].s  =  radius; 
    cVerts[25].t  =  radius; 
    cVerts[25].nx =  0;
    cVerts[25].ny =  0;
    cVerts[25].nz =  radius;

    this->nearTopRight = Vect(cVerts[25].x, cVerts[25].y, cVerts[25].z);
    
    // -1, 1, 1
    cVerts[26].x  = -radius;
    cVerts[26].y  =  radius;
    cVerts[26].z  =  radius; 
    cVerts[26].s  =  0; 
    cVerts[26].t  =  radius; 
    cVerts[26].nx =  0;
    cVerts[26].ny =  0;
    cVerts[26].nz =  radius;

    this->nearTopLeft = Vect(cVerts[26].x, cVerts[26].y, cVerts[26].z);
    
    cVerts[27].x  = -radius;
    cVerts[27].y  =  radius;
    cVerts[27].z  =  radius; 
    cVerts[27].s  =  0;
    cVerts[27].t  =  radius; 
    cVerts[27].nx =  0;
    cVerts[27].ny =  0;
    cVerts[27].nz =  radius;
    
    cVerts[28].x  = -radius;
    cVerts[28].y  = -radius;
    cVerts[28].z  =  radius;
    cVerts[28].s  =  0;
    cVerts[28].t  =  0;
    cVerts[28].nx =  0;
    cVerts[28].ny =  0;
    cVerts[28].nz =  radius;
    
    cVerts[29].x  =  radius;
    cVerts[29].y  = -radius;
    cVerts[29].z  =  radius;
    cVerts[29].s  =  radius;
    cVerts[29].t  =  0;
    cVerts[29].nx =  0;
    cVerts[29].ny =  0;
    cVerts[29].nz =  radius;
    
    // back 1, -1, -1
    cVerts[30].x  =  radius;
    cVerts[30].y  = -radius;
    cVerts[30].z  = -radius;
    cVerts[30].s  =  radius;
    cVerts[30].t  =  0;
    cVerts[30].nx =  0;
    cVerts[30].ny =  0;
    cVerts[30].nz = -radius;

    this->backNorm = Vect(cVerts[30].nx, cVerts[30].ny, cVerts[30].nz);
    this->farBottomRight = Vect(cVerts[30].x, cVerts[30].y, cVerts[30].z);
    
    // -1, -1, -1
    cVerts[31].x  = -radius;
    cVerts[31].y  = -radius;
    cVerts[31].z  = -radius;
    cVerts[31].s  =  0;
    cVerts[31].t  =  0;
    cVerts[31].nx =  0;
    cVerts[31].ny =  0;
    cVerts[31].nz = -radius;

    this->farBottomLeft = Vect(cVerts[31].x, cVerts[31].y, cVerts[31].z);
    
    // -1, 1, -1
    cVerts[32].x  = -radius;
    cVerts[32].y  =  radius;
    cVerts[32].z  = -radius;
    cVerts[32].s  =  0;
    cVerts[32].t  =  radius;
    cVerts[32].nx =  0;
    cVerts[32].ny =  0;
    cVerts[32].nz = -radius;

    this->farTopLeft = Vect(cVerts[32].x, cVerts[32].y, cVerts[32].z);
    
    cVerts[33].x  = -radius;
    cVerts[33].y  =  radius;
    cVerts[33].z  = -radius;
    cVerts[33].s  =  0;
    cVerts[33].t  =  radius;
    cVerts[33].nx =  0;
    cVerts[33].ny =  0;
    cVerts[33].nz = -radius;
    
    cVerts[34].x  =  radius;
    cVerts[34].y  =  radius;
    cVerts[34].z  = -radius;
    cVerts[34].s  =  radius;
    cVerts[34].t  =  radius;
    cVerts[34].nx =  0;
    cVerts[34].ny =  0;
    cVerts[34].nz = -radius;
    
    cVerts[35].x  =  radius;
    cVerts[35].y  = -radius;
    cVerts[35].z  = -radius;
    cVerts[35].s  =  radius;
    cVerts[35].t  =  0;
    cVerts[35].nx =  0;
    cVerts[35].ny =  0;
    cVerts[35].nz = -radius;

    // ----------------------Write the data to a file------------------------

    FileHandle fh;
    FileError ferror;

   // 1)  Get the existing GraphicsFileHeader from the file
    
      // Since we didn't wrap the ReOpen functionality, 
      // I need to read, close then write again
      ferror = File::open(fh, "cube.cdm", FILE_READ );
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
      ferror = File::open(fh, "cube.cdm", FILE_READ_WRITE );
      assert( ferror == FILE_SUCCESS );

      // write texture data that we have to this point - now my file pointer will be where all vertex data will go
      ferror = File::write( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
      assert( ferror == FILE_SUCCESS );
    
   // Now that we created vertex/index buffers and know their info, update the header: numVerts, VertBufferOffset 
       // ****to be written to file header in Take 2****
       this->graphicsFileHdr.numVerts = 36;
       ferror = File::tell( fh, this->graphicsFileHdr.vertBufferOffset );
       assert( ferror == FILE_SUCCESS );
       
       // write the vertex data to the file contents (NOT THE HEADER)
       ferror = File::write( fh, cVerts, 36 * sizeof(MyVertex_stride) );
       assert( ferror == FILE_SUCCESS );

   // update the header: numTriList, triListBufferOffset
      // ****to be written to file header in Take 2****
      this->graphicsFileHdr.numTriList = 12;
      ferror = File::tell( fh, this->graphicsFileHdr.triListBufferOffset );
      assert( ferror == FILE_SUCCESS );

      // write the triListBuffer data to the file contents (NOT THE HEADER)
      ferror = File::write( fh, tlist, 12 * sizeof(MyTriList) );
      assert( ferror == FILE_SUCCESS );

      // update the header: cubeRadius - to be written to file header in Take2
      this->graphicsFileHdr.cubeRadius = 1.25f;

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

   ferror = File::open(fh, "cube.cdm", FILE_READ );
   assert( ferror == FILE_SUCCESS );

   // read the data into this object, and get the data we need from it to create vertex/index buffers
   // gObjFileHdr  gFileHdr;

   // Read the header
   ferror = File::read( fh, &this->graphicsFileHdr, sizeof(gObjFileHdr) );
   assert( ferror == FILE_SUCCESS );

   // create the vertex buffer
   MyVertex_stride *cVerts = (MyVertex_stride *)malloc( this->graphicsFileHdr.numVerts * sizeof(MyVertex_stride) );

   // load the verts
      // seek to the location using the offset in the file header
      ferror = File::seek( fh, FILE_SEEK_BEGIN, this->graphicsFileHdr.vertBufferOffset );
      assert( ferror == FILE_SUCCESS );

      // read it into cVerts, which we just allocated
      ferror = File::read( fh, cVerts, this->graphicsFileHdr.numVerts  * sizeof(MyVertex_stride) );
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
        glBufferData(GL_ARRAY_BUFFER, sizeof(MyVertex_stride) * 36, cVerts, GL_STATIC_DRAW);
        
    // VERTEX data: ---------------------------------------------------------
        // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_VERTEX = 0 in ShaderManager.h
        glEnableVertexAttribArray(0);

        // Specify that our coordinate data is going into attribute index 0, and contains 3 floats per vertex 
        // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
        // first calculate offset into first vert coofdinate as & of x - beginning & of buffer
        void *offsetVert = (void *) ( (unsigned int)&cVerts[0].x - (unsigned int)&cVerts[0].x );
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(MyVertex_stride), offsetVert);

    // Texture data: ---------------------------------------------------------
        // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_TEXTURE0 = 3 in ShaderManager.h
        glEnableVertexAttribArray(3);

        // Specify that our coordinate data is going into attribute index 3, and contains 2 floats per vertex 
        // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
        // offset into first Tex coordinate = & of s - beggining & of buffer
        void *offsetTex = (void *) ( (unsigned int)&cVerts[0].s - (unsigned int)&cVerts[0].x );
        glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(MyVertex_stride), offsetTex);

    // Normal data: ---------------------------------------------------------
        // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_NORMAL = 2 in ShaderManager.h
        glEnableVertexAttribArray(2);

        // Specify that our coordinate data is going into attribute index 3, and contains 2 floats per vertex 
        // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
        // offset into first Norm coordinate = & of nx - beggining & of buffer
        void *offsetNorm = (void *) ( (unsigned int)&cVerts[0].nx - (unsigned int)&cVerts[0].x );
        glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(MyVertex_stride), offsetNorm);


     // Load the index data: ---------------------------------------------------------

         // Bind our 2nd VBO as being the active buffer and storing index )
         // notice the type - GL_ELEMENT_ARRAY_BUFFER - it's a lookup into GL_ARRAY_BUFFER
		 glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vbo[1]);

	     // Copy the index data to our buffer 
         // glBufferData(type, size in bytes, data, usage) 
		 glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(MyTriList)*12, tlist, GL_STATIC_DRAW);

};

