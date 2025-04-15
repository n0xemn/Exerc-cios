#include <stdio.h>
#include <stdlib.h>
//uma funcao que calcula S = 1+(2/3)+(3/5)+(4/7)...n sendo n onumero de termos dado pelo usuario

float calculo(int n){
    float result = 1;
    int aux = 3;
    for (int i = 2; i <= n; i++)
    {    
        result += (float) i/(aux);
        aux += 2;
    }
    return result;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%f", calculo(n));

    return 0;
}