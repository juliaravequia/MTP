#include <stdio.h>
#include <math.h>
int main () {
	double lado, b, c, ang;
	printf("Entre com um lado do triangulo:"); scanf("%lf", &b);
	printf("Entre com o segundo lado do triangulo:"); scanf("%lf", &c);
	printf("Entre com o angulo entre os dois lados informados:"); scanf("%lf", &ang);
	lado= sqrt(pow(b,2.)+pow(c,2.)-(2*b*c*cos(ang)));
	printf("O terceiro lado do triangulo mede: %lf.\n",lado);
	return 0;
}
