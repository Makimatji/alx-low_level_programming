section .data
    format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8
    mov rdi, format
    xor eax, eax
    call printf
    add rsp, 8
    xor eax, eax
    ret
