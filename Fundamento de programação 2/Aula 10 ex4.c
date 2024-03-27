#include <stdio.h>
#include <stdlib.h>

/*4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.*/

int main(){
int resto;

for(int numero = 240; numero <= 730; numero++){
  resto = numero%2;
  if(resto==0)
  printf("%d\n", numero);
}//for

  return 0;
}//main
