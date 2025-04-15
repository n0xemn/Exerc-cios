#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//uma funcao que retorne o menor numero de um vetor de 20 inteiro
int menor(int* vet){
    int menorn = 101;
    for (int i = 0; i < 20; i++)
    {
        vet[i] = rand()%(100 - 1 + 1) + 1;
        printf("%d ", vet[i]);
        if (vet[i] < menorn)
        {
            menorn = vet[i];
        }
    }
    return menorn;
}
int main(){
    int vet[20], aux;
    srand(time NULL);
    aux = menor(vet);
    printf("/%d/", aux);

    return 0;
}