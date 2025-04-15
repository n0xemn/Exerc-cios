#include <stdio.h>
#include <stdlib.h>
//um funcao que recebe um numero m dado pelo usuario como parametro, e retorn o maior numero primo
//menor que m e o menor numero primo maior que m

void primos(int m, int *primo_maior, int *primo_menor){
    int aux = 0;
    for (int i = m-1; i >= 2; i--)
    {
        for (int j = 2; j <= m-1; j++)
        {
            if (i%j == 0)
            {
                aux++;
            }   
        }
        if (aux == 1)
        {
            *primo_menor = i;
            break;
        }
        aux = 0;
    }
    aux = 0;
    for (int i = m+1; i >= m+1; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i%j == 0)
            {
                aux++;
            }
        }
        if (aux == 1)
        {
            *primo_maior = i;
            break;
        }
        aux = 0;
    }
}
int main(){
    int m, primo_me = 0, primo_ma = 0, *primo_maior, *primo_menor;
    primo_maior = &primo_ma;
    primo_menor = &primo_me;
    scanf("%d", &m);
    primos(m, primo_maior, primo_menor);
    printf("menor = %d, maior = %d", *primo_menor, *primo_maior);
    return 0;
}