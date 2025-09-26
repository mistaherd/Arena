#pragma once
#include <stdint.h>
#include <stddef.h>

typedef struct {
        uint8_t *base;// starting address of arena
        size_t size;
        size_t used;
}Arena;
Arena *arena_init(size_t size);
void *arena_alloc(Arena *arena,size_t size);
void *arena_reset(Arena *arena);
void *free_arena(Arena *arena);
