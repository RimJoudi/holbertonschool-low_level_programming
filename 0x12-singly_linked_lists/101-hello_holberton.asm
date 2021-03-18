	section .data
	msg db "Hello, Holberton",10 ; 10 is the ASCII code for a new line (LF)

	section .text
	global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 16
	syscall

	mov rax, 60
	mov rdi, 0
	    syscall
