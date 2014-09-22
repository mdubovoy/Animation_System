#include "FrustumCalc.h"
#include "Camera.h"

extern Camera* pCamera; // only used if we want this object to have its own ModelView for debug

#define COLLISION_DEMO 0 // 1 - keys set up to move cube for collision demo, 0 - keys set up to move camera

FrustumCalc::FrustumCalc()
{
    lightColor = Vect(1.0f, 0.0f, 0.0f, 0.0f);
    // boundingRadius set inside each GraphicObject's transform
}

void FrustumCalc::updateSphere(const Matrix& World, Vect& center)
{

    // get 3 more vectors on sphere besides the center
    // we want to know our center and radiuss
    Vect Px = center + this->boundingRadius * Vect(1, 0, 0);
    Vect Py = center + this->boundingRadius * Vect(0, 1, 0);
    Vect Pz = center + this->boundingRadius * Vect(0, 0, 1);

    // transform vectors by multiplying by localToVector, just like object itself
    Vect transPx = Px * World;
    Vect transPy = Py * World;
    Vect transPz = Pz * World;
    Vect transCenter = center * World; //Check

    // our new transformed center
    center = transCenter;

    // calculate max distance, using transformed vects, this will be new bounding radius for object
    float distX = (transPx - center).mag();
    float distY = (transPy - center).mag(); 
    float distZ = (transPz - center).mag();

    // figure out the max distance, set to DistX first
    float maxDist = this->maxBoundingObjectDistance(distX, distY, distZ);

    // our new bounding radius
    this->boundingRadius = maxDist;

#if COLLISION_DEMO
    //********Bounding Object's own ModelView for DEBUG only - used to draw sphere**********
    
    this->center = Vect(0.0f, 0.0f, 0.0f); // For Collision Demo only 
    static float angle_x = 0.0f;
    angle_x += 0.15f;

    Matrix Scale(SCALE, 1.0f, 1.0f, 1.0f);
    Matrix RotX(ROT_X, angle_x);
    Matrix Trans(TRANS, -2.0f, 0.0f, 0.0f);

    this->World = Scale * Trans; // not using ROT
    this->center *= this->World;
    this->ModelView = this->World * pCamera->getViewMatrix();
#else
#endif
}

float FrustumCalc::maxBoundingObjectDistance(const float distX, const float distY, const float distZ) const
    {        
        float maxDist = distX;
        // if Z is greater than Y, then only compare DistX with DistZ
        if(distZ >= distY)
        {
            if(distX < distZ)
                maxDist = distZ;
        }
        // otherwise only compare DistX with DistY
        else if(distY > distZ)
        {
            if(distX < distY)
                maxDist = distY;
        }

        return maxDist;
    }

bool FrustumCalc::insideFrustum(const Vect& center, const Camera* const camera)
{
    bool inside;
    // get frustum's corner points
    Vect camNearBottomLeft;
    Vect camFarTopRight;
    camera->getNearBottomLeft(camNearBottomLeft);
    camera->getFarTopRight(camFarTopRight);

    // get normal from each plane
    Vect camFrontNorm;
    Vect camBackNorm;
    Vect camRightNorm;
    Vect camLeftNorm;
    Vect camTopNorm;
    Vect camBottomNorm;

    camera->getFrontNorm(camFrontNorm);
    camera->getBackNorm(camBackNorm);
    camera->getRightNorm(camRightNorm);
    camera->getLeftNorm(camLeftNorm);
    camera->getTopNorm(camTopNorm);
    camera->getBottomNorm(camBottomNorm);

    float distLeft = (center - camNearBottomLeft).dot(camLeftNorm);
    float distFront = (center - camNearBottomLeft).dot(camFrontNorm);
    float distBottom = (center - camNearBottomLeft).dot(camBottomNorm);
    
    float distRight = (center - camFarTopRight).dot(camRightNorm);
    float distBack = (center - camFarTopRight).dot(camBackNorm);
    float distTop = (center -  camFarTopRight).dot(camTopNorm);
    // set to true only if culling tests pass
    if(distLeft   < this->boundingRadius && distFront  < this->boundingRadius && 
       distBottom < this->boundingRadius && distRight  < this->boundingRadius &&
       distBack   < this->boundingRadius && distTop    < this->boundingRadius)      
       {
           inside = true;
       }
    else
        inside = false;

    return inside;
}

bool FrustumCalc::insideCollisionDemoCube(const Cube* const model)
{
    bool inside;

    float distLeft = (this->center - model->nearBottomLeft).dot(model->leftNorm);
    float distFront = (this->center - model->nearBottomLeft).dot(model->frontNorm);
    float distBottom = (this->center - model->nearBottomLeft).dot(model->bottomNorm);
    
    float distRight = (this->center - model->farTopRight).dot(model->rightNorm);
    float distBack = (this->center - model->farTopRight).dot(model->backNorm);
    float distTop = (this->center -  model->farTopRight).dot(model->topNorm);
    // set to true only if culling tests pass
    if(distLeft   < this->boundingRadius && distFront  < this->boundingRadius && 
       distBottom < this->boundingRadius && distRight  < this->boundingRadius &&
       distBack   < this->boundingRadius && distTop    < this->boundingRadius)      
       {
           inside = true;
       }
    else
        inside = false;

    return inside;
}