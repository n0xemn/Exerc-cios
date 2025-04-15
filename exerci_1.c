#include <stdio.h>
#include <stdlib.h>
//fazer uma funcao re some os 100 primeiros iteiros
int soma(){
    int som = 0;
    for (int i = 1; i <= 100; i++)
    {
        som += i;
    }
    return som;
}

int main(){
    printf("%d", soma());

    return 0;
}