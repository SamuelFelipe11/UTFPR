#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int pid, status;	
	
	pid  =	fork();	
	
	if(pid == 0){
		printf("Eu sou o processo Filho, meu pid é %d\n", getpid());
		
		exit(10);
		
	}else if(pid > 0){
		printf("Eu sou o processo Pai, meu pid é %d\n", getpid());
		
		wait(&status);
		
		if(WIFEXITED(status)){
			printf("O processo filho executou normalmente\n");
			printf("Status de saída: %d\n", WEXITSTATUS(status));
		}
	
		if(WIFSIGNALED(status))
			printf("O processo filho foi encerrado por um kill\n");
	
	}else{
		printf("\nDeu erro");
	}
	
	
	return 0;
}
