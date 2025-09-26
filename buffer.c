#include "buffer.h"


void buffer_init(Buffer *arena,void *buffer,size_t size){
    arena->base=(uint8_t *)buffer;
    arena->size=size;
    arena->used=0;
}
void *buffer_alloc(Buffer *arena,size_t size){
    if (arena ->used+size> arena->size)return NULL;
    void *ptr=arena->base +arena->used;
    arena->used+=size;
    return ptr;
}
void buffer_reset(Buffer *arena){
    arena->used=0;
}
