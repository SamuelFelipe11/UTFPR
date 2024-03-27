#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*4) Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série S:*/

int main(){
  int n;
  float soma = 0;
  printf("Qual será o termo N da série?:");
  scanf("%d", &n);

  for(int an = 1; an <= n; an++){
    soma+= (pow(an, 2) + 1)/(an + 3);
  }//for

  printf("A soma com %d termos da sequência é igual a %.2f\n", n, soma);
    return 0;
}

