#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*2) Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.
Dica: Procure pelo algoritmo BubbleSort no Google*/

typedef struct
{
    char nome[21];
    char esporte[21];
    int idade;
    float altura;
} Atleta;

void BubbleSort(Atleta *atleta)
{
    int tamanho = 5;
    int aux, i, j;
    for (j = tamanho - 1; j >= 1; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (atleta[i].idade > atleta[i + 1].idade)
            {
                aux = atleta[i].idade;
                atleta[i].idade = atleta[i + 1].idade;
                atleta[i + 1].idade = aux;
            }
        }
    }

    for (int linha = 4; linha >= 0; linha--)
    {
        printf("%d\n", atleta[linha].idade);
    }

} // void

int main()
{
    Atleta atleta[5];

    for (int linha = 0; linha < 5; linha++)
    {
        printf("Digite o nome do %d° atleta:", linha + 1);
        fgets(atleta[linha].nome, 21, stdin);
        atleta[linha].nome[strcspn(atleta[linha].nome, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digiteo esporte que o %d° atleta pratica:", linha + 1);
        fgets(atleta[linha].esporte, 21, stdin);
        atleta[linha].esporte[strcspn(atleta[linha].esporte, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Digite a idade do %d° atleta:", linha + 1);
        scanf("%d", &atleta[linha].idade);
        setbuf(stdin, NULL);

        printf("Digite a altura do %d° atleta:", linha + 1);
        scanf("%f", &atleta[linha].altura);
        setbuf(stdin, NULL);
    } // for

    BubbleSort(atleta);

    return 0;
}