#ifndef CUBE_OBJECT_H
#define CUBE_OBJECT_H

#include "GraphicsObject.h"
#include "TextureMap.h"
#include "GeometryModel.h"
#include "Cube.h"
#include "ShaderMap.h"

class CubeObject : public GraphicsObject
{
public:
    CubeObject(const char * const _Name, Cube* const model);

    // abstract methods in base class, must define
    void transform(void);
    void draw(void);
    void setRenderState(TextureMap tex, ShaderMap shade); // identifies texture and shader to use - unique to PyramidObject

    // for COLLISION DEMO only
    GeometryModel* getCubeModel(void) {return this->model;}
    void CalcCubeCollisionNormals(Cube* const model);

};

#endif