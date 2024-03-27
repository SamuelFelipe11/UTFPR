.data
.text

main:

    li $t0, 0
    beq $t0, $zero, if

    else:
        li $t0, 5
        j sair
    
    if:
        li $t0, 10

    sair:
        li $v0, 1
        move $a0, $t0
        syscall

        li $v0, 10
        syscall