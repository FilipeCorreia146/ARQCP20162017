.section .data

.section .text

	.global calculate

calculate:

	pushl %ebp
	movl %esp, %ebp
	pushl %esi
	pushl %ebx
	pushl %edi

	movl 8(%ebp), %esi #Primeiro parametro da stack passado para esi
	movl 12(%ebp), %ebx #Segundo parametro da stack passado para ebx
	
	addl %ebx, %esi #Soma de a com b
	
	pushl %esi #Enviamos o valor de esi, a soma, para a stack
	pushl 12(%ebp)  #Enviamos o valor de b para a stack
	pushl 8(%ebp)  #Enviamos o valor de a para a stack
	pushl $43  #Enviamos o código ascii de "+" para a stack
	call print_result #Fazemos a chamada da função print_result
	addl $16, %esp #Esp volta ao indice em que se encontrava antes das alterações à stack

	movl 8(%ebp), %eax #Primeiro parametro da stack é passado para eax

	mull %ebx #Multiplica eax com ebx e o valor fica em eax

	movl %eax, %edi
	
	pushl %edi
	pushl 12(%ebp)
	pushl 8(%ebp)
	pushl $42
	call print_result
	addl $16, %esp

	subl %edi, %esi

	movl %esi, %eax

	popl %edi
	popl %ebx
	popl %esi
	movl %ebp, %esp
	popl %ebp
	ret

