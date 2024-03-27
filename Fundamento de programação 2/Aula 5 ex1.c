#include <stdio.h>
#include <stdlib.h>

int main (){
  double altura;
  double peso;
  printf("Digite sua altura:\n");
  scanf("%lf", &altura);
  peso = 72.7 * altura - 58;
  printf("O seu peso ideal eh: %.2lf\n", peso);

  return 0;
}
