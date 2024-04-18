#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void soma(int matriz[][3])
{

    for (int linha = 0; linha < 5; linha++)
    {
        matriz[linha][2] = matriz[linha][0] + matriz[linha][1];
 
    } // for

} // void


void exibe_tabela(char nomes[][21], int matriz[][3]){
  for(int linha = 0; linha < 5; linha++){
   printf("%10s|%10d|%10d|%10d", nomes[linha], matriz[linha][0], matriz[linha][1], matriz[linha][2]);
   printf("\n");
  }//for

}//void


void busca_nome(char nomes[][21], int matriz[][3]){
   char cidade[21];
   int contador = 0;
   printf("Digite a cidade a ser pesquisada:");
   fgets(cidade, 21, stdin);
   cidade[strcspn(cidade, "\n")] = '\0';
   setbuf(stdin, NULL);

   for(int linha = 0; linha < 5; linha++){
     if(strcasecmp(nomes[linha], cidade) == 0){
        printf("A cidade está na lista, aqui estão seus dados\n");
        printf("Nome:%s\nServidores ativos:%d\nServidores inativos:%d\nTotal de servidores:%d\n", nomes[linha], matriz[linha][0], matriz[linha][1], matriz[linha][2]);
     }else{
        contador++;
        }//if-else
   }//for

   if(contador == 5)
   printf("Esta cidade não esta na lista\n");

}//void


void maior_percentual(char nomes[][21], int matriz[][3]){
  int maior = 0;
  int salvalinha;
  float porcentagem;
  for(int linha = 0; linha < 5; linha++){
    if(matriz[linha][1] > maior){
        maior = matriz[linha][1];
        salvalinha = linha;
    }//for
  }//for
 
porcentagem = (maior * 100) / matriz[salvalinha][2];

printf("\nA cidade com maior número de servidores problemáticos é %s, com %.2f porcento de seus servidores comprometidos\n", nomes[salvalinha], porcentagem);

}//void


void calcula_percentual(char nomes[][21], int matriz[][3]){
 float percentual_ativo = 0;
 float percentual_inativo = 0;
 float percentual_total = 0;

 for(int linha = 0; linha < 5; linha++){
    percentual_ativo += matriz[linha][0];
    percentual_inativo += matriz[linha][1];
    percentual_total += matriz[linha][2];

 }//for

 percentual_ativo = (percentual_ativo * 100) / percentual_total;
 percentual_inativo = (percentual_inativo * 100) / percentual_total;

 printf("\nO percentual de servidores ativos é %.2f%, já o de servidores inativos é de %.2f%\n", percentual_ativo, percentual_inativo);
}//void


void concatena(char nomes[][21], int matriz[][3]){
   printf("\n");
   for(int linha = 0; linha < 5; linha++){
    if(matriz[linha][1] > matriz[linha][0])
   strcat(nomes[linha], "DEFEATED");
   
   printf("%s\n", nomes[linha]);
   }//for
  
  
}//void



int main()
{
    char nomes[5][21];
    int matriz[5][3];

    printf("Digite os dados das 5 cidades afetadas\n");

    for (int linha = 0; linha < 5; linha++)
    {

        printf("Nome da %d cidade:", linha + 1);
        fgets(nomes[linha], 21, stdin);
        nomes[linha][strcspn(nomes[linha], "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Quantidade de servidores ativos da %d cidade:", linha + 1);
        scanf("%d", &matriz[linha][0]);
        setbuf(stdin, NULL);

        while (matriz[linha][0] < 0)
        {
            printf("Valor inválido, por favor, digite um valor positivo:");
            scanf("%d", &matriz[linha][0]);
            setbuf(stdin, NULL);
        } // while

        printf("Quantidade de servidores inativos da %d cidade:", linha + 1);
        scanf("%d", &matriz[linha][1]);
        setbuf(stdin, NULL);

        while (matriz[linha][1] < 0)
        {
            printf("Valor inválido, por favor, digite um valor positivo:");
            scanf("%d", &matriz[linha][1]);
            setbuf(stdin, NULL);
        } // while

    } // for
    printf("\n");

    soma(matriz);
    exibe_tabela(nomes, matriz);
    busca_nome(nomes, matriz);
    maior_percentual(nomes, matriz);
    calcula_percentual(nomes, matriz);
    concatena(nomes, matriz);


    return 0;
} // void