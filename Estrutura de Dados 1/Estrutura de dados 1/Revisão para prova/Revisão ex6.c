#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*6) Escreva uma função para o cálculo do volume e da área de uma esfera em que π = 3.1414592. 
O valor do raio r deve ser passado por parâmetro, e os valores calculados devem ser retornados por referência.
*/


int main(){
float raio;
float volume;
float area;
printf("Digite o valor do raio para calcular o volume e a área da esfera:");
scanf("%f", &raio);
  
volume = 4/(3* M_PI + pow(raio, 3));
area = (4* M_PI)*pow(raio, 2);

printf("Volume = %.3f\nArea = %.3f\n", volume, area);

    return 0;
}