#pragma once
#include <stdint.h>
#include <stddef.h>
typedef struct {
    uint8_t *base;
    size_t size;
    size_t used;
}Buffer;

void buffer_init(Buffer *arena,void *buffer,size_t size);

void *buffer_alloc(Buffer *arena,size_t size);

void buffer_reset(Buffer *arena);
