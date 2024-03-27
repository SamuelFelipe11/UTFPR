#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*11) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.*/
int calculasoma(int tamanho, int* vetor){
    printf("%d\n", tamanho);
  if(tamanho == 0){
     return vetor[tamanho];
  }else{
     return vetor[tamanho] + calculasoma(tamanho-1, vetor);
  }//if-else

}//função

int main(){
  int vetor[7] = {1, 5, 3, 2, 9, 10, 8};
  int soma;

  soma = calculasoma(6, vetor);

  printf("%d", soma);

    return 0;
}//main



