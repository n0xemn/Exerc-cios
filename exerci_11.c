#include <stdio.h>
#include <stdlib.h>
//uma funcao que diz se um numero eh primo ou nao
int primo(int n){
    int aux = 0;
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if ((n%i) == 0)
        {
            aux++;
        }
    }
    if (aux == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int n, p;
    scanf("%d", &n);
    p = primo(n);
    if (p==1)
    {
        printf("%d eh primo", n);
    }
    else
    {
        printf("%d nao eh primo", n);
    }

    return 0;
}