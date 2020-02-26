#include <stdio.h>
int main (){
	int A, B, aa, bb;
	double C, cc, VALOR;

	scanf("%d %d %lf", &A, &B, &C);
	scanf("%d %d %lf", &aa, &bb, &cc);
	C = B*C;
	cc= bb*cc;
	VALOR= C + cc;
	printf("VALOR A PAGAR: R$ %.2lf\n", VALOR);
    return 1;
}

