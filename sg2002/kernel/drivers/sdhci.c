// SG2002 SDHCI driver skeleton
#include "sdhci.h"

void sdhci_init() {
    // 1. Initialize SDHCI controller
    // 2. Perform card detection and initialization
}

int sdhci_read_block(unsigned long block_addr, void* buffer) {
    // Perform block read
    return 0;
}

int sdhci_write_block(unsigned long block_addr, const void* buffer) {
    // Perform block write
    return 0;
}
