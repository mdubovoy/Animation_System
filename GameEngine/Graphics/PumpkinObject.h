#ifndef PUMPKINOBJECT_H
#define PUMPKINOBJECT_H

#include "GraphicsObject.h"
#include "TextureMap.h"
#include "GeometryModel.h"

class PumpkinObject : public GraphicsObject
{
public:
    PumpkinObject(const char * const _Name, GeometryModel* const model);

    // abstract methods in base class, must define
    void transform(void);
    void draw(void);
    void setRenderState(TextureMap tex, ShaderMap shade); // identifies texture and shader to use - unique to SpaceFrigateObject
};

#endif