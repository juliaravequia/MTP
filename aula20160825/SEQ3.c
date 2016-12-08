#include <stdio.h>
int main (){
    float A, B, C, media;
    printf("Digite a primeira nota:");
    scanf("%f", &A);
    printf("Digite a segunda nota: ");
    scanf("%f", &B);
    printf("Digite a terceira nota: ");
    scanf("%f", &C);
   media=(A*2+B*3+C*5)/10;
    printf("A media do aluno e: %.3f\n", media);
return 0;
}
