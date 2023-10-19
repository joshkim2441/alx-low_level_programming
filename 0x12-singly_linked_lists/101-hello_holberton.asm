	SECTION .text

	global main
	extern printf
main:
	push rbp

	; Prepare arguments for priintf
	mov rdi, format    ; format
	mov rsi, message      ; vararg
	mov rax,0

	; Call printf
	call printf

	pop rbp

	; Return from main
	mov rax, 0
	ret

	SECTION .data
message: db "Hello, Holberton", 0
format: db "%s", 10, 0
