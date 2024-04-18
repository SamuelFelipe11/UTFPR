#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

char *msg;


int strlen2(char *msg){
	int len = 0;
	while(msg[len] != '\0')
		len++;
		
	return len;
}


void myprintf(int x, int y, char* msg){
 

    int size = strlen2(msg);
    char msg2[11];
    strcpy(msg2,"\033[ B\033[ C");   
    
    
    msg2[2]= x + '0';
    msg2[6]= y + '0';

    write(1, msg2, strlen2(msg2));   
    write(1, msg, strlen2(msg));
}


int main(){

	msg = (char *)malloc(50*sizeof(char));
	read(0,msg, 50*sizeof(char));
	
	
	myprintf(5, 3, msg);
	
	return 0;
}
