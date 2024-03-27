#include <stdio.h>
#include <stdlib.h>


/*3) Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:
*
**
***
****
***
**
*

*/

int main(){
int numero_digitado;

printf("Digite um numero:");
scanf("%d", &numero_digitado);

for(int linha = 1; linha <=numero_digitado; linha++){
  for(int coluna = 1; coluna <= numero_digitado; coluna++){
      if(coluna > linha){
          printf(" ");
      }else{
          printf("#");
      }
  }//for interno
  printf("\n");
}//for externo

for(int linha = numero_digitado-1; linha >=1; linha--){
    for(int coluna = linha; coluna>=1; coluna--){
     printf("#");
    }
    printf("\n");
}



    return 0;
}