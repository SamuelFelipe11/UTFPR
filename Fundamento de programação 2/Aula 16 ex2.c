#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7*/

float calcula_peso(char sexo, float altura){
float peso_ideal;

if(sexo == 'M' || sexo == 'm'){
    peso_ideal = (72.7 * altura) - 58;
}else{
    peso_ideal = (62.1 * altura) - 44.7;
}//if-else

    return peso_ideal;
}//função

int main(){
char sexo;
float altura;
float peso_ideal;


printf("Calcule seu peso ideal\n");
printf("Qual seu sexo? (M/F):");
scanf("%c", &sexo);

printf("Qual sua altura?:");
scanf("%f", &altura);

peso_ideal = calcula_peso(sexo, altura);

printf("Seu peso ideal eh %.3fKG", peso_ideal);

    return 0;
}