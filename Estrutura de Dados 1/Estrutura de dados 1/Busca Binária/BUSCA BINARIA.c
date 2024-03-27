#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int buscaBinaria(int vetor[], int ini, int fim, int busca){

    int meio =(int)(ini + fim)/2;
    if(ini > fim){
        return -1;
    }  

    if(vetor[meio] == busca){
        return meio; 
    }else{  

        if(vetor[meio] < busca){
            ini = meio+1;
            return buscaBinaria(vetor, ini, fim, busca);

        }else{
            fim = meio-1;
            return buscaBinaria(vetor, ini, fim, busca);
       
        }    
    }

   

}

int main(){
    int vetor[10] = {1, 2, 5, 6, 7, 9, 10, 14, 19, 22};
    int posicao;
    posicao = buscaBinaria(vetor, 0, 9, 10);


    printf("%d\n", posicao);

    return EXIT_SUCCESS;
}