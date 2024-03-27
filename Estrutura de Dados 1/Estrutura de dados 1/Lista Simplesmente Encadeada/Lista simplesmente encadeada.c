#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct objeto{
    int id;
    struct objeto* prox;
}OBJETO;

typedef struct lista{
    int qtdeElem;
    OBJETO* ini;
}LISTA;


void inicializaLista(LISTA* l){
    l->qtdeElem = 0;
    l->ini = NULL;
}//fim função

bool estavazia(LISTA* l){
    return(l->qtdeElem == 0);
}

int menorElemLista(LISTA* l){
    if(estavazia(l) == true) return -1;
    return (l->ini->id);
    //Operador ternário (faz o mesmo que as duas linhas acima) return((estavazia(l) == true)? -1: l->ini->id);
}

bool insereElemLista(LISTA* l, int id){
    OBJETO *novo = NULL;
    OBJETO *aux = l->ini;
    novo = (OBJETO*)malloc(sizeof(OBJETO));
    novo->id = id;
    novo->prox = NULL;
    
    if(estavazia(l) == true){
        l->ini = novo;
        l->qtdeElem++;
        return true;
    }

    if(l->ini->id > id){
        novo->prox = l->ini;
        l->ini = novo;
        l->qtdeElem++;
        return true;
    }
    
    while(aux->prox != NULL){
        if(aux->prox->id > id) break;
        aux = aux->prox;
    }

    novo->prox = aux->prox;

    aux->prox = novo;
    l->qtdeElem++;
    return true;

}//fim função

void imprimeLista(LISTA* l){
    int cont = 0;
    printf("\nElementos da lista:\n");
    for(OBJETO *aux = l->ini; aux != NULL; aux = aux->prox){
        printf("\n[%d]id = %d", ++cont, aux->id);
    }

    printf("\n\n");
}//fim função

void destroiLista(LISTA* l){
    OBJETO *aux = l->ini;

    while(aux!=NULL){
        l->ini = aux->prox;
        free(aux);
        aux = l->ini;
    }

}//fim função

void removeElemLista(LISTA* l, int id){
    OBJETO* aux = l->ini;
    OBJETO* remove = NULL;

    if(aux->id == id){
        l->ini = aux->prox;
        free(aux);
        return;
    }

    while(aux->prox!=NULL){
        if(aux->prox->id == id) break;

        aux = aux->prox;
    }
    
    
    if(aux->prox == NULL){
        printf("\n==> O ELEMENTO PROCURADO NAO ESTA NA LISTA\n");
        return;
    }

    remove = aux->prox;
    aux->prox = remove->prox;

    free(remove);
    l->qtdeElem--;

}//fim função

void pesquisaElemLista(LISTA* l, int id){
    OBJETO *aux = l->ini;
    while(aux!=NULL){
        if(aux->id == id) return true;
        if(aux->id > id) return false;

        aux = aux->prox;
    }
}//fim função



int main(){
    LISTA l;

    inicializaLista(&l);
    insereElemLista(&l, 12);
    insereElemLista(&l, 42);
    insereElemLista(&l, 23);
    insereElemLista(&l, 1);
    insereElemLista(&l, 19);
    insereElemLista(&l, 13);
    insereElemLista(&l, 28);
    insereElemLista(&l, 30);
    imprimeLista(&l);

    removeElemLista(&l, 23);
    removeElemLista(&l, 42);
    removeElemLista(&l, 100);

    imprimeLista(&l);

    destroiLista(&l);

    return EXIT_SUCCESS;
}