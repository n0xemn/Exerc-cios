#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// um progrma que gera 50 numeros pseudo aleatorio no intervalo [0, 50]

int main(){
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        printf("%d ", rand()%51);
    }

    return 0;
}