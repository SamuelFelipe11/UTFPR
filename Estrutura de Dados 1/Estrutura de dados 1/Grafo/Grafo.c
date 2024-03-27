#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct grafoMa{
    int **matriz;
    int vertices;
    bool digrafo; //se sim true, caso contrário false

}GrafoMatriz;


void inicializa(GrafoMatriz *grafo, int N, bool eh_digrafo){
    grafo->vertices = N;
    grafo->digrafo = eh_digrafo;

    grafo->matriz = (int**)malloc(N*sizeof(int*));
    for (int i = 0; i < N; i++)
    {
        grafo->matriz[i] = (int)malloc(N*sizeof(int*));
        for (int j = 0; j < N; j++)
        {
            grafo->matriz[i][j] = 0;
        }
        
    }
    
}


void destroiGrafo(GrafoMatriz *grafo){


}

void conectaAresta(GrafoMatriz *grafo, int v1, int v2, int peso){
    grafo->matriz[v1][v2] = peso;
    if(grafo->digrafo == true) grafo->matriz[v2][v1] = peso;
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


    destroiGrafo(&grafo);

    return EXIT_SUCCESS;
}