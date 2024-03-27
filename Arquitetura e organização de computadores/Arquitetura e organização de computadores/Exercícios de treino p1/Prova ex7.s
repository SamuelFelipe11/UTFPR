#7) Faça um programa, em assembly do mips, que receba dois inteiros do teclado, e imprima o maior. Se os números forem iguais imprima -111.

.data
.text

main:

    li $v0, 5
    syscall

    move $t0, $v0    
    
    li $v0, 5
    syscall

    move $t1, $v0

    beq $t0, $t1, iguais

    sgt $s0, $t0, $t1
    bne $s0, $zero, primeiroMaior

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 10
    syscall


primeiroMaior:

    li $v0, 1
    move $a0, $t0
    syscall

    li $v0, 10
    syscall


iguais:
    
    li $s0, -111

    li $v0, 1
    move $a0, $s0
    syscall

    li $v0, 10
    syscall