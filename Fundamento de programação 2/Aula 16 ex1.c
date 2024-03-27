#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* 1) Faça um algoritmo que implemente uma função que receba 3 números
inteiros e retorne o maior valor;*/

int retorna_maior(int valor1, int valor2, int valor3){
  int maior = valor1;

  if(valor2>maior){
    maior = valor2;
  }else if(valor3 > maior){
    maior = valor3;
  }

  return maior;
}//função

int main(){
int valor1, valor2, valor3;
int maior_valor;
printf("Digite 3 valores e descubra qual eh maior\n");

  printf("Valor 1:");
  scanf("%d", &valor1);
  printf("Valor 2:");
  scanf("%d", &valor2);
  printf("Valor 3:");
  scanf("%d", &valor3);

  maior_valor = retorna_maior(valor1, valor2, valor3);

printf("O maior valor digitado foi %d\n", maior_valor);

    return 0;
}