#include <stdio.h>
int main ()
{
    int x, cont, i;
    cont=0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    for (i=2; i<=x;i++)
    {
        if (x%i==0)
            cont++;
    }
            if(cont>1)
                printf("Nao e primo!!!");
            else
            printf("E primo!!!");
    return 0;
}
