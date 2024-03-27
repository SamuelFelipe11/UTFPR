#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*9) Faça uma função recursiva que calcule o valor da série S descrita a seguir para um valor n maior do
que zero a ser fornecido como parâmetro para ela:*/

float calculaelemento(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return (1 + pow(n, 2)) / n + calculaelemento(n - 1);
    } // if-else
} // void

int main()
{
    int n;
    float resultado;
    printf("Digite o valor de n para calcular a soma dos n primeiros elementos:");
    scanf("%d", &n);

    resultado = calculaelemento(n);

    printf("O resultado da soma eh: %.2f", resultado);

    return 0;
} // main
