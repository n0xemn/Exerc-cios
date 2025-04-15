#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//uma funcao que receba um vetor de int entre 10 e 100 com n posicoes e retorn quantas posicoes tem o valor igual ao
//de v 

int posicoes(int* vet, int n, int v){
    int aux = 0;
    for (int i = 0; i < n; i++)
    {
        vet[i] = rand()%(100 - 10 + 1) + 10;
        printf("%d ", vet[i]);
        if (vet[i] == v)
        {
            aux++;
        }
    }
    return aux;
}
int main(){
    int n, v, aux;
    scanf("%d", &n);
    scanf("%d", &v);
    int vet[n];
    srand(time(NULL));
    aux = posicoes(vet, n, v);
    printf("%d", aux);

    return 0;
}