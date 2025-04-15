#include <stdio.h>
#include <stdlib.h>
//uma funcao que recebe uma variavel string e uma char, e retorne quantas vezes esse char
//aparece na string

int conta_char(char* str, char c);

int main(){
    char str[81];
    scanf("%s", str);
    char c;
    scanf(" %c", &c);

    int veses = conta_char(str, c);
    printf("%d", veses);

    return 0;
}

int conta_char(char* str, char c){
    int aux = 0;
    for (char* i = str; *i != '\0'; *i++)
    {
        if (*i == c)
        {
            aux++;
        }
    }
    return aux;
}