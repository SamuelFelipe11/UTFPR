#Codifique em assembly do mips um programa correspondente a:

    #int i = 0;
    #int j = 10;
    #int k = 0;

    #while (i < j){

        #i++;
        #k +=10;

    #}

    #printf("%i", i);
    #printf("%i", k);

.data
.text

main:

    add $t0, $t0, $zero       #i = 0
    li $t1, 10                #j = 10
    add $t2, $t2, $zero        #k = 0


while:

    slt $s0, $t0, $t1       #compara os valores de t0 e t1 (i e j), se t0<t1, retorna 1, se não, retorna 0
    bne $s0, $zero, sair    #caso o valor retornado por slt seja 0, a condição do while é furada, saindo assim do laço de repetição

    addi $t0, $t0, 1        #i++
    add $t2, $t2, 10        #k += 10

    j while                 #responsável por manter o laço de repetição, chamando novamente a label "while" enquanto a condição não é furada

sair:   

    li $v0, 1
    move $a0, $t0   #printf("%i", i);
    syscall

    
    li $v0, 1
    move $a0, $t2   #printf("%i", k);
    syscall

    
    li $v0, 10      #exit
    syscall