section .data
    hello: db 'Hello, Holberton,', 10, 0

section .text
    global main

main:
    mov rax, 0                  ; clear rax register
    lea rdi, [hello]            ; load address of hello string into rdi
    xor esi, esi                ; set esi register to 0 (no floating point arguments)
    call printf                 ; call printf to print the string
    xor eax, eax                ; set return value to 0
    ret                         ; return to operating system

