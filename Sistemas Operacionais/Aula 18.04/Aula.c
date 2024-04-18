#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	key_t k = ftok("/sys", 'A');
	int SHM_ID = shmget(k, 1024, 0666|IPC_CREAT);
	char *data;
	data = (char*)shmat(SHM_ID, (void*)0, 0);
	
	if((argc > 1) && !strcasecmp(argv[1], "APAGAR")){
		shmdt(data);
		shmctl(SHM_ID, IPC_RMID, 0);
		printf("DADOS APAGADOS\n");
		return 0;	
	}else if(argc > 1){
		strncpy(data, argv[1], 1024);	
		printf("DATA = %s\n", data);
	}else{
		printf("SHM %s\n", data);
	}
	
	return 0;

}
