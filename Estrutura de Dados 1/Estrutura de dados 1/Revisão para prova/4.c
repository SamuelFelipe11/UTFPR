#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*4) Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série S:*/

int main(){
  int N;
  int soma = 0;
  printf("Qual será o termo N da série?:");
  scanf("%d", &N);

  for(int an = 1; an <= N; N++){
    soma+= (pow(N, 2) + 1)/(N + 3);
  }//for

  printf("A soma com %d° termos da sequência é igual a %d\n", N, soma);
    return 0;
}

