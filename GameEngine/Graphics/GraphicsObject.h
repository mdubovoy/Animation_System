#ifndef GRAPHICSOBJECT_H
#define GRAPHICSOBJECT_H

#include "MathEngine.h"
#include "PCSNode.h"
#include "TextureMap.h"
#include "Camera.h"
#include "FrustumCalc.h"
#include "GeometryModel.h"
#include "ShaderMap.h"
#include "FrameBucket.h"


class GraphicsObject : public PCSNode
{
public:

    GraphicsObject()
    {
        World.set(IDENTITY);
        ModelView.set(IDENTITY);
        frustumCalc = new FrustumCalc();
        shade = TEXTURE_POINT_LIGHT_DIFF; // set default shader
    }

    Matrix getWorld(void) const;
    Matrix getBoneOrientation( void ) const;
    void setBoneOrientation( const Matrix & );

    // pure virtual, must be defined in derived class
    virtual void transform(void) = 0;
    virtual void draw(void) = 0;
    virtual void setRenderState(TextureMap tex, ShaderMap shade) = 0;

    // FOR ANIMATION ONLY - new type of Graphics Object? 
    void transform(FrameBucket* pResult);
   
    // accessors
    TextureMap getTexture(void) {return this->tex;}
    ShaderMap getShader(void) {return this->shade;}
    void setTexture(TextureMap tex) {this->tex = tex;}
    void setShader(ShaderMap shade) {this->shade = shade;}

    void setLightColor( const Vect & v) {this->lightColor = v;}
    void setLightPos( const Vect & v) {this->lightPos = v;}
    void setPos( const Vect & v) {this->pos = v;}; 

    void getPos(Vect &outPos) const {outPos = this->pos;}

    bool inViewOfCamera() const {return this->inView;}



protected:
    void useShader(ShaderMap shade);

    GeometryModel* model;

    // global pose - what is the difference with BoneOrientation? 
    Matrix World;
    // calculated as this->BoneOrientation * pCamera->getViewMatrix();
    Matrix ModelView;
    // uses interpolated boneResult for the appropriate bone from the animation frame data
    Matrix Local;
    // used to set bone pose in updateSkeleton() - called after ProcessAnimation() inside animateObjects()
    // in WORLD coordinates - see PyramidObject::transform()
    Matrix BoneOrientation;

    TextureMap tex;
    ShaderMap shade;

    FrustumCalc* frustumCalc;
    bool inView;

    Vect pos;
    Vect lightColor;
    Vect lightPos;

    float angle_x;
    float angle_y;
    float angle_z;

    float scale_x;
    float scale_y;
    float scale_z;
};

#endif