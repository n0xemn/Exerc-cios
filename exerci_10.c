#include <stdio.h>
#include <stdlib.h>
//funcao que recebe um numero real n e retorne a parte inteira e a fracionada separadamente usando ponteiro
void separar(float n, int *a2, float *b2){
    int aux = n;
    *a2 = aux;
    *b2 = n - aux;
}
int main(){
    float n, b1, *b2;
    int a1, *a2;
    b2 = &b1;
    a2 = &a1; 
    scanf("%f", &n);
    separar(n, a2, b2);
    printf("%d  %f", *a2, *b2);

    return 0;
}