#include <stdio.h>
#include <complex.h>
int main () {
	double complex Z1,Z2, mult;
	double preal, pimag;
	printf("Entre com o Real de Z1:"); scanf("%lf", &preal);
	printf("Entre com o Imag de Z1:"); scanf("%lf", &pimag);
	Z1= preal+pimag*I;
	Z2= conj(Z1);
	mult=Z1*Z2;
	printf("Mult: %lf + %lf*I\n", creal(mult), cimag(mult));
	
	return 0;
}
