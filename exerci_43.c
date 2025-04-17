#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// uma funcao recursiva para imprimir os elementos de um vetor do ultimo ao primeiro

void imprimir_vet(int* vet, int* aux);

int main(){
    srand(time(NULL));
    int vet[10], aux = 10;
    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand()%51;
        //scanf("%d", &vet[i]);
    }
    imprimir_vet(vet, &aux);

    return 0;
}

void imprimir_vet(int* vet, int* aux){
    (*aux)--;
    if (*aux >= 0)
    {
        printf("%d ", vet[*aux]);
        imprimir_vet(vet, aux);
    }
    return;
}