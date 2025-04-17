#include <stdio.h>
#include <stdlib.h>
// uma funcao pra mostrar as coordenadas e raio de um circulo

typedef struct circulo
{
    float x;
    float y;
    float raio;
}circulo;

void mostrar_circulo(circulo c1);

int main(){
    circulo c1 = {2, 4, 8};
    mostrar_circulo(c1); 

    return 0;
}

void mostrar_circulo(circulo c1){
    printf("circulo 1: <(%.f, %.f) %.f>\n", c1.x, c1.y, c1.raio);
}