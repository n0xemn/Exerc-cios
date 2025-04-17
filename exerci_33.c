#include <stdio.h>
#include <stdlib.h>
// fazer uma estruct que represente um aluno com nome, idade, sexo e notas

// nao fiz exatamente como o exercicio pedia, botei uns biricutico a mais

typedef struct aluno
{
    char nome[81];
    int idade;
    char sexo[10];
    int notas[4];
}aluno;

int main(){
    aluno a1;

    printf("Digite o nome:\n");
    scanf("%[^\n]", a1.nome); // ponteiro precisa do "&", mas string nao

    printf("Digite a idade:\n");
    scanf("%d", &a1.idade);

    printf("Digite o sexo:\n");
    scanf("%s", a1.sexo);

    printf("Digite as quatro notas:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a1.notas[i]);
    }
    printf("Nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
    printf("Sexo: %s\n", a1.sexo);
    printf("Notas: %d %d %d %d\n", a1.notas[0], a1.notas[1], a1.notas[2], a1.notas[3]);

    return 0;
}