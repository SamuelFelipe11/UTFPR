#include <stdio.h>
#include <stdlib.h>

int main (){
  int dia, mes, ano;
  printf("Digite a data do seu aniversario neste ano (dia/mês/ano)\n");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  int dia1, mes1, ano1;
  printf("Digite a data do seu nascimento (dia/mês/ano)\n");
  scanf("%d/%d/%d", &dia1, &mes1, &ano1);

  int idade = ano - ano1;
  printf("Voce tem %d anos\n", idade);



  return 0;
}
