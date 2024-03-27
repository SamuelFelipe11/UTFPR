#5) Reproduza o programa visto durante a aula (slide 25). Leia e explique cada linha de código.

.data
.text

main:

 $s3 = i
 $s5 = k
 $s6 = save

Loop:
 sll $t0, $s3, 2        #desloca o ultimo bit duas casas para o lado (multiplica por 2²)
 add $t0, $t0, $s6      #soma $t0 e $t6 e salva em $t0
 lw $t1, 0($t0)         #carrega o valor da posição de memória de $t0 em $t1
 bne $t1, $s5, Sair     #if($t1 != $s5) go to sair
 addi $s3, $s3, 1       #soma 1 à $s3
 J Loop

Sair: