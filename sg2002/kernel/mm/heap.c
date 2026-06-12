// Early bump-pointer heap allocator
#include <stdint.h>
#include <stddef.h>

extern char _heap_start[];
static uintptr_t heap_ptr = (uintptr_t)_heap_start;

void* early_malloc(size_t size) {
    // 1. Align size
    // 2. Bump heap_ptr
    // 3. Return old pointer
    return (void*)0;
}
