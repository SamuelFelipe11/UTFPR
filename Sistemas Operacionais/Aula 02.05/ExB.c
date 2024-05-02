#include <mpi.h>
#include <stdio.h>
#include <string.h>
#define GERENTE 0

/*b) Modifique o exemplo para que o processo GERENTE responda para os processos trabalhadores: "Chama o bombeiro lá!".*/

int main(int argc, char **argv){
	int i, id , size ,len , tag = 666;
	char *enviado,recebido[50];
	
	
	MPI_Status stats; // Status da mensagem recebida
	MPI_Init (&argc , &argv);
	MPI_Comm_rank(MPI_COMM_WORLD , &id);
	MPI_Comm_size(MPI_COMM_WORLD , &size); 


	if(id == GERENTE){
		for(i = 1; i < size; ++i){
			enviado = "Chama o bombeiro lá!";
			MPI_Send(enviado, 50, MPI_CHAR, i, tag, MPI_COMM_WORLD);
		}
	}else{
		
		MPI_Recv(&recebido, 50, MPI_CHAR, GERENTE, tag, MPI_COMM_WORLD, &stats);
		printf("Mensagem recebida do processo %d: %s\n\n", id, recebido);
		
	}


	MPI_Finalize();
	return 0;
}
