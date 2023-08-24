section .data
	hello db "Hello, Holberton", 10, 0 ;string to be printed (null terminated)

section .text
	global main
	extern printf

main:
	sub rsp, 8		; Align the stack (16-byte alignment)
	lea rdi, [hello]	; Load the address of the string into rdi
	call printf		; Call the printf function
	add rsp, 8		; Adjust the stack pointer after the call

	;Exit the program
	mov rax, 60		;syscall number for sys_exit
	xor rdi, rdi		; exit status 0
	syscall

