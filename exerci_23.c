#include <stdio.h>
#include <stdlib.h>
//uma funcao que recebe uma string e troca suas letras por sua sucessora (a para b)

//falta coisa pq eu nao terminei de ler o exercicio e eu fiquei com preguissa de terminar

void letra_frente(char* palavra);

int main(){
    char palavra[81];
    scanf("%s", palavra);
    letra_frente(palavra);

    return 0;
}

void letra_frente(char* palavra){
    char aux;
    int cont=0;
    for (char* i = palavra;*i != '\0'; i++, cont++)
    {
        palavra[cont] = palavra[cont] + 1;
    }
    printf("%s", palavra);
}