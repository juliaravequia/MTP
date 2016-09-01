#include <stdio.h>
#include <complex.h>
int main () {
	double complex Z1, Z2, raiz;
	double preal, pimag;
	printf("Entre com o Real de Z1:"); scanf("%lf", &preal);
	printf("Entre com o Imag de Z1:"); scanf("%lf", &pimag);
	Z1= preal+pimag*I;
	Z2= csqrt(Z1);
	printf("Raiz: %lf + %lf*I\n", creal(Z2), cimag(Z2));
	
	return 0;
}
