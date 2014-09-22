#include "OpenGLWrapper.h"
#include "MathEngine.h"
#include "Camera.h"
#include "File.h"
#include "GeometryModel.h"
#include "TextureManager.h"
#include "TextureMap.h"

#include "File.h"
#include "eat.h"
#include "ChunkHeader.h"

// Table of Contents entry - matches Converter side, along with vsn and TriList
struct ChunkID
{
    ChunkType type;
    char name[CHUNK_NAME_SIZE];
};

void GeometryModel::loadModel(const char* spuFileName, const char* indexName)
{
    // ------ declare file handle -----------------
    FileHandle fhTex;
    FileError ferror;

    int indexChunkSize;
    unsigned char* indexBuff;

    // eat(spufilename, chunkType, chunkName, returned buffer, returned size) 
    // Find the index chunk in the spu file - it is set as ANIM_TYPE in Converter
    bool indexFound = eat(spuFileName, ANIM_TYPE, indexName, indexBuff, indexChunkSize);
    if(indexFound)
    {
        // printf("HIP HIP HOORAY!!!\n");
        
        // calculate number of index entries
        int numEntries = indexChunkSize / sizeof(ChunkID);
        ChunkID *tableOfContents = (ChunkID*) malloc( numEntries * sizeof(ChunkID) );
        
        // copy the index from indexBuff to tableOfContents
        memcpy(tableOfContents, indexBuff, indexChunkSize); 
        free(indexBuff); // memory allocated for buffer inside eat function - only temporary
        indexBuff = 0;

        // these variables will be filled with each chunk's contents and their size
        int chunkSize;
        unsigned char* chunkBuff;
        

        for(int i = 0; i < numEntries; i++)
        {     
            /* Debug print -  note Chunk Type enum begins with 0xa0000000 
            ChunkID vTmp;
            vTmp = tableOfContents[i];
            printf("Table of Contents[%d]: Type: %x Name: %s \n",
                                       i, vTmp.type, vTmp.name); */

            bool chunkFound = eat(spuFileName, tableOfContents[i].type, tableOfContents[i].name, chunkBuff, chunkSize);
            if (chunkFound)
            {
                switch(tableOfContents[i].type)
                {
                // Model Info
                case UV_TYPE:
                    memcpy(&this->modelInfo, chunkBuff, chunkSize);
                    free(chunkBuff);
                    chunkBuff = 0;
                    break;
                // texData/texImage - TODO: have a different type for tga and for tex_data
                case TEXTURE_TYPE:
                    if( strstr(tableOfContents[i].name, "tex_data") != 0 )
                    {
                        // texData only has the texture file's name - objectnamee_new.tga - seton the converter side
                        memcpy(&texData, chunkBuff, chunkSize);
                        free(chunkBuff);
                        chunkBuff = 0;
                        // other settings - is there a way to set these in the converter? Note "GL_"
                        texData.target = GL_TEXTURE_2D;
                        texData.minFilter = GL_LINEAR;
                        texData.magFilter = GL_LINEAR;
                        texData.wrapMode = GL_CLAMP_TO_EDGE;
                    }

                    else if( strstr(tableOfContents[i].name, "tga") != 0 )
                    {
                        // texImage - open the file who's name is set in texData
                        ferror = File::open(fhTex, texData.textName, FILE_WRITE);
                        assert( ferror == FILE_SUCCESS );
    
                        ferror = File::write(fhTex, chunkBuff, chunkSize);
                        assert( ferror == FILE_SUCCESS );
    
                        ferror = File::close(fhTex);
                        assert(ferror == FILE_SUCCESS);

                        free(chunkBuff);
                        chunkBuff = 0;
                    }

                    else
                    {
                        printf("Tex chunk not recognized!!!\n");
                    }
                                     
                    break;
                case VERTS_TYPE:
                    this->vertices = (VBO_Vertex_vsn*) malloc( this->modelInfo.numVerts * sizeof(VBO_Vertex_vsn) );
                    memcpy(this->vertices, chunkBuff, chunkSize); 
                    free(chunkBuff);
                    chunkBuff = 0;
                    /* Debug print 
                    VBO_Vertex_vsn vTmpVert;
                    for(int i = 0; i < graphicsFileHdr.numVerts; i++)
                    {
                        
                        vTmpVert = pVerts[i];
                        printf("VBO_vert[%d]: v: %f %f %f s: %f %f n: %f %f %f \n",
                                i, vTmpVert.x, vTmpVert.y, vTmpVert.z, vTmpVert.s, vTmpVert.t, vTmpVert.nx, vTmpVert.ny, vTmpVert.nz);
                    } */
                    break;
                case NORMS_TYPE:
                    this->triList = (VBO_Trilist*) malloc( this->modelInfo.numTriList * sizeof(VBO_Trilist) );
                    memcpy(this->triList, chunkBuff, chunkSize);
                    free(chunkBuff); // memory allocated for buffer inside eat function - only temporary
                    chunkBuff = 0;
    
                    /* Debug Print
                    VBO_Trilist tmpVBOTri;
                    for(int i = 0; i < this->graphicsFileHdr.numTriList; i++)
                    {
                        tmpVBOTri = tlist[i];
                        // printf("VBO_tri[%d]: %d %d %d \n", i, tmpVBOTri.v0, tmpVBOTri.v1, tmpVBOTri.v2);
                    } */
                    break;                    
                }

            }
            else
            {
                printf("[%s] chunk NOT FOUND\n", tableOfContents[i].name);
            }
        } // end loop of TableofContents

        // install the textures at the end - once we know we've collected all textData from model_info AND tex chunks
        // this->textureID[0] = TextureManager::addTexture(this->graphicsFileHdr.textData[0]);
        this->textureID[0] = TextureManager::addTexture(texData);
    }

    else
    {
        printf("Index NOT FOUND\n");
    }

    this->createVAO();
}

