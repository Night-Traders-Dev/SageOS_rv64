#include "platform_vm.h"
#include "../uart/uart.h"
#include "../timer/timer.h"

static platform_vm_interface_t* vm_interface;

void sg2002_vm_init(platform_vm_interface_t* interface) {
    vm_interface = interface;
}

void sg2002_vm_run(void* bytecode) {
    // 1. Initialize VM state
    // 2. Set callback interfaces
    // 3. Start execution loop
}
