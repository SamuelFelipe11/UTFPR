#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define NaoVisitado 0
#define Visitado    1
#define NoFinal     2

//======== GRAFOS ===========
typedef struct grafoM{
    int  **matriz;
    int  vertices;
    bool digrafo; // se sim true, caso contrário false
}GrafoMatriz;

//============== FILAS ===============
typedef struct no{
    int id;
    struct no *prox;
}OBJETO;

typedef struct filaDinamica {
    OBJETO *ini;
    OBJETO *fim;
    int qtdeElem;
}FILA;


//========================= FILAS =========================================================
void inicializaFila(FILA *f){
    f->qtdeElem=0;
    f->fim = f->ini = NULL;
}

bool estaVazia(FILA *f){
    return(f->qtdeElem==0);
}

int qtdeElementos(FILA *f){
    return(f->qtdeElem);
}

void insereElemFila(FILA *f, int id){
    OBJETO *aux=NULL;
    //alocando memoria para um novo objeto (pessoa)
    aux = (OBJETO*) malloc(sizeof(OBJETO));
    aux->id = id;
    aux->prox = NULL;

    //inserir o novo objeto na fila
    if(estaVazia(f)==true){
        f->ini=f->fim=aux;
    }
    else{
        f->fim->prox = aux;
        f->fim = aux;
    }
    f->qtdeElem++;    
}

void destroiFila(FILA *f){
    OBJETO *aux=NULL;

    while(f->ini!=NULL){
        aux = f->ini;
        f->ini = aux->prox;
        free(aux);
    }
    f->qtdeElem=0;
    f->fim = NULL;
}

void imprimeElementosFila(FILA *f){
    for(OBJETO *aux=f->ini; aux!=NULL; aux=aux->prox){
        printf("\n[id=%d] ", aux->id);
    }
    printf("\n\n");
}

OBJETO removerElemento(FILA *f){
    OBJETO *aux;
    OBJETO copia;

    if(estaVazia(f)== true){
        copia.id=-1;
        return copia;
    }

    aux=f->ini;
    f->ini = f->ini->prox;
    //copia das informacoes do primeiro elemento
    copia.id=aux->id;
    free(aux);
    f->qtdeElem--;

    return(copia);

}

//========================================================================================    









//============================ GRAFOS ========================================================


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

void visita(GrafoMatriz *grafo, int *status, char *arv, int vi){
    status[vi]=Visitado;
    
    for(int i=0; i<grafo->vertices; i++){
        if(grafo->matriz[vi][i]>0){
            if(status[i]==NaoVisitado){
                sprintf(arv,"%s (%d - %d)\n",arv, vi, i);
                visita(grafo, status, arv, i);
            }
        }
    }
    status[vi]=NoFinal;
}

void buscaProfundidade(GrafoMatriz *grafo, int vi){ //vi eh o vertice inicial da busca
    int *statusVisita;    
    char arvoreProfundidade[100]="";
    statusVisita = (int *) malloc(grafo->vertices * (sizeof(int)));
    for(int i=0; i < grafo->vertices; i++){
        statusVisita[i]=NaoVisitado;
    }

    visita(grafo, statusVisita, arvoreProfundidade, vi); //melhorar isso para grafo com floresta de busca em profundidade
    printf("\n\n Sequencia de Arestas da Arvore de Busca em Profundidade \n%s", arvoreProfundidade);
    free(statusVisita);
}



void buscaLargura(GrafoMatriz *grafo, int vi){
    FILA fila;
    OBJETO aux;
    inicializaFila(&fila);
    int* ordemVisitados = (int*)malloc(grafo->vertices * sizeof(int));
    int ordem = 0;

    for(int i = 0; i < grafo->vertices; i++) ordemVisitados[i] = NaoVisitado;

    ordemVisitados[vi] = ++ordem;
    insereElemFila(&fila, vi);

    while(estaVazia(&fila) == false){
        aux = removerElemento(&fila);
        ++ordem;
        for(int i = 0; i < grafo->vertices; i++){
            if(grafo->matriz[aux.id][i] > 0 && ordemVisitados[i] == NaoVisitado){
                ordemVisitados[i] = ordem;
                insereElemFila(&fila, i);
            }
        }
    }

    printf("======================================================");
    for (int i = 0; i < grafo->vertices; i++)
    {
        printf("\nNo = %d / / / ordem = %d", i, ordemVisitados[i]);
    }
    printf("\n======================================================\n");
    

    free(ordemVisitados);
    destroiFila(&fila);
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

    //buscaProfundidade(&grafo, 4);

    buscaLargura(&grafo, 4);

    destroiGrafo(&grafo);

    return EXIT_SUCCESS;
}