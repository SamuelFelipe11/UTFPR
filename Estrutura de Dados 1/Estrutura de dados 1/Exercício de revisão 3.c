#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/*[Aloca ̧c ̃ao Dinˆamica] Fa ̧ca um programa que leia um valor N e crie dinamicamente um vetor com essa
quantidade de elementos. Em seguida, passe esse vetor para um procedimento que vai preencher os
elementos desse vetor com n ́umeros aleat ́orios de 0 at ́e N. Depois, no programa principal, imprima os
valores do vetor preenchido. Al ́em disso, antes de finalizar o programa, lembre-se de liberar a  ́area de
mem ́oria alocada.*/


void preenchevetor(int *vetorpreenchido, int tamanho){


    for(int i = 0; i <= tamanho; i++){
        sleep(1);
        srand(time(NULL));
        vetorpreenchido[i] = rand()%tamanho;
        
    }//for

}//void

int main(){
    int tamanho;

    printf("## ALOCACAO DINAMICA ##\n");
    printf("Qual sera o tamanho do vetor alocado? (>0):");
    scanf("%d", &tamanho);

    int *vetor = malloc(tamanho*sizeof(int));

    preenchevetor(vetor, tamanho);

    printf("VETOR: {");
    
    for(int i = 0; i < tamanho; i++){
        printf(" %d ", vetor[i]);
    }//for

    printf("}\n");

    return 0;
}