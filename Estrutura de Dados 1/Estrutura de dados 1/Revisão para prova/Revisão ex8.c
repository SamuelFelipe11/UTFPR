#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*8) Elabore uma função que receba por parâmetros os coeficientes de uma equação do segundo grau.
Em seguida, calcule e mostre as raízes dessa equação. Lembre-se de que as raízes são calculadas como



em que ∆ = b² – 4 * a * c e ax² +bx + c= 0 representa uma equação do segundo grau.
A variável a tem de ser diferente de zero.
Caso seja igual, imprima a mensagem “Não é equação de segundo grau” e retorne o valor −1.
Do contrário, retorne o número de raízes e as raízes (por referência) se elas existirem:

    • Se ∆ < 0, não existe real. Número de raízes: 0.
    • Se ∆ = 0, existe uma raiz real. Número de raízes: 1.
    • Se ∆ > 0, existem duas raízes reais. Número de raízes: 2*/

void calcula_raiz(float *a, float *b, float *c, int *num_raizes, float *raizes)
{
    if ((*a) < 0)
    {
        printf("Nao eh equacao do segundo grau\n");
        (*num_raizes) = 0;
    }
    else
    {
        float delta = pow((*b), 2) - 4 * (*a) * (*c);
        if (delta < 0)
        {
            printf("Nao existe raizes reais\n");
            (*num_raizes) = 0;
        }
        else if (delta == 0)
        {
            printf("Existe uma raiz real\n");
            (*num_raizes) = 1;
            raizes[0] = (-(*b) + sqrt(delta)) / 2 * (*a);
        }
        else
        {
            printf("Existem duas raizes reais\n");
            (*num_raizes) = 2;
            raizes[0] = (-(*b) + sqrt(delta)) / 2 * (*a);
            raizes[1] = (-(*b) - sqrt(delta)) / 2 * (*a);
        } // if-else
    }

} // função

int main()
{
    float a, b, c;
    int num_raizes;
    float raizes[2] = {-1, -1};

    printf("Digite os coeficientes da funçao do segundo grau (A, B e C) e descubra suas raizes\n");
    printf("A:");
    scanf("%f", &a);
    printf("B:");
    scanf("%f", &b);
    printf("C:");
    scanf("%f", &c);

    calcula_raiz(&a, &b, &c, &num_raizes, raizes);

    printf("Numero de raizes: %d\n", num_raizes);
    if (raizes[0] != -1)
        printf("Raiz: %.2f\n", raizes[0]);

    if (raizes[1] != -1)
        printf("Raiz: %.2f\n", raizes[1]);

    return 0;
} // main