#include <stdio.h>
#include <stdlib.h>
//uma funcao que recebe uma string e desloca as letras uma posicao pra frente e a ultima lera para a primeira posicao

void pula_casa(char* palavra);

int main(){
    char palavra[81];
    scanf("%s", palavra);
    pula_casa(palavra);

    return 0;
}

void pula_casa(char* palavra){
    int cont=0;
    char aux, aux2;
    for (char* i = palavra; *i != '\0'; i++, cont++)
    {
        if (palavra[cont + 1] == '\0')
        {
            
        }
        aux = palavra[cont + 1];
        aux2 = 
        palavra[cont + 1] = palavra[cont];
        aux2 = aux;
    }
    
}