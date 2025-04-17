#include <stdio.h>
#include <stdlib.h>
// um programa que calcula a media do aluno

typedef struct aluno
{
    char nome[81];
    int idade;
    char sexo[10];
    int notas[4];
}aluno;

void dados_aluno(aluno *a1);
void media_notas(aluno a1);

int main(){
    aluno a1;

    dados_aluno(&a1);

    media_notas(a1);

    return 0;
}

void dados_aluno(aluno *a1){

    printf("Digite o nome:\n");
    scanf("%[^\n]", a1->nome); // ponteiro precisa do "&", mas string nao

    printf("Digite a idade:\n");
    scanf("%d", &a1->idade);

    printf("Digite o sexo:\n");
    scanf("%s", a1->sexo);

    printf("Digite as quatro notas (de 1 a 10):\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a1->notas[i]);
    }
}

void media_notas(aluno a1){
    float soma = 0;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        soma += (float) a1.notas[i];
    }
    printf("Media do aluno: %f.", soma/i);
}