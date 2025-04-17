#include <stdio.h>
#include <stdlib.h>
//uma funcao que recebe uma string e desloca as letras uma posicao pra frente e a ultima lera para a primeira posicao

int quant_tamanho(char* palavra);
void pula_casa(char* palavra);

int main(){
    char palavra[81];
    scanf("%s", palavra);
    pula_casa(palavra);

    return 0;
}

int quant_tamanho(char* palavra){
    int aux = 0;
    while (palavra[aux] != '\0')
        aux++;

    return aux;
}

void pula_casa(char* palavra){
    int tamanho = quant_tamanho(palavra);
    
    char ultima_letra = palavra[tamanho - 1]; // logica: guardar a ultima letra e passar cada letra pra frente e depois colocar a ultima no começo
    for (int i = tamanho - 1; i > 0; i--)
    {
        palavra[i] = palavra[i - 1];
    }
    palavra[0] = ultima_letra;
    printf("%s", palavra);
}
