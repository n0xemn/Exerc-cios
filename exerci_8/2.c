#include <stdio.h>
#include <stdlib.h>
//programa pra imprimir o padrao de asteriscos 2

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}