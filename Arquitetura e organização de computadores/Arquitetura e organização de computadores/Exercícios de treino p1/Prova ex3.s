#3) Faça um programa, em assembly do MIPS, para colocar o valor 5 na posição 10 da memória. 
#Agora coloque o valor 20 na posição 40 da memória.  
#Some os conteúdos que estão na memória (5+20), e coloque o resultado na posição 100 da memória.


.data
.text

main:

    li $t0, 5
    li $t1, 20

    sw $t0, 36($sp)
    sw $t1, 76($sp) 

    lw $s0, 36($sp)
    lw $s1, 76($sp)

    add $s2, $s0, $s1

    li $v0, 1
    move $a0, $s2
    syscall

    li $v0, 10
    syscall
    