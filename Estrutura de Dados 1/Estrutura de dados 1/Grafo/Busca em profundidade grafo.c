#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NaoVisitado 0
#define visitado    1
#define NoFinal     2

typedef struct grafoM{
    int  **matriz;
    int  vertices;
    bool digrafo; // se sim true, caso contrário false
}GrafoMatriz;

void inicializa(GrafoMatriz *grafo, int N, bool eh_digrafo){
    grafo->vertices = N;
    grafo->digrafo = eh_digrafo;

    grafo->matriz=(int**) malloc(N*sizeof(int*));
    for(int i=0; i<N; i++){
         grafo->matriz[i]= (int*) malloc(N*sizeof(int));
         for(int j=0; j<N; j++){
            grafo->matriz[i][j]=0;
         }
    }
}

void destroiGrafo(GrafoMatriz *grafo){
    for(int i=0; i<grafo->vertices; i++)
        free(grafo->matriz[i]);
    free(grafo->matriz);
}

void conectaAresta(GrafoMatriz *grafo, int v1, int v2, int peso){
    grafo->matriz[v1][v2]=peso;
    if(grafo->digrafo==false)  grafo->matriz[v2][v1]=peso;
}

void visita(GrafoMatriz *grafo, int *status, int *ordem, int ini){
    status[ini] = visitado;
    
    for (int i = 0; i < grafo->vertices; i++)
    {
        if(ordem[i] == -1){
            ordem[i] = ini;
            break;
        }
    }
    
    for(int i = 0; i < grafo->vertices; i++){
        if(grafo->matriz[ini][i]>0){
            if(status[i] == NaoVisitado){
                visita(grafo, status, ordem, i);
            }
        }
    }

    status[ini] = NoFinal;

}

void buscaProfundidade(GrafoMatriz *grafo){
    int *statusVisita;
    int *ordemVisita;
    ordemVisita = (int*)malloc(grafo->vertices*sizeof(int));
    statusVisita = (int*)malloc(grafo->vertices*sizeof(int));    
    
    for (int i = 0; i < grafo->vertices; i++)
    {
        statusVisita[i] = NaoVisitado;
        ordemVisita[i] = -1;
    }
    
    visita(grafo, statusVisita, ordemVisita, 3);

    free(ordemVisita);
    free (statusVisita);
}

int main(){
    GrafoMatriz grafo;

    inicializa(&grafo, 5, false);

    conectaAresta(&grafo, 0, 1, 1);
    conectaAresta(&grafo, 0, 2, 1);
    conectaAresta(&grafo, 0, 3, 1);
    conectaAresta(&grafo, 1, 2, 1);
    conectaAresta(&grafo, 2, 3, 1);
    conectaAresta(&grafo, 3, 4, 1);
    conectaAresta(&grafo, 2, 4, 1);

    buscaProfundidade(&grafo);

    destroiGrafo(&grafo);

    return EXIT_SUCCESS;
}