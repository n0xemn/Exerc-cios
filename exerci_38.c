#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// um progrma que gera 100 numeros pseudo aleatorio no intervalo [-15, 15]

int main(){
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", 15 - rand()%(15 + 1 + 15));
    }

    return 0;
} 