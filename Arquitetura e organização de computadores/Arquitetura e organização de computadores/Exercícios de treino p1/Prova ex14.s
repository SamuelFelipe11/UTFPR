#14) Faça um programa, em assembly do mips, para somar dois vetores (V1 e V2) onde:
        #v1 = {10,20,30,40,50,60}

        #v2 = {0,10,-15, 16, 20, 30}

    #O programa deverá percorrer os dois vetores somando cada elemento e colocando os mesmos no vetor resultante.

    #A saída desejada é apresentada a seguir:

    #A soma dos vetores v0 e v1 é:

          #10, 30, 15, 56, 70, 90

 

    #OBS: Modele primeiro a solução em C depois traduza para assembly

.data

      v1: .word 10, 20, 30, 40, 50, 60
      v2: .word 0, 10, -15, 16, 20, 30
      v3: 
      v4: .asciiz "A soma dos vetores v0 e v1 é:\n\n"
      v5: .asciiz ", "
.text

main:

      la $s0, v1
      la $s1, v2
      la $s2, v3
      la $s3, v4
      la $s4, v5
      li $s5, 6         #numero de valores dos vetores

soma:

      beq $s5, $zero, sair
      lw $t0, 0($s0)
      lw $t1, 0($s1)
      add $t3, $t2, $t1
      sw $t3, 0($s2)

      addi $s0, 4
      addi $s1, 4
      addi $s2, 4
      addi $s5, -1
      j soma

sair:

      li $v0, 4
      move $a0, $s3
      syscall

exibeValores:

      la $s0, v3
      li $s1, 6         #numero de valores dos vetores

      lw $t0, 0($s0)
      li $v0, 1
      move $a0, $t0
      syscall

      addi $s1, -1
      beq $s1, $zero, exit

      li $v0, 4
      move $a0, $s4
      syscall

      addi $s0, 4
      j exibeValores


exit:

      li $v0, 10        #exit
      syscall
