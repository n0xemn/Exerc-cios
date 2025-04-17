#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/* um programa pra representar um circulo, suas coordenadas deve ter um numero real no
intervalo de [-20, 20] e para o raio um real no no intervalo [0, 10]. use as funcoes
dos outro exercicios para dar a area e o perimetro.
*/

#define pi 3.14159265359

typedef struct circulo
{
    float x;
    float y;
    float raio;
}circulo;

double area_circulo(circulo c1);
double calc_perimetro(circulo c1);

int main(){
    srand(time(NULL));
    circulo c1;

    c1.x = (float) (25 - rand())/RAND_MAX*25;
    c1.y = (float) (25 - rand())/RAND_MAX*25;
    c1.raio = (float) rand()/RAND_MAX*10;

    float area = area_circulo(c1), perimetro = calc_perimetro(c1);

    printf("Circulo c1:\nCoordenadas: (%f, %f)\nRaio: %f\nArea: %f\nPerimtro: %f\n", c1.x, c1.y, c1.raio, area, perimetro);

    return 0;
}

double area_circulo(circulo c1){
    return pi * pow(c1.raio, 2);
}

double calc_perimetro(circulo c1){
    return 2 * pi * c1.raio;
}