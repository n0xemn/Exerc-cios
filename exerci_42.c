#include <stdio.h>
#include <stdlib.h>
// funcao recursiva pra calcular o produto dos numeros maiores que 0 e menores que um numero N

int produto(int* N);

int main(){
    int N, result;
    scanf("%d", &N);
    result = produto(&N);
    printf("%d", result);

    return 0;
}

int produto(int* N){
    (*N)--;
    if (*N >= 1)
    {
        return (*N + 1) * produto(N);
    }
    return 1;
}