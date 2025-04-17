#include <stdio.h>
#include <stdlib.h>
/* fazer uma struct que representa um circulo que tenha as coordenadas x,y do centro e
o raio. */

typedef struct circulo
{
    float x;
    float y;
    float raio;
}circulo;

int main(){
    circulo c1 = {1, 2, 4}, c2 = {3, 5, 4}; 

    printf("circulo 1: <(%.f, %.f) %.f>\n", c1.x, c1.y, c1.raio);
    printf("circulo 2: <(%.f, %.f) %.f>\n", c2.x, c2.y, c2.raio);

    return 0;
}