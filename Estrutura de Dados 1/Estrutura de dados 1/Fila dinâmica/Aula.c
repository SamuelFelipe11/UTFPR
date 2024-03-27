#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct pessoa{
    int id;
    char nome[50];
    struct pessoa *prox;
}OBJETO;

typedef struct filaDinamica{
    OBJETO *ini;
    OBJETO *fim;
    int qtdeElem;
}FILA;

//====================== verificações ===============================
void inicializaFila(FILA* f){
    f->qtdeElem = 0;
    f->fim = f->ini = NULL;
}//fim função

bool estaVazia(FILA* f){
    return(f->qtdeElem==0);
}//fim função

int qtdeElementos(FILA* f){
    return(f->qtdeElem);
}//fim função
//===================================================================

void insereElemento(FILA* f, char nome[], int id){
    OBJETO *aux = NULL;
    aux = (OBJETO*)malloc(sizeof(OBJETO));
    aux->id = id;
    strcpy(aux->nome, nome);
    aux->prox = NULL;
    
    if(estaVazia(f) == true){
        f->ini = f->fim = aux;
    }else{
        f->fim->prox = aux;
        f->fim = aux;
    }

        f->qtdeElem++;
    
}//fim função



void exibeFila(FILA f){
    OBJETO* aux = f.ini;
    while(aux != NULL){
        printf("NOME: %s || ID: %d\n", aux->nome, aux->id);
        aux = aux->prox;
    }
}//fim função

void destroiFila(FILA* f){
    OBJETO* aux = f->ini; 
    while(aux != NULL){
        f->ini = f->ini->prox;
        free(aux);
        aux = f->ini;
    }

        f->qtdeElem = 0;
        f->fim = NULL; //(caso eu vá reutilizar a fila)
}//fim função

int main(){
    FILA f;
    inicializaFila(&f);
    estaVazia(&f);
    insereElemento(&f, "Samuel", 2453304);
    insereElemento(&f, "Felipe", 2453304);
    insereElemento(&f, "Ryelli", 2453304);
    insereElemento(&f, "Tamara", 2453304);
    exibeFila(f);

    destroiFila(&f);


    inicializaFila(&f);
    insereElemento(&f, "RAFAEL", 2453304);
    insereElemento(&f, "BALA", 2453304);
    insereElemento(&f, "TAMARA", 2453304);


    exibeFila(f);

    return EXIT_SUCCESS;
}