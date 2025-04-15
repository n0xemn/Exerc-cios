#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//uma funcao que recebe um vetor de 30 inteiros entre -50 a 50 e retorn por referencia(ponteiro) o maior e o menor numero
void min_max(int* vet, int* min, int* max){
    *min = 51;
    *max = -51;
    for (int i = 0; i < 30; i++)
    {
        vet[i] = rand()%(50 - (-50) + 1) + (-50);
        printf("%d ", vet[i]);
        if (vet[i] < *min)
        {
            *min = vet[i];
        }
        if (vet[i] > *max)
        {
            *max = vet[i];
        }
    }
}
int main(){
    int vet[30], min1, max1, *min, *max;
    min = &min1;
    max = &max1;
    srand(time(NULL));
    min_max(vet, min, max);
    printf("menor numero = %d. maior numero = %d", min1, max1);    

    return 0;
}