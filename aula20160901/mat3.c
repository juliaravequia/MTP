#include <stdio.h>
#include <math.h>
int main () {
	double num, base, log;
	printf("Entre com um numero:"); scanf("%lf", &num);
	printf("Entre com uma base:"); scanf("%lf", &base);
	log= log10(num)/log10(base);
	printf("O logaritmo o numero nessa base e: %lf.\n",log);
	return 0;
}
