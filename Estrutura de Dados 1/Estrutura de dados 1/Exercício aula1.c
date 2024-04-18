#include <stdio.h>
#include <stdlib.h>

void convertemilhas(float* km_por_hora, float* m_por_segundo, int milhas){
    (*km_por_hora) = milhas*1.609;
    (*m_por_segundo) = (*km_por_hora)/3.6;
}//fim função


int main(){
    float km_hr;
    float m_s;
    int milhas;

    printf("Digite o valor em milhas para a conversao:");
    scanf("%d", &milhas);

    convertemilhas(&km_hr, &m_s, milhas);

    printf("%d milhas equivale a %.2f km/h e %.2f m/s\n", milhas, km_hr, m_s);

    return 0;
}