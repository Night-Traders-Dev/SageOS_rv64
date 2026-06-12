#include "usb_device.h"
#include "otg_controller.h" // Assuming I should create this for register access

// Dummy descriptors
static usb_device_descriptor_t device_desc = {
    .bLength = 18,
    .bDescriptorType = 1, // Device
    .bcdUSB = 0x0200,
    .bDeviceClass = 0x02, // CDC
    .bMaxPacketSize0 = 64,
    .idVendor = 0x1234,
    .idProduct = 0x5678,
    .bNumConfigurations = 1
};

void usb_device_handle_setup(uint8_t* setup_packet) {
    // 1. Parse SETUP packet
    // 2. Check for GET_DESCRIPTOR request
    // 3. Respond with device_desc
}
