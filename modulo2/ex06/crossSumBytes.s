.section .data

by1:
	.byte 0

by2:
	.byte 0

	.global by1
	.global by2

.section .text

	.global concat

concat:

	pushl %ebp
	movl %esp, %ebp
	
	movb by2, %al
	movb by1, %ah
	
	movl %ebp, %esp
	popl %ebp
	ret
