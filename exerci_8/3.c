#include <stdio.h>
#include <stdlib.h>
//programa pra imprimir o padrao de asteriscos 3

int main(){
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}