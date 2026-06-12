// USB Serial (CDC-ACM) bridge skeleton
#include "serial_bridge.h"

void usb_serial_init() {
    // 1. Initialize USB PHY/OTG
    // 2. Setup CDC-ACM descriptors
}

void usb_serial_write(const char* data, int len) {
    // 1. Send data through USB bulk endpoint
}
