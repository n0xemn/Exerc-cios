#include <stdio.h>
#include <stdlib.h>
//uma funcao que some os 50 primeiros impares
int soma(){
    int som = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i%2 != 0)
        {
            som += i;
        }
    }
    return som;
}
int main(){
    printf("%d", soma());

    return 0;
}