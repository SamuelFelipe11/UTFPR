#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*0) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica.
Ou seja:



Escreva uma função recursiva que calcule o valor de qualquer Hn.*/
float calculaHn(int n)
{
    printf("%d\n", n);
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 1 / n + calculaHn(n - 1);
    } // if-else
} // função

int main()
{
    int n;
    float resultado;
    printf("Digite o n-ésimo termo da serie harmonica para calcular o valor de Hn:");
    scanf("%d", &n);

    resultado = calculaHn(n);

    printf("O resultado eh: %.2f", resultado);

    return 0;
}