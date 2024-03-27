#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct arvore{
    int chave;
    struct arvore* esq;
    struct arvore* dir;

}ARVORE;


void inicializaArvore(ARVORE** no){
    (*no) = NULL;
}


bool estaVazia(ARVORE** no){
    return((*no) == NULL);
}

bool insereElemArvore(ARVORE** no, int ch){
    if(estaVazia(no) == true){

        (*no) = (ARVORE*)malloc(sizeof(ARVORE));
        (*no)->chave = ch;
        (*no)->dir = NULL;
        (*no)->esq = NULL;
        return true;
    }

    if((*no)->chave > ch){
        insereElemArvore(&((*no)->esq), ch);
    }else{
        if((*no)->chave == ch) return false;      
       
        insereElemArvore(&((*no)->dir), ch);
    }

    return true;
}

void preOrdem(ARVORE** no){
    if((*no) == NULL) return;

    printf("%d ", (*no)->chave);
    preOrdem(&((*no)->esq));
    preOrdem(&((*no)->dir));
}

void ordem(ARVORE** no){
    if((*no) == NULL) return;

    ordem(&((*no)->esq));
    printf("%d ", (*no)->chave);
    ordem(&((*no)->dir));
}

/*void posOrdem(ARVORE** no){
    if((*no) == NULL) return;

    posOrdem(&((*no)->dir));
    printf("%d ", (*no)->chave);
    posOrdem(&((*no)->esq));
}*/

void destroiArvore(ARVORE** no){
    if((*no) == NULL) return;

    if((*no)->esq == NULL && (*no)->dir == NULL){
        free((*no));
        (*no) = NULL;
        return;   
    }

    destroiArvore(&((*no)->esq));
    destroiArvore(&((*no)->dir));

    //free((*no));
    //(*no) = NULL;
    
}


int main(){

    ARVORE *raiz;

    inicializaArvore(&raiz);
    insereElemArvore(&raiz, 10);
    insereElemArvore(&raiz, 7);
    insereElemArvore(&raiz, 16);
    insereElemArvore(&raiz, 5);
    insereElemArvore(&raiz, 14);
    insereElemArvore(&raiz, 8);
    insereElemArvore(&raiz, 20);
    insereElemArvore(&raiz, 15);

//------ Imprimindo em pré ordem-------------
    preOrdem(&raiz);
//-------------------------------------------
    printf("\n\n");
//------ Imprimindo em ordem ----------------
    ordem(&raiz);
//-------------------------------------------
    printf("\n\n");

//------ Imprimindo em pós ordem ------------
    //posOrdem(&raiz);
//-------------------------------------------    
    printf("\n\n");

    destroiArvore(&raiz);

    printf("\n teste\n");

    return EXIT_SUCCESS;
}