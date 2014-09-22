#include "OpenGLWrapper.h"
#include "PieWedge.h"
#include "PieWedgeObject.h"
#include "Camera.h"
#include "ShaderMap.h"

extern Camera* pCamera;
extern GLShaderManager shaderManager;

PieWedgeObject::PieWedgeObject(const char * const _Name, PieWedge* const model)
{
    this->setName( _Name );
    this->model = model;

	this->angle_x = (float)(rand()%100)/100.0f * MATH_PI;
	this->angle_y = (float)(rand()%100)/100.0f * MATH_PI;
	this->angle_z = (float)(rand()%100)/100.0f * MATH_PI;
    
    this->scale_x = (float)(rand()%100)/400.0f * MATH_PI;
	this->scale_y = (float)(rand()%100)/400.0f * MATH_PI;
    this->scale_z = (float)(rand()%100)/400.0f * MATH_PI;

    this->pos[x] = (float)(rand()%100)/150.0f * MATH_PI;
	this->pos[y] = (float)(rand()%100)/150.0f * MATH_PI;
    this->pos[z] = (float)(rand()%100)/150.0f * MATH_PI;

    this->lightColor.set( 1.0f, 1.0f, 1.0f, 1.0f);
    this->lightPos.set(1.0f, 1.0f, 0.0f);

    this->World.set(IDENTITY);
    this->ModelView.set(IDENTITY);
};

void PieWedgeObject::transform(void)
{
     // update the angles
    this->angle_x += 0.05f;

    // create temp matrices
    Matrix Scale(SCALE, scale_x, this->scale_y, this->scale_z);
    Matrix RotX(ROT_X, this->angle_x);
    Matrix RotY(ROT_Y, this->angle_y);
    Matrix RotZ(ROT_Z, this->angle_z);
    Matrix Trans(TRANS, this->pos[x], this->pos[y], this->pos[z]);

    // create local to world matrix (ie Model)
    this->World = Scale * RotX * RotY * RotZ * Trans;
    // this->World = Scale * Trans;

    // camera or object can move over, combined is one relationship ---> ModelView (World * View)
    // some pipelines have the project concatenated, others don't
    // best to keep them separated, you can always join them with a multiply
    this->ModelView = this->World * pCamera->getViewMatrix();

    // *************Culling against Frustum**********************
    Vect center = this->model->getModelCenter();
    center = Vect(0,0,0); // an object's local center will always be its origin?
    frustumCalc->setRadius(1.0f);
    // update the center and radius of object's bounding sphere with the same World matrix
    this->frustumCalc->updateSphere(this->World, center);
    // test by picking two corners of camera frustum, test against normals, return true/false (in/out)
    this->inView = this->frustumCalc->insideFrustum(center, pCamera);
};

void PieWedgeObject::setRenderState(TextureMap tex, ShaderMap shade)
{
    glBindTexture(GL_TEXTURE_2D, this->model->textureID[tex]); 
    this->useShader(shade);
};

void PieWedgeObject::draw(void)
{
    glBindVertexArray( this->model->getVAO() );
   //  render primitives from array data - count = number of lookups, type must match IBO to avoid crash
   // (GLenum  mode,  GLsizei  count,  GLenum  type,  const GLvoid *  indices);
   glDrawElements(GL_TRIANGLES, 8*3, GL_UNSIGNED_SHORT, 0);   //The starting point of the IBO
    
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