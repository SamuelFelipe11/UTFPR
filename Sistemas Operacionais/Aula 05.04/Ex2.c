#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>


/*O status passado como parâmetro à função wait(&status) é, na verdade, o mecanismo de retorno de resultado do wait/waitpid. Ao retornar, esta variável contém informações sobre o resultado da execução do processo filho. Por exemplo, se um processo terminou normalmente (i.e., chamou exit), o comando WIFEXITED(status) retorna true. Este comando retorna false se o processo foi abortado (e.g., segmentation fault) ou morto (e.g., kill). Investigue no manual do wait no Linux (man wait) o funcionamento do comando WEXITSTATUS(status), e use-o para modificar o exercício anterior para calcular o 5!, sendo que cada processo pode executar apenas uma multiplicação.*/


int main(){

	int pidpai, pidneto, status, resultado;
	
	pidpai = fork();
	if(pidpai == 0){pidneto = fork();}
	
	if(pidpai < 0){
		printf("Deu erro no processo pai\n");

	}else if(pidpai == 0){
		
		pidneto = fork();
		if(pidneto < 0){
			printf("Deu erro no processo neto\n");
		}else if(pidneto == 0){

			exit(5*4);
			
		}else if(pidneto > 0){
			wait(&status);
			int resultado_neto = WEXITSTATUS(status);
			exit(resultado_neto*3);
		}		
		
	}else if(pidpai>0){
		wait(&status);
		resultado = WEXITSTATUS(status) * 2;
		printf("RESULTADO: %d\n", resultado);
	}else{
		printf("Deu zica\n");
	}
	
	return 0;
	
}
