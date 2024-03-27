#include <stdio.h>
#include <stdlib.h>

/*5) Crie um programa que gerencie um cadastro de materiais para obras disponíveis em um fornecedor. Cada material contém: nome (tamanho máximo 40 caracteres),
 quantidade (int) e preço (float) de no máximo 15 produtos. O programa deve possuir um menu para que o usuário do programa consiga manipular os cadastros.
 Nesse menu

a) Ao digitar (I), deve-se realizar inserção de um material na primeira posição que estiver livre;
b) Ao digitar (R), deve-se remover o material pelo índice (a ser fornecido pelo usuário );
c) Ao digitar (L), deve-se listar todos os cadastros não vazios;
d) Ao digitar (P), deve-se solicitar o nome de um material e exibir a quantidade e o preço;
e) Ao digitar (V), deve-se listar todos os produtos que tenham a quantidade igual a 0;
f) Ao digitar (S), deve sair do programa.*/

typedef struct
{
    char nome[41];
    int quantidade;
    float preco;
}
Materiais;

void insercao(Materiais* materiais)
{
    for (int linha = 0; linha < 15; linha++){
        printf("Nome do %d° material:", linha+1);
        fgets(materiais[linha].nome, 41, stdin);
        materiais[linha].nome[strcspn(materiais[linha].nome, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Quantidade do %d° material:", linha+1);
        scanf("%d", &materiais[linha].quantidade);
        setbuf(stdin, NULL);

        printf("Preço do %d° material:", linha+1);
        scanf("%f", &materiais[linha].preco);
        __fpurge(stdin);
    }//for
}//void

void remover(Materiais* materiais){


}//void


int main()
{
    Materiais materiais[15];
    char opcao;
    while (0 < 1)
    {
        printf("\nBem-vindo(a) ao gerenciador da Muriel construções! O que desejas fazer?\n");
        printf("Digite I para inserir um material\nDigite R para remover um material\nDigite L para obter a lista de materiais cadastrados\nDigite P para consultar as informações de um material\nDigite V para consultar os produtos zerados\nDigite S para sair\n");
        scanf("%c", &opcao);
        setbuf(stdin, NULL);

        switch (opcao)
        {

        case 'I':
        case 'i':
            insercao(materiais);
            break;

        case 'R':
        case 'r':
            remover(materiais);
            break;

        case 'L':
        case 'l':
            listar(materiais);
            break;

        case 'P':
        case 'p':
            consultar(materiais);
            break;

        case 'V':
        case 'v':
            zerados(materiais);

        case 'S':
        case 's':
            return 0;
            break;
*/
        default:
            printf("Opção inválida, por favor, digite uma letra que consta no menu\n");

        } // switch
    }     // while

    return 0;
}