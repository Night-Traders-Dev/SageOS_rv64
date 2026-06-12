#include "ipc.h"
#include "../console/console.h"
#include <stdint.h>

#define WIFI_SERVICE_PID 10
#define USB_SERVICE_PID  11

void handle_ipc_message(ipc_msg_t* msg) {
    switch (msg->msg_type) {
        case IPC_USB_STATUS:
            // Placeholder for USB status
            break;
        case IPC_WIFI_SCAN:
            // Placeholder for Wi-Fi scan
            break;
        default:
            break;
    }
}
