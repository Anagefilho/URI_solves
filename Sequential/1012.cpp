#include <stdio.h>
int main (){
	double A, B, C;
	double T, CR, TR, Q, R;
	scanf("%lf %lf %lf", &A, &B, &C);
	T=(A*C)/2;
	CR=(C*C)*3.14159;
	TR=(C*(A+B)/2);
	Q=B*B;
	R=A*B;
	printf("TRIANGULO: %.3lf\n", T);
	printf("CIRCULO: %.3lf\n", CR);
	printf("TRAPEZIO: %.3lf\n", TR);
	printf("QUADRADO: %.3lf\n", Q);
	printf("RETANGULO: %.3lf\n", R);
	return 0;
}
