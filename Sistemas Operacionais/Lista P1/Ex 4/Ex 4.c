#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>


/*Excrever um programa C que cria uma árvore de 3 processos, onde o processo A faz um fork() criando um processo B, o processo B, por sua vez, faz um fork() criando um processo C. Cada processo deve exibir uma mensagem "Eu sou o processo XXX, filho de YYY", onde XXX e YYY são PIDs de processos. Utilizar wait() para garantir que o processo C imprima sua resposta antes do B, e que o processo B imprima sua resposta antes do A. Utilizar sleep() (man 3 sleep) para haver um intervalo de 1 segundo entre cada mensagem impressa.*/


int main(){

	int pidpai, pidneto, status;
	
	pidpai = fork();
	
	if(pidpai < 0){
		printf("Deu erro no processo pai\n");

	}else if(pidpai == 0){
	
		pidneto = fork();
		
		if(pidneto < 0){
			printf("Deu erro no processo neto\n");
		}else if(pidneto == 0){
			printf("Eu sou o processo NETO %d, filho do processo %d\n", getpid(), getppid());
			sleep(3);
		}else if(pidneto > 0){
			wait(&status);
			printf("Eu sou o processo PAI %d, filho do processo %d\n", getpid(), getppid());
			sleep(3);	
		}
		
	}else if(pidpai>0){
		wait(&status);
		printf("Eu sou o processo AVO %d\n", getpid());
	}else{
		printf("Deu zica\n");
	}
	
	

	return 0;
	
}
