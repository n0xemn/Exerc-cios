#include <stdio.h>
#include <stdlib.h>
// funcao recursiva para calcula a soma dos numeros naturais menores ou iguais a um numero N

int soma_naturais(int* N);

int main(){
    int N, soma;

    printf("Digite o numero N.");
    scanf("%d", &N);

    soma = soma_naturais(&N);
    printf("%d", soma);

    return 0;        
}

int soma_naturais(int* N){
    (*N)--;
    
    if (*N >= 0)
    {
        return *N + soma_naturais(N) + 1;
    }

    return 0;
}