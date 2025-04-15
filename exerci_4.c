#include <stdio.h>
#include <stdlib.h>
//uma funcao que calcule S = 1-2+3-4...n sendo n o numero de termos dado pelo ususario

int calculo(int n){
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            result += i;
        }
        else
        {
            result -= i;
        }
    }
    return result;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", calculo(n));

    return 0;
}