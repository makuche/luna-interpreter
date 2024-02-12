#include <stdlib.h>

#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }

    /* realloc automatically shrinks the memory to the desired size,
    if newSize < oldSize, or copies the object to a new memory location
    if newSize > oldSize
    */
    void* result = realloc(pointer, newSize);
    if (result == NULL) exit(1);  // No memory left to allocate
    return result;
}