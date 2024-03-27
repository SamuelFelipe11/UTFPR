#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*12) Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.*/
int calculamedia(int* vetorN, int tamanho){
  if(tamanho == 0){
      return vetorN[tamanho];
  }else{
      return vetorN[tamanho]/tamanho + calculamedia(vetorN, tamanho-1);
  }//if-else

}//função

int main(){
  int vetorN[10] = {1, 4, 5, 2, 3, 4, 5, 1, 6, 9};
  float media;

  media = calculamedia(vetorN, 9);

  printf("%.2f\n", media);
  
    return 0;
}