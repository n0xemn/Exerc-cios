#include <stdio.h>
#include <stdlib.h>
//programa pra imprimir o padrao de asteriscos 1

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}