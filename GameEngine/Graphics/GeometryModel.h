#ifndef GEOMETRYMODEL_H
#define GEOMETRYMODEL_H

#include "OpenGLWrapper.h"
#include "MathEngine.h"
#include "GraphicsObjectFileHdr.h"

class GeometryModel
{
public:

    struct ModelInfo
        {
           // object name
           char         objName[ OBJECT_NAME_SIZE ];  
           // VBO sizes
           int          numVerts;
           int          numTriList;
        };

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
    {   // short is ~64K, we only have a list of 18 vertices, OK as long as it's < 64K
        unsigned int v0;
        unsigned int v1;
        unsigned int v2;
    };

    // only overridden by Cube for Frustum Calculation - default implementation in this class does nothing
    // TODO:research - should Cube have a different type of model?
    virtual float getModelRadius(void) {return 0.0f;}

    void loadModel(const char * spuFileName, const char* indexName);
    void createVAO();

    Vect& getModelCenter(void) {return this->center;}
    gObjFileHdr getGraphicsFileHdr(void) {return this->graphicsFileHdr;}
    ModelInfo getModelInfo(void) {return this->modelInfo;}
    GLuint getVAO(void) const {return this->vao;}

    GLuint              textureID[2]; // should this go in Pyramid.h/Cube.h?
    
protected:

    // used by old models - remove? or create another type of geometry model
    gObjFileHdr         graphicsFileHdr;
    Vect                center;
    
    GLuint              vao;

private:
    ModelInfo          modelInfo;
    VBO_Trilist* triList;
    VBO_Vertex_vsn* vertices;

    TextureData texData;
};

#endif