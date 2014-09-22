#include "GraphicsObject.h"

extern Camera* pCamera;
extern GLShaderManager shaderManager;

Matrix GraphicsObject::getWorld(  ) const
{	
	return Matrix(this->World);
}

Matrix GraphicsObject::getBoneOrientation( void ) const
{
	return Matrix(this->BoneOrientation);
}

void GraphicsObject::setBoneOrientation( const Matrix &tmp )
{

	this->BoneOrientation = tmp;
}

void GraphicsObject::useShader(ShaderMap shade)
{
    // combined matrix modelViewProjection used in some shaders
    Matrix modelViewProjection = this->ModelView * pCamera->getProjMatrix() ;

    switch (shade)
    {
    case FLAT:
        shaderManager.UseStockShader(GLT_SHADER_FLAT, 
                             &modelViewProjection, 
                             &this->lightColor);
        break;

    case POINT_LIGHT_DIFF:
        shaderManager.UseStockShader(GLT_SHADER_POINT_LIGHT_DIFF, 
                                 &this->ModelView, 
                                 &pCamera->getProjMatrix(), 
                                 &this->lightPos, 
                                 &this->lightColor);
        break;

    case TEXTURE_REPLACE:
    	shaderManager.UseStockShader(GLT_SHADER_TEXTURE_REPLACE, 
                                 &modelViewProjection, 
                                 0);
        break;

    // make this one the default too
    case TEXTURE_POINT_LIGHT_DIFF:
    default:
        // Viewport is set ahead of time in ChangeSize(), never have to worry about it after
        shaderManager.UseStockShader(GLT_SHADER_TEXTURE_POINT_LIGHT_DIFF, 
                                     &this->ModelView, 
                                     &pCamera->getProjMatrix(), 
                                     &this->lightPos, 
                                     &this->lightColor, 
                                     0);
        break;
    }
}

void transform(FrameBucket* pResult)
{
    pResult;
    // do nothing - implementation optional
    // currently only implemented in PyramidObject, which is used for skeleton
}