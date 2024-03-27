#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*5) Crie uma função que que receba o valor de um inteiro
positivo N, calcule e retorne o fatorial desse número.
Em todos os exercícios faça uma função main para testar sua função*/

int calcula_fatorial(int valor){
int fatorial = 1;

for(int i = 1; i <= valor; i++){
   fatorial = fatorial*i;
}

    return fatorial;
}


int main(){
 int valor;
 int fatorial;
 printf("Digite um valor inteiro para calcular seu fatorial\n");
 printf("Valor:");
 scanf("%d", &valor);

 fatorial = calcula_fatorial(valor);

 printf("O fatorial de %d eh %d\n", valor, fatorial);

    return 0;
}