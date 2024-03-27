#include <stdio.h>
#include <stdlib.h>

/*3) Crie um algoritmo que exiba todos os números múltiplos
de 5 no intervalo de 1 a 500.*/

int main(){
  int resto;
for(int numero = 1; numero<=500; numero++){
  resto = numero%5;
  if(resto == 0)
  printf("%d\n", numero);
}//for

  return 0;
}//main
