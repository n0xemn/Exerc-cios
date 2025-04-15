#include <stdio.h>
#include <stdlib.h>
//uma funcao que calcule S = 1+(1/2)+(1/3)+(1/4)+...n sendo n o numero de termos dado pelo usuario

float calculo(int n){
    float result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += (float) 1/i; 
    }
    return result;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%f", calculo(n));

    return 0;
}