#include "platform_vm.h"
#include "../uart/uart.h"
#include "../timer/timer.h"
#include "../../../../sageos_build/sage_lang/core/src/vm/vm.h"

static platform_vm_interface_t* vm_interface;

void sg2002_vm_init(platform_vm_interface_t* interface) {
    vm_interface = interface;
    // Initialize VM internal state
    vm_init();
}

void sg2002_vm_run(void* bytecode) {
    // 1. Load bytecode
    // 2. Set callback interfaces (via VM-specific mechanism, stubbed here)
    // 3. Start execution loop
    vm_run(bytecode);
}
