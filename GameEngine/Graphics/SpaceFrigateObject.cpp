#include "OpenGLWrapper.h"
#include "SpaceFrigateObject.h"
#include "Camera.h"
#include "ShaderMap.h"

extern Camera* pCamera;
extern GLShaderManager shaderManager;

SpaceFrigateObject::SpaceFrigateObject(const char * const _Name, GeometryModel* const model)
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

void SpaceFrigateObject::transform(void)
{
    // create temp matrices
    Matrix Scale(SCALE, 0.5f, 0.5f, 0.5f);
    Matrix Trans(TRANS, this->pos[x], this->pos[y], this->pos[z]);

    // create local to world matrix (ie Model)
    this->World = Scale * Trans;

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

void SpaceFrigateObject::setRenderState(TextureMap tex, ShaderMap shade)
{
    // used again (also in Pyramid::loadTexture) to identify the texture to be used - must be called before submitting geometry batch
    // not needed with only one texture that was already loaded - but that will rarely be the case
    glBindTexture(GL_TEXTURE_2D, this->model->textureID[tex]); 
    useShader(shade);
};

// now that we have VAO, fire and forget
void SpaceFrigateObject::draw(void)
{
    glBindVertexArray(this->model->getVAO());
   //  render primitives from array data - count = number of lookups, type must match IBO to avoid crash
   // (GLenum  mode,  GLsizei  count,  GLenum  type,  const GLvoid *  indices);
    glDrawElements(GL_TRIANGLES, this->model->getModelInfo().numTriList *3, GL_UNSIGNED_INT, 0);   //The starting point of the IBO
};