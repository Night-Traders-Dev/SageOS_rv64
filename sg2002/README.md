# SG2002 (LicheeRV Nano) Support in SageOS

This directory contains the platform-specific implementation for the Sophgo SG2002 SoC, used in the Sipeed LicheeRV Nano board.

## Current Status (Milestone 1 Complete)
- [x] UART Driver (`uart.c`)
- [x] Trap Handler Skeleton (`traps.c`)
- [x] Identity Paging Skeleton (`paging.c`)
- [x] SBI-based Timer Support (`timer.c`)
- [x] Physical Allocator Skeleton (`pmm.c`)
- [x] Early Heap Allocator (`heap.c`)

## Architecture
The SG2002 is a RISC-V 64-bit SoC. SageOS runs in Supervisor Mode (S-Mode) and relies on SBI for machine-mode abstractions.

### Memory Map (Early Boot)
- **Kernel Base:** `0x80000000`
- **UART0:** `0x04140000`

## Build Integration
The platform is integrated into the main SageOS build system via `build.toml`. Platform-specific files are located under `arch/rv64/sg2002/`.

## Milestones
- **Milestone 1:** Basic Bring-up (UART, Traps, Memory, Timers) - **COMPLETED**
- **Milestone 2:** Allocator Refinement, Scheduler, Interrupt Handling (In Progress)
- **Milestone 3:** SGVM Interpreter Integration
- **Milestone 4:** Storage & VFS
- **Milestone 5:** Userspace & IPC
- **Milestone 6:** SMP & Optimization

## Bootloader & Firmware
The SG2002 boot chain is built using the provided `scripts/build_sg2002_bootloader.sh` script, which handles the acquisition and compilation of OpenSBI, U-Boot, and packaging via `fiptool`.

1. Run: `bash scripts/build_sg2002_bootloader.sh`
2. The final bootloader package (`fip.bin`) will be generated in `boot_binaries/`.
