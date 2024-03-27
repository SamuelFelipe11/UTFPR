#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*[Arquivos] Fa ̧ca um programa que receba, por argumento na main, o nome de um arquivo texto. Crie
outro arquivo texto de sa ́ıda contendo o texto do arquivo de entrada original, por ́em substituindo todas
as vogais ‘a’ pelo caractere ‘*’ e as demais vogais por ‘+’. Al ́em disso, mostre na tela quantas linhas
esse arquivo possui. Dentro do programa fa ̧ca o controle de erros, isto  ́e, insira comandos que mostre se
os arquivos foram abertos*/

void preenchearquivo(FILE* arquivolido, FILE* arquivogerado, int* linhas){
    char c;
    
    while((c=fgetc(arquivolido)) != EOF){
    
    if(c == '\n'){
        linhas++;
    }
    
    if(c == 'a' || c == 'A'){
        c = '*';
    }else if(c == 'e' || c == 'E' || c == 'i' || c == 'I'|| c == 'o' || c == 'O'|| c == 'u' || c == 'U'){
        c = '+';
    }

    fputc(c, arquivogerado);
  }//while
}

int main(){
int linhas = 1;
FILE* arquivolido = fopen("Texto ex2.txt", "r");
FILE* arquivogerado = fopen("Arquivo de saida ex2.txt", "w");

if(arquivolido == NULL){
    printf("ERRO NA ABERTURA DO ARQUIVO\n");
    exit(1);
}

if(arquivogerado == NULL){
    printf("ERRO NA ABERTURA DO ARQUIVO\n");
    exit(1);
}

preenchearquivo(arquivolido, arquivogerado, &linhas);

    printf("O arquivo foi gerado com sucesso! Ele possui %d linhas\n", linhas);

    return 0;
}//main