#ifndef WATCH_TOWER_OBJECT_H
#define WATCH_TOWER_OBJECT_H

#include "GraphicsObject.h"
#include "TextureMap.h"
#include "GeometryModel.h"

class WatchTowerObject : public GraphicsObject
{
public:
    WatchTowerObject(const char * const _Name, GeometryModel* const model);

    // abstract methods in base class, must define
    void transform(void);
    void draw(void);
    void setRenderState(TextureMap tex, ShaderMap shade); // identifies texture and shader to use - unique to SpaceFrigateObject
};

#endif