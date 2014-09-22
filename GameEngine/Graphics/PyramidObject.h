#ifndef PYRAMID_OBJECT_H
#define PYRAMID_OBJECT_H

#include "GraphicsObject.h"
#include "TextureMap.h"
#include "GeometryModel.h"
#include "Pyramid.h"
#include "FrameBucket.h"

class PyramidObject : public GraphicsObject
{
public:
    // does this need the name in the constructor if it is set after the object is created?
    // ***If this changes, must UPDATE CONVERTER CODE that generates copy/paste code (calls ctor)***
    PyramidObject(const char * const _Name, Pyramid* const model);

    // abstract methods in base class, must define
    void transform(void);
    void draw(void);
    void setRenderState(TextureMap tex, ShaderMap shade); // identifies texture and shader to use - unique to PyramidObject

    // *****Specific to using PyramidObjects for Skeleton and Animation*****
    void setIndex (int val);

    // Used for the animation ONLY
    int indexBoneArray;
    void transform(FrameBucket* pResult);
};

#endif