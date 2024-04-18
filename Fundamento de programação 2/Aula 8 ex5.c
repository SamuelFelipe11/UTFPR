#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*5) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez.*/

int main(){
  float vezes = 0;
  while(vezes < 10){
    float numero;
    printf("Digite um numero: \n");
    scanf("%f", &numero);
    double conta = pow(numero, 2);
    printf("O quadrado deste numero eh %.0lf\n", conta);

  vezes++;
  }//while

  return 0;
}//main
