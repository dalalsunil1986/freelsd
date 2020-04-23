#ifndef FREELSD_KERNEL_KEYBOARD_HEADER
#define FREELSD_KERNEL_KEYBOARD_HEADER

#include <interrupts.hpp>
#include <stdint.h>

namespace kboard {
    // Keypress flags, starting from rightmost bit.
    // ===========================================
    // Bit 0: Left shift pressed.
    // Bit 1: Right shift pressed.
    // Bit 2: L/R control pressed.
    // Bit 3: L/R alt pressed.
    // Bit 4: Caps Lock pressed. 
    // Bits 5-15: Reserved.
    extern uint16_t flags;

    // Keyboard interrupt handler.
    void handler(idt::regs32_t *regs);

    // Initialise the keyboard and register IRQ1 for interrupts.
    void initialise(void);
}

#endif
