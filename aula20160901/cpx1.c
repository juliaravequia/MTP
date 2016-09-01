#include <stdio.h>
#include <complex.h>
int main () {
	double complex Z1, Z2, soma, prod;
	double preal, pimag;
	printf("Entre com o Real de Z1:"); scanf("%lf", &preal);
	printf("Entre com o Imag de Z1:"); scanf("%lf", &pimag);
	Z1= preal+pimag*I;
	printf("Entre com o Real de Z2:"); scanf("%lf", &preal);
	printf("Entre com o Imag de Z2:"); scanf("%lf", &pimag);
	Z2= preal+pimag*I;
	soma= Z1+Z2;
	prod=Z1*Z2;
	printf("Soma: %lf + %lf*I\n", creal(soma), cimag(soma));
	printf("Soma: %lf /_ %lf*rad\n", cabs(soma), carg(soma));
	printf("Prod: %lf + %lf*I\n", creal(prod), cimag(prod));
	printf("Prod: %lf /_ %lf*rad\n", cabs(prod), cimag(prod));

	return 0;
}
