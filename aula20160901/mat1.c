#include <stdio.h>
#include <math.h>
int main () {
	double P1_x, P1_y, P2_x, P2_y, distancia;
	printf("Entre com o x de P1:"); scanf("%lf", &P1_x);
	printf("Entre com o y de P1:"); scanf("%lf", &P1_y);
	printf("Entre com o x de P2:"); scanf("%lf", &P2_x);
	printf("Entre com o y de P2:"); scanf("%lf", &P2_y);
	distancia= sqrt(pow(P2_x - P1_x,2.)+pow(P2_y - P2_x,2.));
	printf("A distancia entre os dois pontos e de: %lf.\n",distancia);
	return 0;
}
