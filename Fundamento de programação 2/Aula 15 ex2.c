#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie um programa de cadastro que receba, armazene, e
em seguida, exiba os dados de 5 pessoas.
 Cada pessoa possui: nome, idade, peso, data de nascimento,
brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
caso estrangeiro, armazene o passaporte.
 Regra: Utilize structs, typedef, union e enum.*/

typedef enum
{
  BRASILEIRO = 1,
  ESTRANGEIRO
} Nacionalidade;

typedef struct
{
  int dia;
  int mes;
  int ano;
} Data;

typedef struct
{
  char nome[21];
  int idade;
  float peso;
  Data nascimento;
  int nacionalidade;

  union
  {
    char cpf[18];
    char passaporte[10];
  } documento;

} Pessoa;

int main()
{
  Pessoa pessoas[5];
  printf("Digite os dados de 5 pessoas\n");
  for (int linha = 0; linha < 5; linha++)
  {

    printf("Nome da %d° pessoa (até 21 caracteres):", linha + 1);
    fgets(pessoas[linha].nome, 20, stdin);
    pessoas[linha].nome[strcspn(pessoas[linha].nome, "\n")] = '\0';

    printf("Digite a idade da %d° pessoa:", linha + 1);
    scanf("%d", &pessoas[linha].idade);

    printf("Digite o peso da %d° pessoa:", linha + 1);
    scanf("%f", &pessoas[linha].peso);
    setbuf(stdin, NULL);

    printf("Digite a data de nascimento da %d° pessoa\n", linha + 1);
    printf("Dia:");
    scanf("%d", &pessoas[linha].nascimento.dia);
    printf("Mês:");
    scanf("%d", &pessoas[linha].nascimento.mes);
    printf("Ano:");
    scanf("%d", &pessoas[linha].nascimento.ano);

    printf("Qual a nacionalidade da %d° pessoa?\nDigite 1 para brasileiro e 2 para estrangeiro:", linha + 1);
    scanf("%d", &pessoas[linha].nacionalidade);

    setbuf(stdin, NULL);

    if (pessoas[linha].nacionalidade == 1)
    {
      printf("Digite o CPF da %d° pessoa (XXX.XXX.XXX-XX):", linha + 1);
      fgets(pessoas[linha].documento.cpf, 16, stdin);
      pessoas[linha].documento.cpf[strcspn(pessoas[linha].documento.cpf, "\n")] = '\0';
    }
    else
    {
      printf("Digite os 6 dígitos do passaporte da %d° pessoa (apenas números - XXXXXX):", linha + 1);
      fgets(pessoas[linha].documento.passaporte, 8, stdin);
      pessoas[linha].documento.passaporte[strcspn(pessoas[linha].documento.passaporte, "\n")] = '\0';

    } // if-else

  } // for

  for (int linha = 0; linha < 5; linha++)
  {
    printf("Dados da %d° pessoa --- ", linha + 1);
    printf(" Nome:%-10s|", pessoas[linha].nome);
    printf(" Idade:%-10d|", pessoas[linha].idade);
    printf(" Peso:%-10.3f|", pessoas[linha].peso);
    printf(" Data de nascimento: %d/%d/%d|", pessoas[linha].nascimento.dia, pessoas[linha].nascimento.mes, pessoas[linha].nascimento.ano);

    if (pessoas[linha].nacionalidade == 1)
    {
      printf(" Nacionalidade: brasileiro|");
      printf(" CPF: %-10s|\n", pessoas[linha].documento.cpf);
    }
    else
    {
      printf(" Nacionalidade: estrangeiro|");
      printf(" Passaporte: %-s|\n", pessoas[linha].documento.passaporte);
    } // if-else

  } // for
  return 0;
} // main