void GeometryModel::createVAO()
{
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

    // Copy the vertex data to our buffer, which is copied into the graphics hardware by OpenGL!!!  
    // glBufferData(type, size in bytes, data, usage) - copy the contents of data
    glBufferData(GL_ARRAY_BUFFER, sizeof(VBO_Vertex_vsn) * this->modelInfo.numVerts, this->vertices, GL_STATIC_DRAW);

    // VERTEX data: ---------------------------------------------------------
    // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_VERTEX = 0 in ShaderManager.h
    glEnableVertexAttribArray(0);

    // Specify that our coordinate data is going into attribute index 0, and contains 3 floats per vertex 
    // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
    // first calculate offset into first vert coofdinate as & of x - beginning & of buffer
    void *offsetVert = (void *) ( (unsigned int)&this->vertices[0].x - (unsigned int)&this->vertices[0].x );
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(VBO_Vertex_vsn), offsetVert);

    // Texture data: ---------------------------------------------------------
    // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_TEXTURE0 = 3 in ShaderManager.h
    glEnableVertexAttribArray(3);

    // Specify that our coordinate data is going into attribute index 3, and contains 2 floats per vertex 
    // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
    // offset into first Tex coordinate = & of s - beginning & of buffer
    void *offsetTex = (void *) ( (unsigned int)&this->vertices[0].s - (unsigned int)&this->vertices[0].x );
    glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(VBO_Vertex_vsn), offsetTex);

    // Normal data: ---------------------------------------------------------
    // Specifies the index of the generic vertex attribute to be enabled -  GLT_ATTRIBUTE_NORMAL = 2 in ShaderManager.h
    glEnableVertexAttribArray(2);

    // Specify that our coordinate data is going into attribute index 2, and contains 3 floats per vertex 
    // ( GLuint index,  GLint size,  GLenum type,  GLboolean normalized,  GLsizei stride,  const GLvoid * pointer);
    // offset into first Norm coordinate = & of nx - beginning & of buffer
    void *offsetNorm = (void *) ( (unsigned int)&this->vertices[0].nx - (unsigned int)&this->vertices[0].x );
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(VBO_Vertex_vsn), offsetNorm);


    // Load the index data: ---------------------------------------------------------

    // Bind our 2nd VBO as being the active buffer and storing index )
    // notice the type - GL_ELEMENT_ARRAY_BUFFER - it's a lookup into GL_ARRAY_BUFFER
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vbo[1]);

    // Copy the index data to our buffer 
    // glBufferData(type, size in bytes, data, usage) 
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(VBO_Trilist)*this->modelInfo.numTriList, this->triList, GL_STATIC_DRAW);

}