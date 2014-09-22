#ifndef EAT_H
#define EAT_H

#include "ChunkHeader.h"

// specify file to extract chunk name and type from, outputs chunkBuff with chunkSize
bool eat( const char * const inName, ChunkType type, const char * const chunkName, unsigned char *&chunkBuff, int &chunkSize);

#endif