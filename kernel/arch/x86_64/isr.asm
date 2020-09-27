%include "kernel/arch/x86_64/macros.asm"

global idtflush
extern isrdispatcher

section .text
commonisr:
    pushaq              ; Push all general purpose registers (bar rsp).
    mov rdi, rsp        ; Point the dispatcher to where our GPRs were just pushed.
    call isrdispatcher  ; Call the common ISR dispatcher in C++-land.

    popaq               ; Pop all general purpose registers (bar rsp).
    add rsp, 16         ; Deallocate any error codes pushed manually or automatically.
    iretq               ; Interrupt return.

ISR_NOERRCODE 00
ISR_NOERRCODE 01
ISR_NOERRCODE 02
ISR_NOERRCODE 03
ISR_NOERRCODE 04
ISR_NOERRCODE 05
ISR_NOERRCODE 06
ISR_NOERRCODE 07
ISR_ERRCODE   08
ISR_NOERRCODE 09
ISR_ERRCODE   10
ISR_ERRCODE   11
ISR_ERRCODE   12
ISR_ERRCODE   13
ISR_ERRCODE   14
ISR_NOERRCODE 15
ISR_NOERRCODE 16
ISR_ERRCODE   17
ISR_NOERRCODE 18
ISR_NOERRCODE 19
ISR_NOERRCODE 20
ISR_ERRCODE   21
ISR_NOERRCODE 22
ISR_NOERRCODE 23
ISR_NOERRCODE 24
ISR_NOERRCODE 25
ISR_NOERRCODE 26
ISR_NOERRCODE 27
ISR_NOERRCODE 28
ISR_NOERRCODE 29
ISR_NOERRCODE 30
ISR_NOERRCODE 31

IRQ 00, 32
IRQ 01, 33
IRQ 02, 34
IRQ 03, 35
IRQ 04, 36
IRQ 05, 37
IRQ 06, 38
IRQ 07, 39
IRQ 08, 40
IRQ 09, 41
IRQ 10, 42
IRQ 11, 43
IRQ 12, 44
IRQ 13, 45
IRQ 14, 46
IRQ 15, 47
IRQ 16, 48
IRQ 17, 49
IRQ 18, 50
IRQ 19, 51
IRQ 20, 52
IRQ 21, 53
IRQ 22, 54
IRQ 23, 55
