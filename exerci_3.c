#include <stdio.h>
#include <stdlib.h>
//uma funcao que multiplique os primeiros N numeros pares

int produto(int N){
    int prod = 2;
    for (int i = 4; i <= (N*2); i++)
    {
        if (i%2 == 0)
        {
            prod *= i;
        }
    }
    return prod;
}
int main(){
    int N;
    scanf("%d", &N);
    printf("%d", produto(N));

    return 0;
}