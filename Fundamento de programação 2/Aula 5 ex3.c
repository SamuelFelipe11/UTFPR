#include <stdio.h>
#include <stdlib.h>

/*Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido.*/


int main(){
double vendas;
printf("Digite o total de suas vendas no mes:\n");
scanf("%lf", &vendas);
double salario = 1200 + vendas * 10 / 100;
printf("O seu salario eh de R$%.2lf\n", salario);

return 0;
}
