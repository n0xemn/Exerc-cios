#include <stdio.h>
#include <stdlib.h>
//uma funca que recebe uma string e mude as letras maisculas por minusculas

void minusculo(char* palavra);

int main(){
    char palavra[81];
    scanf("%s", palavra);
    minusculo(palavra);

    return 0;
}

void minusculo(char* palavra){
    char aux;
    int cont=0;
    for (char* i = palavra; *i != '\0'; i++, cont++)
    {
        if (*i > 'A' && *i < 'Z')
        {
            palavra[cont] = *i + 'a' - 'A';
            printf("%d", cont);
        }
    }
    printf("%s", palavra);
}