#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//uma funcao que recebe um vetor de n inteiros entre 10 e 100 e um valor v e retorne o indice onde esta 
//um numero igual a v, se nao tiver, retorne -1

int localizar(int* vet, int v, int n){
    int aux2 = -1;
    for (int i = 0; i < n; i++)
    {
        vet[i] = rand()%(100 - 10 + 1) + 10;
        printf("%d ", vet[i]);
        if (vet[i] == v)
        {
            aux2 = i;
        }
    }
    return aux2;
}
int main(){
    int n, v, aux;
    scanf("%d", &n);
    scanf("%d", &v);
    int vet[n];
    srand(time(NULL));
    aux = localizar(vet, v, n);
    printf("%d", aux);

    return 0;
}