#12) A partir do código assembly do mips, ao qual implementa o programa a seguir:


    #int fat = 0;
    #int n = 5;
         
    #for(fat = 1; n > 1; n = n - 1)
        #fat = fat * n;
     
    #printf("%d", fat);

#OBS: Não utilize a instrução MUL, faça a partir de sucessivas somas.