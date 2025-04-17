#include <stdio.h>
#include <stdlib.h>
// uma funcao que move o circulo com base no deslocamento de x e y.

typedef struct circulo
{
    float x;
    float y;
    float raio;
}circulo;

void mover_circ(circulo *c1);

int main(){
    circulo c1;

    c1.x = 2;
    c1.y = 4;

    printf("Posicao atual: (%.1f, %.1f).\n", c1.x, c1.y);
    mover_circ(&c1);

    printf("Posicao atual: (%.1f, %.1f).\n", c1.x, c1.y);

    return 0;
}

void mover_circ(circulo *c1){
    printf("Mover x:\nDireita(1)\nEsquerda(2)\n");
    int DouE;
    scanf("%d", &DouE);
    float mover_tanto;

    switch (DouE)
    {
    case 1:
        printf("Mover quanto pra direita?\n");
        scanf("%f", &mover_tanto);
        c1->x = c1->x + mover_tanto;
        break;

    case 2:
        printf("Mover quanto pra esquerda?\n");
        scanf("%f", &mover_tanto);
        c1->x = c1->x - mover_tanto;
        break;
    
    default:
        printf("Numero invalido.\n");
        break;
    }

    DouE = 0;
    mover_tanto = 0;

    printf("Mover y:\nCima(1)\nBaixo(2)\n");
    scanf("%d", &DouE);

    switch (DouE)
    {
    case 1:
        printf("Mover quanto pra cima?\n");
        scanf("%f", &mover_tanto);
        c1->y = c1->y + mover_tanto;
        break;

    case 2:
        printf("Mover quanto pra baixo?\n");
        scanf("%f", &mover_tanto);
        c1->y = c1->y - mover_tanto;
        break;
    
    default:
        printf("Numero invalido.\n");
        break;
    }
}