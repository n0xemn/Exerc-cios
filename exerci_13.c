#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//uma funcao que recebe um vetor de n posicoes e faca esse vetor receber valores aleatorios de -15 ate 20

void alocar(int* vet, int n){
    for (int i = 0; i < n; i++)
    {
        vet[i] = rand()%(20 - (-15) + 1) + (-15);
        printf("%d ", vet[i]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int vet[n];
    srand(time(NULL));
    alocar(vet, n);

    return 0;
}