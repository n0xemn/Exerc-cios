#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// um progrma que gera 100 numeros pseudo aleatorio no intervalo [5, 25]

int main(){
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", 5 + rand()%(25 + 1 - 5));
    }

    return 0;
}