#include "OpenGLWrapper.h"
#include "Pyramid.h"
#include "PyramidObject.h"
#include "Camera.h"
#include "ShaderMap.h"
#include "Anim.h"
#include "FrameBucket.h"

extern Camera* pCamera;
extern GLShaderManager shaderManager;

PyramidObject::PyramidObject(const char * const _Name, Pyramid* const model)
{
    this->setName( _Name );
    this->tex = TEX1;
    this->model = model;

    this->angle_x = 0;
    this->angle_y = 0;
    this->angle_z = 0;

    /*
	this->angle_x = (float)(rand()%100)/100.0f * MATH_PI;
	this->angle_y = (float)(rand()%100)/100.0f * MATH_PI;
	this->angle_z = (float)(rand()%100)/100.0f * MATH_PI;
    
    this->scale_x = (float)(rand()%100)/400.0f * MATH_PI;
	this->scale_y = (float)(rand()%100)/400.0f * MATH_PI;
    this->scale_z = (float)(rand()%100)/400.0f * MATH_PI;

    this->pos[x] = (float)(rand()%100)/150.0f * MATH_PI;
	this->pos[y] = (float)(rand()%100)/150.0f * MATH_PI;
    this->pos[z] = (float)(rand()%100)/150.0f * MATH_PI;*/

    this->lightColor.set( 1.0f, 1.0f, 1.0f, 1.0f);
    this->lightPos.set(1.0f, 1.0f, 0.0f);

    this->World.set(IDENTITY);
    this->ModelView.set(IDENTITY);
    this->BoneOrientation.set(IDENTITY);
    this->Local.set(IDENTITY);
};



// only one framebucket going at a time now - hard-wired
// if multiple animations, might need a way to figure out which animation we're talking to 
void PyramidObject::transform(FrameBucket* pResult)
{
    // parent's world matrix, needed for hierarchy concatenation - see Global Poses pg. 503
    Matrix ParentWorld;

    // Does this node have a parent - set to identity if not, otherwise get it 
    if(this->getParent() == 0)
    {
        ParentWorld.set(IDENTITY);
    }
    else
    {
        PCSNode *p = this->getParent();

        // The following statements can be reduced due to polymorphism
        // 1) GraphicsObject *go = (GraphicsObject *) p;
        // 2) PyramidObject *parentObj = (PyramidObject *) go;
        PyramidObject *parentObj = (PyramidObject *) p;

        // now get the world matrix
        ParentWorld = parentObj->World;
    }

    // REMEMBER this is for Animation and hierachy, you need to handle models differently
	
    // Get the result bone array to create the S Q T matrices
	Bone *boneResult = pResult->pBone;


    // Create the local matrix
    // Remember to get the value from the animation system
	Matrix T = Matrix( TRANS, boneResult[indexBoneArray].T);
	Matrix S = Matrix( SCALE, boneResult[indexBoneArray].S);
	Quat   Q = boneResult[indexBoneArray].Q;

    // Calc local matrix
	Matrix M = S * Q * T;
	
    // Find the local
	this->Local = M;
    // BoneOrientation - should be in World coordinates to avoid inheriting Parent's scale

    // create World matrix (ie Model) - order should be Parent * Local BUT the extracted data is column-major
    this->World = this->Local * ParentWorld;

    // camera or object can move over, combined is one relationship ---> ModelView (World * View)
    // some pipelines have the project concatenated, others don't
    // best to keep them separated, you can always join them with a multiply
    
    this->ModelView = this->BoneOrientation * pCamera->getViewMatrix();

    // this->ModelView = this->BoneOrientation * this->World * pCamera->getViewMatrix(); WORLD * WORLD * Camera - BAD
    // this->ModelView = this->World * pCamera->getViewMatrix();
    
    
    // *************Culling against Frustum**********************
    Vect center = this->model->getModelCenter();
    center = Vect(0,0,0); // an object's local center will always be its origin?
    frustumCalc->setRadius(0.33f);
    // update the center and radius of object's bounding sphere with the same World matrix
    this->frustumCalc->updateSphere(this->World, center);
    // test by picking two corners of camera frustum, test against normals, return true/false (in/out)
    this->inView = this->frustumCalc->insideFrustum(center, pCamera); 
}

void PyramidObject::transform(void)
{
    // DOES NOTHING FOR PYRAMID OBJECT
    // needed because it is pure virtual in parent class
    // all other objects use this transform, not overloaded version
    // this calls for a new type of GraphicsObject???

    /* create temp matrices
    Matrix Scale(SCALE, scale_x, this->scale_y, this->scale_z);
    Matrix RotX(ROT_X, this->angle_x);
    Matrix RotY(ROT_Y, this->angle_y);
    Matrix RotZ(ROT_Z, this->angle_z);
    Matrix Trans(TRANS, this->pos[x], this->pos[y], this->pos[z]);

    // create local to world matrix (ie Model)
    this->World = Scale * RotX * RotY * RotZ * Trans;
    // this->LocalToWorld = Scale * Trans;

    // camera or object can move over, combined is one relationship ---> ModelView (LocalToWorld * View)
    // some pipelines have the project concatenated, others don't
    // best to keep them separated, you can always join them with a multiply
    this->ModelView = this->World * pCamera->getViewMatrix();

    // *************Culling against Frustum**********************
    Vect center = this->model->getModelCenter();
    center = Vect(0,0,0); // an object's local center will always be its origin?
    frustumCalc->setRadius(0.33f);
    // update the center and radius of object's bounding sphere with the same LocalToWorld matrix
    this->frustumCalc->updateSphere(this->World, center);
    // test by picking two corners of camera frustum, test against normals, return true/false (in/out)
    this->inView = this->frustumCalc->insideFrustum(center, pCamera); */
};

void PyramidObject::setRenderState(TextureMap tex, ShaderMap shade)
{
    // used again (also in Pyramid::loadTexture) to identify the texture to be used - must be called before submitting geometry batch
    // not needed with only one texture that was already loaded - but that will rarely be the case
    glBindTexture(GL_TEXTURE_2D, this->model->textureID[tex]); 
    useShader(shade);
};

// now that we have VAO, fire and forget
void PyramidObject::draw(void)
{
    glBindVertexArray(this->model->getVAO());
   //  render primitives from array data - count = number of lookups, type must match IBO to avoid crash
   // (GLenum  mode,  GLsizei  count,  GLenum  type,  const GLvoid *  indices);
   glDrawElements(GL_TRIANGLES, 6*3, GL_UNSIGNED_SHORT, 0);   //The starting point of the IBO
    
    // params: primitiveType, offset, number of Verts
    // glDrawArrays(GL_TRIANGLES, 0, 18);

    /* used to render wireframe bounding sphere with its own light color, and optionally, its own ModelView Matrix
    shaderManager.UseStockShader(GLT_SHADER_TEXTURE_POINT_LIGHT_DIFF, 
                                 &this->ModelView, //&this->frustumCalc->getModelView(),
                                 &pCamera->getProjMatrix(), 
                                 &this->lightPos, 
                                 &this->frustumCalc->lightColor, 
                                 0);

    glutWireSphere(frustumCalc->getRadius(), 6, 6); */
};

void PyramidObject::setIndex (int val)
{
    this->indexBoneArray = val;
}