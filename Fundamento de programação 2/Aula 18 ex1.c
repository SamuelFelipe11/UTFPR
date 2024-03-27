#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*4) Faça uma função recursiva que retorne o n-ésimo termo da sequência de
Fibonacci, sendo que n é recebido por parâmetro. Utilize essa função para
desenvolver um programa que mostre no main() os n termos dessa
sequência na tela, a partir do valor de n recebido pelo teclado. Sabe-se que
o 1º termo é 0 e o 2º termo é 1. */

int calcula_fibonacci(int numero)
{
    int fibonacci = 0;
    fibonacci += numero;

    if (fibonacci == 1)
    {
        return 0;
    }
    else if (fibonacci == 2)
    {
        return 1;
    }
    else
    {
        return calcula_fibonacci(numero - 1) + calcula_fibonacci(numero - 2);
    } // if-else
  
} // void

int main()
{
    int numero_digitado;
    int fibonacci;

    printf("Digite o enésimo termo de fibonacci:");
    scanf("%d", &numero_digitado);

    while (numero_digitado < 0)
    {
        setbuf(stdin, NULL);
        printf("Número inválido, por favor, digite um valor maior ou igual a 0:");
        scanf("%d", &numero_digitado);
    } // while

    fibonacci = calcula_fibonacci(numero_digitado);

    for(int i = 0; i <= numero_digitado; i++){
        printf("%d ", calcula_fibonacci(i));
    }

    printf("O %d° termo na sequencia de fibonacci é %d\n", numero_digitado, fibonacci);

    return 0;
}