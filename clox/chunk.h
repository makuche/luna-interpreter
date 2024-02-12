#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

/* Each chunk has a one byte operation code.
This number controls the kind of instruction. */
typedef enum {
    OP_CONSTANT,
    OP_RETURN,  // return from current function
} OpCode;

/* Struct to store along some data with a instruction,
currently this is just a series of bytes. */
typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif
