#include <stdio.h>
#include <stdlib.h>

int main(){
    int* vetor, tamanho, resultado = 0;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tamanho);

    vetor = (int*)malloc(tamanho*sizeof(int));

    printf("Agora, digite os valores armazenados no vetor\n");
    for(int i= 0 ; i < tamanho; i++){
        printf("Valor %d:", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor digitado: {");
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
        resultado+=vetor[i];
    }
    printf(" }");

    printf("\nO resultado da soma de todos os valores do vetor e %d\n", resultado);

    return 0;
}