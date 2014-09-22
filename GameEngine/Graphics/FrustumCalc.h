#ifndef FRUSTUM_CALC_H
#define FRUSTUM_CALC_H

#include"MathEngine.h"
#include "Camera.h"
#include "Cube.h"

class FrustumCalc
{

public:
    // finds global instance of this class, returns it
    // static FrustumCalc* getInstance(void);
    FrustumCalc();
    
    // private functions for culling vs. frustum calculation - no one needs to know about these, called within transform
    void updateSphere(const Matrix& World, Vect& center);
    // sets insideFrustum boolean on an object
    bool insideFrustum(const Vect& center, const Camera* const camera); 
    
    // accesors
    float getRadius(void) {return this->boundingRadius;}
    Matrix& getModelView(void) {return this->ModelView;}
    void  setRadius(const float radius) {this->boundingRadius = radius;}
    
    Vect lightColor; // always set to red - only rendered for debugging. leaving public for now

    // for COLLISION DEMO only - uses sphere's center instead of object's, and model's vertices/normals instead of frustum's
    bool FrustumCalc::insideCollisionDemoCube(const Cube* const model);

private:

    // static FrustumCalc* privGetInstance();  
    float maxBoundingObjectDistance(const float distX, const float distY, const float distZ) const;
    float boundingRadius;

    // for Collision Demo only
    Vect center;

    // Only for debugging for now  - used inside updateSphere() for collision detection demo   
    Matrix World;
    Matrix ModelView;
};

#endif 