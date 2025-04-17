#include <stdio.h>
#include <stdlib.h>
// funcao pra calcular o perimetro de um circulo (P = 2pi * raio)
// perimetro eh a soma de todos os lados de uma forma geometrica

#define pi 3.14159265359

typedef struct circulo
{
    float x;
    float y;
    float raio;
}circulo;

double calc_perimetro(circulo c1);

int main(){
    circulo c1;
    c1.raio = 4;
    printf("%lf\n", calc_perimetro(c1));
    
    return 0;
}

double calc_perimetro(circulo c1){
    return 2 * pi * c1.raio;
}