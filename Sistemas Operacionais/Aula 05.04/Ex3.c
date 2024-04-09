#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <string.h>

/*Elabore um mini SHELL LINUX. Seu mini shell deverá contemplar as funcionalidades semelhantes aos seguintes  comandos:

ls: Lista todos os arquivos do diretório
ps: mostra uma série de informações sobre os processos
cd: Acessa uma determinada pasta (diretório)
mkdir: Cria um diretório
rm: Remove um arquivo/diretório
cat: mostra o conteúdo de um arquivo
Ifconfig: mostra informações do dispositivo de redes e ip
Porém o seu SHELL deverá conter comandos mais simples (de fácil entendimento para leigos) que os apresentados acima. Ficará a cargo de vocês discutir, planejar e elaborar estes comandos.

OBS: cada comando oferece uma série de possibilidades de argumentos e subfunções. Discuta com seu parceiro(a) as funcionalidades mais relevantes a ser implementadas por cada comando. A nota será atribuída a partir da comparação entre as duplas, ou seja, obterão  maior nota quem implementar mais funcionalidades para cada comando.

OBS2: Crie um comado chamado socorro para exibir todos os comandos implementados no seu shell.*/


int main(){
	int opcao;
	char nome_diretorio[100];
	do{
	
	printf("1 - listar os arquivos do diretório\n2 - cria um diretório\n3 - remove um arquivo/diretório\n");
	scanf("%d", &opcao);



		switch(opcao)
		{
		case 1:
			execl("/bin/ls", "-l", NULL);
		break;
		case 2:
			
			printf("Digite o nome do diretório: ");
			fgets(nome_diretorio, 100, stdin);
			nome_diretorio[strcspn(nome_diretorio, "\n")] = '\0';
			execl("mkdir", "%s", nome_diretorio, NULL);		
		break;
		case 3:

			printf("Digite o nome do diretório: ");
			fgets(nome_diretorio, 100, stdin);
			nome_diretorio[strcspn(nome_diretorio, "\n")] = '\0';
			execl("rm", "%s", nome_diretorio, NULL);	
		break;
		
		}
		
	}while(opcao != 0);
	return 0;
	
}
