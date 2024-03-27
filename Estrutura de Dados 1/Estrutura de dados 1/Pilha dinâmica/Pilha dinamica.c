#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct aluno
{
    int RA;
    char nome[50];
    struct aluno* prox;
}ALUNO;

typedef struct pilhaDinamica{
    ALUNO* topo;
    int qtdElem;
}PILHA;

void inicializaPilha(PILHA* p){
    p->topo = NULL;
    p->qtdElem = 0;
}//fim função

void insereElemPilha(PILHA* p, int RA, char nome[]){
    ALUNO* a;
    //criando um novo elemento do tipo aluno
    a = (ALUNO*)malloc(sizeof(ALUNO));
    a->RA = RA;
    strcpy(a->nome, nome);
    a->prox = p->topo;


    //colocando o elemento na pilha
    p->topo = a;
    p->qtdElem++;   

}//fim função


void qtdeElemPilha(PILHA* p){
    printf("A quantidade de elementos na pilha é %d\n\n", p->qtdElem);

}//fim função

bool estaVazia(PILHA* p){
    return(p->topo==NULL);

}//fim função

void destroiPilha(PILHA* p){
    ALUNO* aux;

    while(p->topo != NULL){
    
    aux = p->topo;
    p->topo = aux->prox;
    free(aux);

    }
    p->qtdElem = 0;


}//fim função

void exibeElemPilha(PILHA p){
    ALUNO* aux;
    aux = p.topo;
    
    while(aux != NULL){
        printf("%-20s || %-20d\n", aux->nome, aux->RA);
        aux = aux->prox;
    }//while
    
    /*Feito pela professora:
    for(aux = p->topo; aux!=NULL; aux = aux.prox){
        printf("%-20s || %-20d\n", aux->nome, aux->RA);
    }
        */
    
}//fim função

void removeElemPilha(PILHA* p, int RA, char nome[]){
        
}//fim função

int main(){
    PILHA p;
    inicializaPilha(&p);
    insereElemPilha(&p, 2453304, "Samuel");
    insereElemPilha(&p, 2453304, "Ryelli");
    insereElemPilha(&p, 2453304, "Tamara");
    insereElemPilha(&p, 2453304, "Felipe");
    exibeElemPilha(p);

    removeElemPilha(&p, 2453304, "Tamara");

    qtdeElemPilha(&p);
    estaVazia(&p);

    destroiPilha(&p);
    return EXIT_SUCCESS;
}