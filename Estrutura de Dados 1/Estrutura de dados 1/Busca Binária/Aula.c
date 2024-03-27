#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int buscaBinaria(int vetor[], int ini, int fim, int busca){

        int meio = (int) ((ini+fim)/2);
        if(ini>fim) return -1;
        if(vetor[meio] == busca) return busca;
        if(vetor[meio] < busca) {
            return buscaBinaria(vetor, meio+1, fim, busca);
        }else{
            return buscaBinaria(vetor, ini, meio-1, busca);
        }
}

int main(){
    int vetor[10] = {1, 2, 5, 6, 7, 9, 10, 14, 19, 22};
    int posicao;
    posicao = buscaBinaria(vetor, 0, 9, 2);

    printf("%d\n", posicao);

    return EXIT_SUCCESS;
}