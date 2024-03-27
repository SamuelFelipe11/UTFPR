#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*6) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá calcular o quadrado
de vários números e finalizar quando for digitado um número
negativo ou zero.*/

int main(){

    int numero;
    printf("Digite um numero: \n");
    scanf("%i", &numero);
    while(numero > 0){
      if(numero <= 0){
         break;
      }else{
      int conta = pow (numero, 2);
      printf("O quadrado deste numero eh %i\n", conta);
        }//if-else
      }//while

  return 0;
}//main
