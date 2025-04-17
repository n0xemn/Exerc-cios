#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// funcao praa calcular a area de um circulo

#define pi 3.14159265359 // define nao tem ";" mo final

typedef struct circulo
{
    float x;
    float y;
    float raio;
}circulo;

double area_circulo(circulo c1);

int main(){
    circulo c1;
    c1.raio = 4;
    printf("%lf\n", area_circulo(c1));

    return 0;
}

double area_circulo(circulo c1){
    return pi * pow(c1.raio, 2);
}