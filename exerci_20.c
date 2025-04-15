#include <stdio.h>
#include <stdlib.h>
//uma funcao que recebe uma string e retorna a quantidade de vogais

int conta_vogais(char* str);

int main(){
    char str[81];
    scanf("%s", str);
    
    int quant = conta_vogais(str);
    printf("%d", quant);

    return 0;
}

int conta_vogais(char* str){
    int aux = 0;
    for (char* i = str; *i != '\0'; i++)
    {
        if (*i >= 'a' && *i <= 'z')
        {
            aux++;
        }
    }
    return aux;
}