#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*6) Faça um programa que receba 10 números e calcule o
quadrado desse número (um de cada vez).*/

int main(){
int vezes = 1;
for(int numero, quadrado; vezes<=10; vezes++){
  printf("Digite um numero:\n");
  scanf("%d", &numero);
  quadrado = pow(numero, 2); // add -lm
  printf("O quadrado de %d eh %d\n", numero, quadrado);
}//for

  return 0;
}
