#include <stdio.h>
#include <stdlib.h>
//programa pra imprimir o padrao de asteriscos 4

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (j > i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
        
    return 0;
}