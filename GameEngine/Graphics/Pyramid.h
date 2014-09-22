#ifndef PYRAMID_H
#define PYRAMID_H

#include "GeometryModel.h"

class Pyramid : public GeometryModel
{
public:

    void loadTexture(void);
    void createVAO(void);
    float getModelRadius(void) {return 0.0f;} // does nothing since pyramid does not have radius

};

#endif 