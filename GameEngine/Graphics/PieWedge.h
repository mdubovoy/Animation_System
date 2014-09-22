#ifndef PIEWEDGE_H
#define PIEWEDGE_H

#include "GeometryModel.h"

class PieWedge : public GeometryModel
{
public:

    void loadTexture(void);
    void createVAO(void);
    float getModelRadius(void) {return 0.0f;} // does nothing since pieWedge does not have radius

};

#endif 