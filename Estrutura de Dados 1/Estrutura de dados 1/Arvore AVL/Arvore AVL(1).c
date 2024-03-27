#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct arvore {
    int chave;
    struct arvore *esquerda;
    struct arvore *direita;
    int h;
    int fb;
}ARVORE;

void inicializaArvore(ARVORE **no){
    (*no)=NULL;
}

bool estaVazia(ARVORE **no){
    return((*no)==NULL);
}

int altura(ARVORE** no){
    if(estaVazia(no) == true) return -1;
    
    return ((*no)->h);
}

int maxAlturaFilhos(ARVORE** no){
    int esq = altura(&(*no)->esquerda);
    int dir = altura(&(*no)->direita);

    if(esq>dir) return esq;
    else return dir;
}

bool insereElemArvore(ARVORE **no, int ch){
    if(estaVazia(no)==true){
        (*no) = (ARVORE*) malloc(sizeof(ARVORE));
        (*no)->chave = ch;
        (*no)->direita=NULL;
        (*no)->esquerda=NULL;
        (*no)->h = 0;
        (*no)->fb = 0;
        return true;
    }
    if((*no)->chave > ch){
        insereElemArvore(&((*no)->esquerda),ch);
    }else{
        if((*no)->chave == ch) return false;
        insereElemArvore(&((*no)->direita),ch);
    }

    (*no)->h = 1 + maxAlturaFilhos(no);
    (*no)->fb = altura(&(*no)->direita) - altura(&(*no)->esquerda);

    switch((*no)->fb){
        case 2:
            switch((*no)->direita->h){
                case 1: 
                ARVORE* aux;
                aux = (*no)->direita;
                (*no)->direita = aux->esquerda;
                aux->esquerda = (*no);
                (*no)->fb = 0;
                (*no) = aux;
                break;  //rotação simples esquerda
                case -1:break;  //rotação dupla 
                default: break;
            }
            break;

        case -2:

            switch((*no)->direita->h){
                case -1: 
                ARVORE* aux;
                aux = (*no)->esquerda;
                (*no)->esquerda = aux->direita;
                aux->direita = (*no);
                (*no)->fb = 0;
                (*no) = aux;
                break;  //rotação simples esquerda
                case 1:break;  //rotação dupla 
                default: break;
            }
        
            break;

        default: break;
    }
}


void preOrdemAdaptada(ARVORE **no){
    if((*no)==NULL) return;
    printf("[ch] %d - [h] %d - [fb] %d \n", (*no)->chave, (*no)->h, (*no)->fb);
    preOrdemAdaptada(&((*no)->esquerda));
    preOrdemAdaptada(&((*no)->direita));
}

void emOrdem(ARVORE **no){
    if((*no)==NULL) return;
    emOrdem(&((*no)->esquerda));
    printf("%d \t", (*no)->chave);
    emOrdem(&((*no)->direita));
}

void posOrdem(ARVORE **no){
    if((*no)==NULL) return;
    posOrdem(&((*no)->esquerda));
    posOrdem(&((*no)->direita));
    printf("%d \t", (*no)->chave);
}


void destroiArvore(ARVORE **no){
    if((*no)==NULL) return;

    destroiArvore(&((*no)->esquerda));
    destroiArvore(&((*no)->direita));

    free(*no);
    *no=NULL;
}

void excluiElem(ARVORE** no, int ch){

    if(*no == NULL){
        printf("\nElemento %d nao encontrado\n", ch);
        return;
    }

    if((*no)->chave==ch){
        //caso 1: *no eh folha
        if((*no)->esquerda==NULL && (*no)->direita==NULL){
            free(*no);
            *no=NULL;
            return;
        }
        
        //caso 2: *no nao tem filho esquerda
        if((*no)->esquerda==NULL && (*no)->direita!=NULL){
            ARVORE *aux = *no;
            *no=(*no)->direita;
            free(aux);
            return;
        }

        //caso 3: *no nao tem filho direita
        if((*no)->esquerda!=NULL && (*no)->direita==NULL){
            ARVORE *aux = *no;
            *no=(*no)->esquerda;
            free(aux);
            return;
        }

        //caso 4: *no tem ambos os filhos (direita e esquerda)
        if((*no)->esquerda!=NULL && (*no)->direita!=NULL){
            ARVORE *aux=(*no)->esquerda;
            while(aux->direita!=NULL) aux=aux->direita;
            (*no)->chave=aux->chave;
            excluiElem(&(*no)->esquerda, aux->chave);
        }

    }
    else{
        if((*no)->chave > ch) excluiElem(&(*no)->esquerda, ch);
        else excluiElem(&(*no)->direita, ch);
    }

}

//================= Main ===========
int main(void){

    ARVORE *raiz;

    inicializaArvore(&raiz);
    insereElemArvore(&raiz, 11);
    insereElemArvore(&raiz, 9);
    insereElemArvore(&raiz, 13);
    insereElemArvore(&raiz, 3);
    insereElemArvore(&raiz, 2);
    insereElemArvore(&raiz, 10);
    insereElemArvore(&raiz, 12);
    insereElemArvore(&raiz, 19);

    printf("\n------Pre Ordem ---------\n");
    preOrdemAdaptada(&raiz);
    printf("\n-------------------------\n");

    /*excluiElem(&raiz, 11);

    printf("\n------Em Ordem ---------\n");
    emOrdem(&raiz);
    printf("\n-------------------------\n");

    printf("\n------Pos Ordem ---------\n");
    posOrdem(&raiz);
    printf("\n-------------------------\n");*/

    destroiArvore(&raiz);
    return EXIT_SUCCESS;
}