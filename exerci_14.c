#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//uma funcao que recebe um vetor e retorna o maior elemento dele

int maior_n(int* vet){
    int maior = (-1);
    for (int i = 0; i < 20; i++)
    {
        vet[i] = rand()%101;
        printf("%d ", vet[i]);
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    return maior;
}
int main(){
    srand(time(NULL));
    int vet[20], aux;
    aux = maior_n(vet);
    printf("o maior numero eh %d", aux);

    return 0;
}