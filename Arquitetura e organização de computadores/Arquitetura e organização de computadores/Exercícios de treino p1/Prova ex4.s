#4) Salve na memória o valor 100, na posição 20 usando como base o registrador $zero. Depois salve 200 na posição 40.

.data
.text

main:

    li $t0, 100
    li $t1, 200

    sw $t0, 76($sp) #(20*4 -4)
    sw $t1, 156($sp) 

    lw $s0, 76($sp)
    lw $s1, 156($sp)


    li $v0, 1
    move $a0, $s0
    syscall

    li $v0, 1
    move $a0, $s1
    syscall

    li $v0, 10
    syscall