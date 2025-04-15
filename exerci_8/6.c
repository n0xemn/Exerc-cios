#include <stdio.h>
#include <stdlib.h>
//programa pra imprimir o padrao de asteriscos 6

int main(){
    int aux = 4;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {       
            if (j >= ((9/2)+1) - aux && j <= ((9/2)+1) + aux)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        aux--;
    }

    return 0;
}