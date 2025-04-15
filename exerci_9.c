#include <stdio.h>
#include <stdlib.h>
//uma funcao que soma dois inteiros passados como parametro e usa um ponteiro que recebe o resultado
void soma(int a, int b, int *c){
    *c = a + b; //quando o ponteiro recebe o endereco de uma variavel, ele nao precisa do *, mas quando ele vai receber uma valor como uma constante, ele precisa do * antes.
}
int main(){
    int a = 2, b = 4, c1, *c;
    c = &c1;
    soma(a, b, c);
    printf("%d", *c);

    return 0;
}