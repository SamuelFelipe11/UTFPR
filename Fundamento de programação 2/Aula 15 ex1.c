#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma enumeração representando os meses do ano.
Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui. */

enum Meses
{
    JANEIRO,
    FEVEREIRO,
    MARÇO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main()
{
    enum Meses meses;
    int numero_digitado;
    char printa_mes[12][11] = {"JANEIRO", "FEVEREIRO", "MARÇO", "ABRIL", "MAIO", "JUNHO", "JULHO", "AGOSTO", "SETEMBRO", "OUTUBRO", "NOVEMBRO", "DEZEMBRO"};
    printf("Digite um mês do ano e descubra quantos dias ele tem:");
    scanf("%d", &numero_digitado);

    if (numero_digitado - 1 == FEVEREIRO)
    {
        printf("%s tem 28 dias\n", printa_mes[numero_digitado - 1]);
    }
    else if (numero_digitado - 1 == ABRIL || numero_digitado - 1 == JUNHO || numero_digitado - 1 == SETEMBRO || numero_digitado - 1 == NOVEMBRO)
    {
        printf("%s tem 30 dias\n", printa_mes[numero_digitado - 1]);
    }
    else
    {
        printf("%s tem 31 dias\n", printa_mes[numero_digitado - 1]);
    }

    return 0;
} // main