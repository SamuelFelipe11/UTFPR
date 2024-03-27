#9) Codifique um programa correspondente ao seguinte código em c:
   
    #int a = 3;
    #int b = 4;
    #int m = 10;
    #m = a;
    #if ( b < m )
        #m = b;
   
    #printf("%i", m);
               
   
#Agora, teste a e b com outros valores.


.data
.text

main:

    li $t0, 3
    li $t1, 4
    li $t2, 10

    add $t2, $zero, $t0

    slt $s0, $t1, $t2
    beq $s0, $zero, sair

    move $t2, $t1

sair:

    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 10
    syscall