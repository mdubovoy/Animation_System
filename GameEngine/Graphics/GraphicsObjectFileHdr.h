#ifndef GRAPHICSOBJECT_FILEHEADER_L_H
#define GRAPHICSOBJECT_FILEHEADER_L_H

#include <string.h>

#include "TextureData.h"

#define OBJECT_NAME_SIZE   32
#define TEXTURE_NAME_SIZE  32

struct gObjFileHdr
{
   // object name
   char         objName[ OBJECT_NAME_SIZE ];
   
   // vertex buffer
   int          numVerts;
   int          vertBufferOffset;
   
   // trilist index 
   int          numTriList;
   int          triListBufferOffset;

   // cube radius
   float cubeRadius;

   // texture info
   // char         textName[ TEXTURE_NAME_SIZE ];
   // unsigned int textMinFilter;
   // unsigned int textMagFilter;
   // unsigned int textWrapMode;
   TextureData textData[2];

   gObjFileHdr()
   {
      memset( this, 0x0, sizeof(gObjFileHdr) );
   }
};
#endif