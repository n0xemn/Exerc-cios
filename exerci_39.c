#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* JOGO: Sortear um numero de 1 a 100 e o jogador tem que adivinhar o numero sorteado,
o programa informa se o numero do usuario eh maior, menor ou igual ao numero sorteado
o jogador tem 10 tentativas.
*/

int main(){
    srand(time(NULL));

    int numero_maquina, numero_jogador;
    numero_maquina = 1+ rand()%100;

    printf("Digite um numero.\nVoce tem 10 chances.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numero_jogador);
        if (numero_jogador < numero_maquina)
        {
            printf("Menor que o n sorteado.");
            continue;
        }
        else if (numero_jogador > numero_maquina)
        {
            printf("Maior que o n sorteado.");
            continue;
        }
        else
        {
            printf("Seu numero eh igual ao sorteado.\nVOCE GANHOU\n");
            break;
        }
    }
    printf("\n");
    if (numero_jogador != numero_maquina)
    {
        printf("VOCE PERDEU.\n");
    }
    
    return 0;
}