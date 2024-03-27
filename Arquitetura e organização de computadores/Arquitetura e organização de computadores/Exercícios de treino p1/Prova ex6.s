#6) Faça um programa, em assembly do mips, que receba um valor inteiro do teclado, 
#se esse valor for igual a 10 imprima-o na tela e saia do programa. Senão imprima 0 e saia do programa.


.data
.text

main:

    li $v0, 5
    syscall

    move $t0, $v0

    li $t1, 10

    beq $t0, $t1, sair

    li $v0, 1
    move $a0, $zero
    syscall

    li $v0, 10
    syscall

sair:

    li $v0, 1
    move $a0, $t0
    syscall

    li $v0, 10
    syscall