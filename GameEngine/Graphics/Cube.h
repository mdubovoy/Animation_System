#ifndef CUBE_H
#define CUBE_H

#include "MathEngine.h"
#include "GeometryModel.h"

class Cube : public GeometryModel
{
public:

    void loadTexture(void);
    void createVAO(void);
    float getModelRadius(void) {return this->radius;}

    float               radius;

    // ***********for Collision Detection demo only********
    Vect nearBottomLeft;
    Vect farTopRight;

	Vect	nearTopLeft;
	Vect	nearTopRight;
	Vect	nearBottomRight;	
	Vect	farTopLeft;
	Vect	farBottomLeft;
	Vect	farBottomRight;


    Vect frontNorm;
    Vect backNorm;
    Vect topNorm;
    Vect bottomNorm;
    Vect rightNorm;
    Vect leftNorm;
};

#endif 