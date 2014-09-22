#ifndef PIEWEDGE_OBJECT_H
#define PIEWEDGE_OBJECT_H

#include "GraphicsObject.h"
#include "TextureMap.h"
#include "GeometryModel.h"

class PieWedgeObject : public GraphicsObject
{
public:
    PieWedgeObject(const char * const _Name, PieWedge* const model);

    // abstract methods in base class, must define
    void transform(void);
    void draw(void);
    void setRenderState(TextureMap tex, ShaderMap shade); // identifies texture and shader to use - unique to PyramidObject
};

#endif