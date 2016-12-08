#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main () {
    int x, soma, a;
    srand(time(0));
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    a=rand()%2;
    soma=x+a;
    if (soma%2==0)
        printf("O numero e par!");
    else
        printf("O numero e impar!");
return 0;
}
