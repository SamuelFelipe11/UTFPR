#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Você foi contratado pela Riot Games para elaborar partes do sistema sistema de Ranking do League of Legends. Para isso:

a) Defina um tipo e estrutura para salvar os dados de jogadores para um Ranking.
Cada jogador possui: nome, vitórias, derrotas, tier(nível) e pontos.

Os tiers são: Bronze, Prata, Ouro, Platina, Diamante e Desafiante. Para organizar os níveis utilize uma enumeração.

b) Receba do teclado e armazene os dados de 6 jogadores. Não devem ser permitidos valores negativos, novos valores devem ser solicitados caso necessário.

c) Exiba uma tabela alinhada com o nome e a taxa de vitórias (winrate) de cada jogador
  winrate = vitórias / (vitórias+derrotas) * 100.
  Cada calculo deve ser feito por meio de uma função adicional que recebe o número de vitórias e derrotas via cópia e retorna o winrate.

d) Exiba uma tabela com os líderes (maior número de pontos) de cada um dos níveis. 
Para isso, faça uma função extra que receba um tier e retorne uma estrutura do tipo Jogador com os dados do líder.

e) Faça a busca de um jogador pelo nome digitado. 
A busca deve ser feita por uma função adicional que recebe o nome e retorna os dados de vitórias, derrotas, tier e pontos via referência.

f) Utilizando uma função recursiva, calcule a soma de todas as partidas (vitórias e derrotas) de todos os jogadores.

Cada um dos itens de B a E deve ser implementada em uma função diferente.
Não é permitido o uso de variáveis globais.
Nas funções extras, caso necessário, utilize parâmetros adicionais.

Texto de resposta*/
typedef enum{BRONZE=1, PRATA, OURO, PLATINA, DIAMANTE, DESAFIANTE}Elos;

typedef struct{
  int elos = -1;

  char nome[21];
  int vitorias;
  int derrotas;
  int pdls;
}Jogador;

void preencheEstrutura(Jogador* jogador){
  
     printf("Digite os dados de 6 jogadores\n");

     for(int linha = 0; linha < 6; linha++){

    printf("JOGADOR %d\n", linha+1);
     printf("Nome:");
     fgets(jogador[linha].nome, 21, stdin);
     jogador[linha].nome[strcspn(jogador[linha].nome, "\n")] = '\0';
     setbuf(stdin, NULL);

     printf("Quantidade de vitórias:");
     scanf("%d", &jogador[linha].vitorias);
     setbuf(stdin, NULL);

         while(jogador[linha].vitorias<0){
       setbuf(stdin, NULL);
       printf("Quantidade invalida, por favor, digite um valor maior ou igual a 0:");
       scanf("%d", &jogador[linha].vitorias);
     }//while

     printf("Quantidade de derrotas:");
     scanf("%d", &jogador[linha].derrotas);
     setbuf(stdin, NULL);


         while(jogador[linha].derrotas<0){
       setbuf(stdin, NULL);
       printf("Quantidade invalida, por favor, digite um valor maior ou igual a 0:");
       scanf("%d", &jogador[linha].derrotas);
     }//while

     printf("Qual o elo do jogador? Digite 1 para bronze, 2 para prata, 3 para ouro, 4 para platina, 5 para diamante e 6 para desafiante:");
     scanf("%d", &jogador[linha].elos);
     setbuf(stdin, NULL);


        while(jogador[linha].elos<0){
       setbuf(stdin, NULL);
       printf("Quantidade invalida, por favor, digite um valor maior ou igual a 0:");
       scanf("%d", &jogador[linha].elos);
     }//while
     
     printf("Quantos pdls ele tem?:");
     scanf("%d", &jogador[linha].pdls);
     setbuf(stdin, NULL);


     while(jogador[linha].pdls<0){
       setbuf(stdin, NULL);
       printf("Quantidade invalida, por favor, digite um valor maior ou igual a 0:");
       scanf("%d", &jogador[linha].pdls);
     }//while

     }//for

}

float calculaWinrate(int vitorias, int derrotas){
      return ((float)vitorias/(vitorias + derrotas))*100;
}//função


void tabelaWinrate(Jogador* jogador){
    for(int linha = 0; linha < 6; linha++){
     float winrate = calculaWinrate(jogador[linha].vitorias, jogador[linha].derrotas);
      printf("Nome: %20s|| Winrate: %20.2f%\n",jogador[linha].nome, winrate);
    }
}//void



void tabelalideres(Jogador* jogador){
 for(int linha = 0; linha < 4; linha++){
    //calculaLider(jogador[linha].pdls, jogador[linha+1].pdls);
 }//for

}//void


int main(){
Jogador jogador[6];
preencheEstrutura(jogador);
tabelaWinrate(jogador);
tabelalideres(jogador);


    return 0;
}