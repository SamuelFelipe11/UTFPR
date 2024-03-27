#include <stdio.h>
#include <stdlib.h>

/*5) Faça um programa que calcule o fatorial de um número a ser
digitado.*/

int main(){
int numero;
int fatorial = 1;
printf("Digite um numero:\n");
scanf("%d", &numero);

for(int contador = numero; contador>0; contador--){
  fatorial = fatorial * contador;
}//for
printf("O fatorial de %d eh %d\n", numero, fatorial);

  return 0;
}//main
