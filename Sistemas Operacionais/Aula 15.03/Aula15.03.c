#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

char *msg;
int contador = 0;

void myprintf(char *msg, int second){
	alarm(second);
	pause();
}

void handler(int signum){

	write(1, msg, strlen2(msg));

}


int strlen2(char *msg){
	int len = 0;
	while(msg[len] != '\0')
		len++;
		
	return len;
}

void sair(){
	contador++;
	
	if(contador == 3)
		exit(1);
	
}

int main(){
	signal(SIGALRM, handler);
	signal(SIGTSTP, sair);

	msg = (char *)malloc(50*sizeof(char));
	read(0,msg, 50*sizeof(char));
	
	do{	
		myprintf(msg, 3);
		
	}while(1);
	
	return 0;
}
