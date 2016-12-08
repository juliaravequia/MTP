#include <stdio.h>
int main (){
    float b, h, area;
    printf("Entre com a base do triangulo: ");
    scanf("%f", &b);
    printf("Entre com a altura do triangulo: ");
    scanf("%f", &h);
    area=(b*h)/2;
    printf("A area do triangulo e: %.3f\n", area);
return 0;
}
