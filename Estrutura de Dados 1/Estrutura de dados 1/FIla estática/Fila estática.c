#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define N 4

typedef struct objeto{
    int chave;
}OBJETO;

typedef struct filaEstatica{
    OBJETO fila[N];
    int ini;
    int fim;
    int qtdeElem;
}FILA;

void inicializaFila(FILA* f){
    f->ini = f->fim = -1;
    f->qtdeElem = 0;

}//fim função

bool estaVazia(FILA* f){
    return(f->qtdeElem == 0);
}//fim função

bool estaCheia(FILA* f){
    return(f->qtdeElem == N);
}//fim função

int tamanhoFila(FILA* f){
    return(f->qtdeElem);
}//fim função

bool insereElemFila(FILA* f, int ch){
    if(estaCheia(f) == true){
        return false;
    }

    if(estaVazia(f) == true){
        f->ini = f->fim = 0;
        f->fila[0].chave = ch;
        f->qtdeElem++;
        return true;
    }

    (f->fim+1)>=N ? f->fim = 0 : f->fim++;
    //f->fim = (f->fim+1)%N;
    f->fila[f->fim].chave = ch;
    f->qtdeElem++;
    return true;

}//fim função

void removeElemFila(FILA* f){
    if(estaVazia(&f) == true){
        printf("\n\nNao foi possivel remover o elemento!\n\n");
        return;
    }
    f->qtdeElem--;
    f->ini = (f->ini + 1)%N;

}//fim função

void imprimeFila(FILA* f){
    int pos=f->ini;
    for(int i = 1; i <= f->qtdeElem; i++){
        printf("[%d] %d\n", i, f->fila[pos].chave);
        pos=(pos+1)%N;
    }

}//fim função

OBJETO primeiro(FILA* f){
    return(f->fila[f->ini]);
}//fim função

OBJETO ultimo(FILA* f){
    return(f->fila[f->fim]);
}//fim função

int main(void){
    FILA f;

    inicializaFila(&f);

    insereElemFila(&f, 410);
    insereElemFila(&f, 146);
    insereElemFila(&f, 980);
    insereElemFila(&f, 560);
    imprimeFila(&f);


    printf("\n\nO primeiro elemento da fila eh: %d\n\n", primeiro(&f).chave);
    printf("\n\nO ultimo elemento eh: %d\n\n", ultimo(&f).chave);

    removeElemFila(&f);
    return EXIT_SUCCESS;
}