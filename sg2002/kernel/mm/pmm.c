// Simple bitmap-based physical memory allocator
#include <stdint.h>

#define PAGE_SIZE 4096
#define MAX_MEM_PAGES 65536 // 256MB / 4KB

static uint8_t page_bitmap[MAX_MEM_PAGES / 8];

void pmm_init(uintptr_t start_addr, size_t size) {
    // 1. Clear bitmap
    // 2. Mark early boot region as reserved
}

uintptr_t pmm_alloc() {
    // 1. Find first free bit in bitmap
    // 2. Mark as used
    // 3. Return address
    return 0;
}

void pmm_free(uintptr_t addr) {
    // 1. Mark bit as free
}
