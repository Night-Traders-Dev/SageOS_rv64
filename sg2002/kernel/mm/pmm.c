// Simple bitmap-based physical memory allocator
#include <stdint.h>
#include <stddef.h>

#define PAGE_SIZE 4096
#define MAX_MEM_PAGES 65536 // 256MB / 4KB

static uint8_t page_bitmap[MAX_MEM_PAGES / 8];
static uintptr_t pmm_start_addr;

void pmm_init(uintptr_t start_addr, size_t size) {
    pmm_start_addr = start_addr;
    // Clear bitmap (all 0s)
    for (int i = 0; i < sizeof(page_bitmap); i++) {
        page_bitmap[i] = 0;
    }
}

uintptr_t pmm_alloc() {
    for (int i = 0; i < MAX_MEM_PAGES; i++) {
        if (!(page_bitmap[i / 8] & (1 << (i % 8)))) {
            page_bitmap[i / 8] |= (1 << (i % 8));
            return pmm_start_addr + (i * PAGE_SIZE);
        }
    }
    return 0; // Out of memory
}

void pmm_free(uintptr_t addr) {
    uintptr_t page_idx = (addr - pmm_start_addr) / PAGE_SIZE;
    if (page_idx < MAX_MEM_PAGES) {
        page_bitmap[page_idx / 8] &= ~(1 << (page_idx % 8));
    }
}
