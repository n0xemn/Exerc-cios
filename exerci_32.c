#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// um programa que represente um quadrado e faca funcoes que calculam sua area e perimtro

typedef struct quadrado
{
    float lado;
}quadrado;

void area_quadrado(quadrado q1);
void perim_quadrado(quadrado q1);

int main(){
    quadrado q1 = {4}; // fiquei com preguiça de ler do teclaado
    area_quadrado(q1);
    perim_quadrado(q1);

    return 0;
}

void area_quadrado(quadrado q1){
    printf("A area do quadrado eh: %.1f\n", pow(q1.lado, 2));
}

void perim_quadrado(quadrado q1){
    printf("O perimtreo do quadrado eh: %.1f\n", q1.lado*4);
}