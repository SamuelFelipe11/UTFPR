#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*7) Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros.
Essa função deve retornar, por referência, dois valores: a soma dos números pares e ímpares.*/

void somas(int tamanho, int *vetorN, int *somapar, int *somaimpar)
{
    printf("%d", tamanho);
    for (int linha = 0; linha <= tamanho; linha++)
    {
        if (vetorN[linha] % 2 == 0)
        {
            (*somapar) += vetorN[linha];
        }
        else
        {
            (*somaimpar) += vetorN[linha];
        } // if-else
    }     // for
} // void

int main()
{
    int somapar = 0;
    int somaimpar = 0;
    int vetorN[10] = {2, 7, 9, 1, 92, 24, 56, 0, 86, 43};
    int tamanho = 10;

    somas(tamanho, vetorN, &somapar, &somaimpar);

    printf("Soma dos pares: %d\n", somapar);
    printf("Soma dos impares: %d\n", somaimpar);

    return 0;
}