#include "OpenGLWrapper.h"
#include "Cube.h"
#include "CubeObject.h"
#include "Camera.h"
#include "ShaderMap.h"

extern Camera* pCamera;
extern GLShaderManager shaderManager;

#define COLLISION_DEMO 0 // 1 - keys set up to move cube for collision demo, 0 - keys set up to move camera

CubeObject::CubeObject(const char * const _Name, Cube* model)
{
    this->setName( _Name );
    this->model = model;

	this->angle_x = (float)(rand()%100)/100.0f * MATH_PI;
	this->angle_y = (float)(rand()%100)/100.0f * MATH_PI;
    
    this->scale_x = (float)(rand()%100)/100.0f * MATH_PI;
	this->scale_y = (float)(rand()%100)/100.0f * MATH_PI;
    this->scale_z = (float)(rand()%100)/100.0f * MATH_PI;

#if COLLISION_DEMO
    this->pos[x] = 0.0f;
    this->pos[y] = 0.0f;
    this->pos[z] = 0.0f;
#else
    this->pos[x] = (float)(rand()%100)/150.0f * MATH_PI;
	this->pos[y] = (float)(rand()%100)/150.0f * MATH_PI;
    this->pos[z] = (float)(rand()%100)/150.0f * MATH_PI;
#endif

    this->lightColor.set( 1.0f, 1.0f, 1.0f, 1.0f);
    this->lightPos.set(1.0f, 1.0f, 0.0f);

    this->World.set(IDENTITY);
    this->ModelView.set(IDENTITY);  
};

void CubeObject::transform(void)
{
    const float BOUNDING_RADIUS_SCALE = 1.25f; // this scale seems to work for boundingObject

    static float scaleFactor = 0.005f;
    static float scale_x = 1.0f;

    if (scale_x > 2.5f || scale_x < 0.1f)
    {
       scaleFactor *= -1.0f;
    }
    
    scale_x += scaleFactor;

    // create temp matrices
#if COLLISION_DEMO
    Matrix Scale(SCALE, 1.0f, 1.0f, 1.0f);
    Matrix RotX(ROT_X, 0.0f);
    Matrix RotY(ROT_Y, 0.0f);
    Matrix RotZ(ROT_Z, 0.0f);
    Matrix Trans(TRANS, this->pos[x], this->pos[y], this->pos[z]);
    
#else
    Matrix Scale(SCALE, scale_x, this->scale_y, this->scale_z);
    Matrix RotX(ROT_X, this->angle_x);
    Matrix RotY(ROT_Y, this->angle_y);
    Matrix RotZ(ROT_Z, this->angle_z);
    Matrix Trans(TRANS, this->pos[x], this->pos[y], this->pos[z]);

#endif

    // create local to world matrix (ie Model)
       this->World = Scale * RotX * RotY * RotZ * Trans;
    // this->World = Scale * Trans;    
    this->ModelView = this->World * pCamera->getViewMatrix();

    // *************Culling against Frustum**********************
    Vect center = this->model->getModelCenter();
    center = Vect(0,0,0); // an object's local center will always be its origin
    frustumCalc->setRadius(this->model->getModelRadius() * BOUNDING_RADIUS_SCALE); // TODO get constant from Cube geometry
    // update the center and radius of object's bounding sphere with the same World matrix
    this->frustumCalc->updateSphere(this->World, center);
    
#if COLLISION_DEMO
    this->CalcCubeCollisionNormals((Cube*)this->model);
    this->inView = this->frustumCalc->insideCollisionDemoCube((Cube*)this->model);
#else
    // test by picking two corners of camera frustum, test against normals, return true/false (in/out)
    this->inView = this->frustumCalc->insideFrustum(center, pCamera);
#endif

};

void CubeObject::setRenderState(TextureMap tex, ShaderMap shade)
{
    glBindTexture(GL_TEXTURE_2D, this->model->textureID[tex]);
    this->useShader(shade);
};


void CubeObject::draw(void)
{
    glBindVertexArray(this->model->getVAO()); 
   //  render primitives from array data - count = number of lookups, type must match IBO to avoid crash
   // (GLenum  mode,  GLsizei  count,  GLenum  type,  const GLvoid *  indices);
   glDrawElements(GL_TRIANGLES, 12*3, GL_UNSIGNED_SHORT, 0);   //The starting point of the IBO
    
    // params: primitiveType, offset, number of Verts
    // glDrawArrays(GL_TRIANGLES, 0, 18);

#if COLLISION_DEMO
    // used to render wireframe bounding sphere with its own light color, and optionally, its own ModelView Matrix
    shaderManager.UseStockShader(GLT_SHADER_TEXTURE_POINT_LIGHT_DIFF, 
                                 &this->frustumCalc->getModelView(), // &this->ModelView, 
                                 &pCamera->getProjMatrix(), 
                                 &this->lightPos, 
                                 &this->frustumCalc->lightColor, 
                                 0);

    glutWireSphere(frustumCalc->getRadius(), 6, 6);
#else
#endif
};

// For Collision Detection Demo only
void CubeObject::CalcCubeCollisionNormals(Cube* const model )
{

	// Normals of the frustum around nearTopLeft
	Vect A = model->nearBottomLeft - model->nearTopLeft;
	Vect B = model->nearTopRight - model->nearTopLeft;
	Vect C = model->farTopLeft - model->nearTopLeft;
	
	model->frontNorm = A.cross(B);
	model->frontNorm.norm();

	model->leftNorm = C.cross(A);
	model->leftNorm.norm();
	
	model->topNorm = B.cross(C);
	model->topNorm.norm();

	// Normals of the frustum around farBottomRight
	A = model->farBottomLeft - model->farBottomRight;
	B = model->farTopRight - model->farBottomRight;
	C = model->nearBottomRight - model->farBottomRight;
	
	model->backNorm = A.cross(B);
	model->backNorm.norm();
	
	model->rightNorm = B.cross(C);
	model->rightNorm.norm();

	model->bottomNorm = C.cross(A);
	model->bottomNorm.norm();
};