#8) Faça um programa, em assembly do MIPS, que receba e multiplique dois inteiros sem usar a instrução de multiplicação do MIPS. Imprima o resultado na tela.

.data
.text

main:

    li $v0, 5
    syscall

    move $t0, $v0    
    
    li $v0, 5
    syscall

    move $t1, $v0

    slt $s1, $t1, $zero
    beq $s1, $zero, multiplicacao

inverteSinal:

    sub $t0, $zero, $t0
    sub $t1, $zero, $t1 


multiplicacao:

    beq $t1, $zero, sair
    add $s0, $s0, $t0
    addi $t1, -1

    j multiplicacao

sair:

    li $v0, 1
    move $a0, $s0
    syscall

    li $v0, 10
    syscall
