#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura.
Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

typedef struct
{
    char nome[21];
    char esporte[21];
    int idade;
    float altura;
} Atleta;

void calcula_maior(Atleta *atleta)
{
    int salva_maior = 0;
    int salva_maisvelho = 0;

    for (int linha = 1; linha < 5; linha++)
    {
        if (atleta[salva_maior].altura < atleta[linha].altura)
        {
            salva_maior = linha;
        } // if-else

        if (atleta[salva_maisvelho].idade < atleta[linha].idade)
        {
            salva_maisvelho = linha;
        } // if-else
    }     // for

    printf("O maior atleta é %s com %.2f de altura\n", atleta[salva_maior].nome, atleta[salva_maior].altura);
    printf("O atleta mais velho é %s com %d anos\n", atleta[salva_maisvelho].nome, atleta[salva_maisvelho].idade);
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

    calcula_maior(atleta);

    return 0;
}