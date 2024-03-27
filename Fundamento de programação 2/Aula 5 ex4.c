#include <stdio.h>
#include <stdlib.h>

/*Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.*/

int main (){
 double numero1, numero2, numero3, numero4;
 printf("Digite quatro numeros\n");
 scanf("%lf %lf %lf %lf", numero1, numero2, numero3, numero4);
 double media=0;
 media = (numero1 + numero2 + numero3 + numero4) / 4;
 printf("A media desses numeros eh %.2lf", media);

 return 0;

}
