#include <stdio.h>
#include <assert.h>
#include "eat.h"
#include "ChunkHeader.h"
#include "PackageHeader.h"
#include "File.h"

bool eat( const char * const inFileName, ChunkType type, const char * const chunkName, unsigned char *&chunkBuff, int &chunkSize)
{
   FileHandle fh;
   FileError ferror;
   bool found;

   // walk through .spu, checking type/name i Chunk header. if not it skip size
   ferror = File::open(fh, inFileName, FILE_READ);
   assert( ferror == FILE_SUCCESS);

   // read the package header and store the number of chunks
   PackageHeader packageHdr; 
   ferror = File::read(fh, &packageHdr, sizeof(PackageHeader));
   assert( ferror == FILE_SUCCESS);
   int numChunks = packageHdr.numChunks;
   // package must contain at least 1 chunk
   assert(numChunks > 0);

   // unsigned char* hdrBuff = new unsigned char[sizeof(ChunkHeader)];
   ChunkHeader chunkHdr; 
   ferror = File::read(fh, &chunkHdr, sizeof(ChunkHeader));
   assert( ferror == FILE_SUCCESS);
   numChunks--; // keep track of chunks that have already been searched

   while( (strcmp(chunkName, chunkHdr.chunkName) != 0 || type != chunkHdr.type) &&
          numChunks > 0) 
   {
       // skip the entire chunk and read in the next chunk header
       ferror = File::seek(fh, FILE_SEEK_CURRENT, chunkHdr.chunkSize);
       assert( ferror == FILE_SUCCESS);
       ferror = File::read(fh, &chunkHdr, sizeof(ChunkHeader));
       assert( ferror == FILE_SUCCESS);
       numChunks--;
   }

   // once found, update chunkSize param and read that many bytes to chunkBuff with contents of that .blo
   if( strcmp(chunkName, chunkHdr.chunkName) == 0 && type == chunkHdr.type )
   {
       chunkSize = chunkHdr.chunkSize;
       chunkBuff = (unsigned char*) malloc(chunkSize);
       // read contents of raw .bin file which are stored in this chunk's .blo
       ferror = File::read(fh, chunkBuff, chunkSize);
       assert( ferror == FILE_SUCCESS);
       found = true;
   }
   else // chunk was not found, and the there are more chunks to search
       found = false;

   ferror = File::close(fh);
   assert( ferror == FILE_SUCCESS);

   return found;
}