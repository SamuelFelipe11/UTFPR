#10) Codifique em assembly do mips um programa correspondente a :


    #int a = 2;
    #int b = 10;
    #x = 0;
    #if ( a >= 0 && b <= 50 )
         #x = 1;
    #printf("%i", x);
#Agora, teste a e b com outros valores.

.data
.text

main:

    li $t0, 2
    li $t1, 49
    li $t2, 0
    li $t3, 50


    sgt $s0, $t0, $zero
    slt $s1, $t1, $t3

    and $s2, $s0, $s1

    beq $s2, $zero, sair

    addi $t2, $t2, 1

sair:
    
    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 10
    syscall 