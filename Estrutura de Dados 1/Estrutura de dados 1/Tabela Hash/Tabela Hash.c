#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 13

typedef struct aluno{
    int RA;
    char nome[50];
}ALUNO;

typedef struct hashtable{
    int qtdELem;
    ALUNO *alunos[N];
}HashTable;

void inicializaHashTable(HashTable *t){
    t->qtdELem = 0;
    for(int i = 0; i < N; i++) t->alunos[i] = NULL;
}

bool estaCheia(HashTable *tabela){
    return (tabela->qtdELem >= N);
}

int funcaoHash(int num){
    return (num%N);
}

void insereElemHash(HashTable *tabela, ALUNO *aluno){
    int pos = funcaoHash(aluno->RA);
    if(estaCheia(tabela) == true){
        printf("\n\nNao foi possivel inserir %d - %s (Tabela Hash cheia)\n\n", aluno->RA, aluno->nome);
        return;
    }

    
    while(tabela->alunos[pos] != NULL){
        pos++;
        if(pos>=N) pos = 0;
    }

    tabela->alunos[pos] = (ALUNO*)malloc(sizeof(ALUNO));
    tabela->alunos[pos] = aluno;
    tabela->qtdELem++;
}

void imprimeHashTable(HashTable *tabela){

    for(int i = 0; i < N; i++){
        if(tabela->alunos[i] == NULL){
            printf("[%d] - NULL\n", i);
        }else{
            printf("[%d] - %s - %d - %d\n", i, tabela->alunos[i]->nome, tabela->alunos[i]->RA, tabela->alunos[i]->RA%N);
        }
    }
    
}

void destroiHashTable(HashTable *tabela){
    
    for(int i = 0; i < N; i++){
        if(tabela->alunos[i] != NULL){
            free(tabela->alunos[i]);
            tabela->alunos[i] = NULL;
            tabela->qtdELem--;
        }
    }
}

void excluiElemHashTable(HashTable *tabela, int RA){

    int pos = funcaoHash(RA);

    do{
        if(tabela->alunos[pos] != NULL && tabela->alunos[pos]->RA == RA){
            tabela->qtdELem--;
            tabela->alunos[pos] = NULL;
            break;
        }
                                                                                         
        pos++;
        if(pos >= N) pos = 0;

    }while(pos != funcaoHash(RA));
}

int main(){
    HashTable tabela;
    inicializaHashTable(&tabela);

        
    ALUNO aluno1 = {2453274, "Murilo"};
    insereElemHash(&tabela, &aluno1);

    ALUNO aluno2 = {24531818, "Joao Antonio"};
    insereElemHash(&tabela, &aluno2);

    ALUNO aluno3 = {2453134, "Samuel"};
    insereElemHash(&tabela, &aluno3);

    ALUNO aluno4 = {2451587, "Joao Pedro"};
    insereElemHash(&tabela, &aluno4);
    
    ALUNO aluno5 = {2452019, "Rafael"};
    insereElemHash(&tabela, &aluno5);
   


    imprimeHashTable(&tabela);


    excluiElemHashTable(&tabela, 2453134);

    imprimeHashTable(&tabela);
    
    return EXIT_SUCCESS;
}