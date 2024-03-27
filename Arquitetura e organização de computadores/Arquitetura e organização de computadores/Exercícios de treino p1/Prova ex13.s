#13) Implementar o código correspondente em mips

    #int vetor[] = {3, 0, 1, 2, -6, -2, 4, 10, 3, 7, 8, -9, -15, -20, -87, -100}

    #printf("Seja bem vindo! \nPor favor entre com um valor inteiro para pesquisar no vetor\n\n");
    #scanf("%i", elemento);

    #while(vetor[i] != -100){

        #if(vetor[i] == elemento){
            #printf("Elemento %i encontrado\n\n", elemento );
            #exit(0);
        #}

        #i++;
    #}

    #printf("Elemento não encontrado\n\n");
    #exit(0);


.data

    v1: .word 3, 0, 1, 2, -6, -2, 4, 10, 3, 7, 8, -9, -15, -20, -87, -100
    v2: .asciiz "Seja bem vindo! \nPor favor entre com um valor inteiro para pesquisar no vetor\n\n"
    v3: .asciiz "Elemento não encontrado\n\n"
    v4: .asciiz "Elemento %i encontrado\n\n"
.text

main:

    la $s0, v1
    la $s1, v2
    la $s2, v3
    la $s3, v4
    li $s4, -100

    li $v0, 4
    move $a0, $s1
    syscall

    li $v0, 5
    syscall

    move $t0, $v0       #scanf

while:

    lw $t1, 0($s0)   
    beq $t1, $s4, notFound
    beq $t1, $t0, found
    addi $s0, $s0, 4
    j while

found:

    li $v0, 4
    move $a0, $s3
    syscall

    li $v0, 10
    syscall


notFound:

    li $v0, 4
    move $a0, $s2
    syscall

    li $v0, 10
    syscall