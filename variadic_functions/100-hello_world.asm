; 64-bit NASM program to print "Hello, World" and a newline
;
; This program uses the 'write' and 'exit' syscalls directly.
;
; To compile and run:
; nasm -f elf64 hello.asm -o hello.o
; gcc -no-pie hello.o -o hello
; ./hello

section .data
    ; The message string to be printed.
    ; 0xa is the ASCII code for a newline character.
    hello_message db 'Hello, World', 0xa
    ; Calculate the length of the message at assembly time.
    ; '$' refers to the current address, so '$ - hello_message' gives the length.
    hello_len equ $ - hello_message

section .text
    ; The '_start' label is the default entry point for the linker.
    global _start

_start:
    ; Prepare and execute the 'write' system call.
    ; According to the x86-64 syscall ABI:
    ; rax: syscall number (1 for write)
    ; rdi: file descriptor (1 for stdout)
    ; rsi: pointer to the buffer (our message)
    ; rdx: number of bytes to write (length of the message)
    mov rax, 1
    mov rdi, 1
    mov rsi, hello_message
    mov rdx, hello_len
    syscall             ; Invoke the kernel to perform the write operation.

    ; Prepare and execute the 'exit' system call to terminate gracefully.
    ; rax: syscall number (60 for exit)
    ; rdi: exit status code (0 for success)
    mov rax, 60
    mov rdi, 0
    syscall             ; Invoke the kernel to exit the program.
