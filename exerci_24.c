#include <stdio.h>
#include <stdlib.h>
//uma funcaoque recebe uma string e troque suas letras pela letra osposta a ela no alfabeto
// a com z, b com y e vice versa

// logica: a + z - aux.

void string_oposta(char* palavra);

int main(){
    char palavra[81];
    scanf("%s", palavra);
    string_oposta(palavra);

    return 0;
}

void string_oposta(char* palavra){
    int cont=0;
    for (char* i = palavra; *i != '\0'; i++, cont++)
    {
        palavra[cont] = 'a' + 'z' - palavra[cont]; 
    }
    printf("%s", palavra);
}