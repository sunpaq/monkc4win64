.text
.globl _push_jump
.p2align 4, 0x00
_push_jump:
	movq (%rcx), %r11
	movq $0, (%rcx)
	cmpq $0, %r11
	je 0f
	jmp *%r11
0:
	ret
