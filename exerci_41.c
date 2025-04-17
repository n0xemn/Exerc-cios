#include <stdio.h> 
#include <stdlib.h>
// uma funcao  recursiva que calcula e retorna o resultado de um numero a elevadoa um numeo b

int elevado(int *a, int *b);

int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = elevado(&a, &b);
    printf("%d elevedo a %d eh igual %d\n", a, b, result);

    return 0;
}

int elevado(int *a, int *b){
    (*b)--;
    if (*b>=1)
    {
        return (*a) * elevado(a, b);
    }
    return *a;   
}