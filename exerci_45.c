#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// uma funcao recursiva pra somar o valores de um vetor de numeros reais

void soma(float* vet, int* aux, float* somatoria);

int main(){
    srand(time(NULL));
    float vet[10], somatoria = 0;
    int  aux = -1;
    for (int i = 0; i < 10; i++)
    {
        vet[i] = (float) rand()/RAND_MAX*10; 
        printf("%f ", vet[i]);
    }
    soma(vet, &aux, &somatoria);
    printf("\n Soma dos elementos: %f", somatoria);

    return 0;
}

void soma(float* vet, int* aux, float* somatoria){
    (*aux)++;
    if (*aux <= 9)
    {
        (*somatoria) += vet[*aux];
        soma(vet, aux, somatoria);
    }
    return;
}