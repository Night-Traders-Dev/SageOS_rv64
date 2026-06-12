// SG2002 USB OTG (DWC2) Driver
#include <stdint.h>

#define USB_OTG_BASE 0x04340000

// DWC2 Register offsets (partial)
#define GOTGCTL    0x000
#define GINTSTS    0x014
#define GINTMSK    0x018
#define GRSTCTL    0x010

void usb_otg_init() {
    // 1. Reset controller (GRSTCTL)
    // 2. Set mode (Host/Device)
    // 3. Configure FIFOs
}

void usb_otg_process_interrupts() {
    // Read GINTSTS, handle events
}
