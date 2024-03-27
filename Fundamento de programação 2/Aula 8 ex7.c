#include <stdio.h>
#include <stdlib.h>

/*7) Faça um programa que calcule o fatorial de um número a ser
digitado.*/

int main(){
    int numero_inicial;
    int fatorial = 1;
    int numero;
    printf("Digite um numero:\n");
    scanf("%i", &numero_inicial);

    numero = numero_inicial;

  do{

    fatorial = fatorial * numero;
    numero--;

  }while(numero > 1);

  printf("O fatorial de %i eh %i\n", numero_inicial, fatorial);

  return 0;
}
