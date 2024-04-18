#include <stdio.h>
#include <stdlib.h>

int calculaexpoente(int base, int expoente)
{
    if (expoente == 1)
    {
        return base;
    }
    else
    {
        expoente--;
        return base*= calculaexpoente(base, expoente);
    }

}//função

int main()
{
    int x;
    int y;
    int resultado;

    printf("## CALCULADORA DE EXPONENCIAIS ##\n");

    do
    {
        setbuf(stdin, NULL);
        printf("Digite o valor da base (>0):");
        scanf("%d", &x);
    } while (x <= 0);

    do
    {
        setbuf(stdin, NULL);
        printf("Digite o valor do expoente (>0):");
        scanf("%d", &y);
    } while (y <= 0);

    resultado = calculaexpoente(x, y);

    printf("\n%d^%d=%d", x, y, resultado);

    return 0;
}