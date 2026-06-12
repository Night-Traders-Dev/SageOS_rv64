// SG2002 SDIO Controller driver skeleton
#include "sdio_controller.h"

#define SDIO1_BASE 0x04320000

void sdio_init() {
    // 1. Configure Pinmux for SDIO1
    // 2. Enable Clocks for SDIO1
    // 3. Reset Controller
}

int sdio_send_command(unsigned int cmd, unsigned int arg) {
    // Basic command dispatch
    return 0;
}
