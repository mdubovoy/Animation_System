#include "NullObject.h"

#define UNUSED_VAR(tex) tex;

NullObject::NullObject(const char * const _Name)
{
   // initialize the name
   this->setName( _Name );
}
	
// must define, base class has abstract methods
void NullObject::transform( void )
{
}

void NullObject::draw( void )
{
}

void NullObject::setRenderState(TextureMap tex, ShaderMap shade)
{
    UNUSED_VAR(tex);
    UNUSED_VAR(shade);
}
