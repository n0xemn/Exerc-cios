#include <stdio.h>
#include <stdlib.h>
//uma funcao que retorna o maior elemento de um vetor e quantas vezes ele se repete

void verificar(int* vet, int n, int* maior, int* repete){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
        printf("%d ", vet[i]);
        if (vet[i] > *maior)
        {
            *maior = vet[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (vet[i] == *maior)
        {
            *repete = *repete + 1;
        }
    }
}
int main(){
    int n, maior = 0, repete = 0;
    scanf("%d", &n);
    int vet[n];
    verificar(vet, n, &maior, &repete);
    printf("maior elemento eh: %d e ele se repete %d vezes", maior, repete);

    return 0;
}