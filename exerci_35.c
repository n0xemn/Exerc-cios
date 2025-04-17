#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// um progrma que gera 30 numeros pseudo aleatorio no intervalo [0, 10]

int main(){
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", rand()%11);
    }

    return 0;
}