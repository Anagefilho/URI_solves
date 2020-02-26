#include <stdio.h>
int main (){
	double T, VM, litros;
		scanf("%lf %lf", &T, &VM);
		litros = (VM/12)*T;
		printf("%.3lf\n", litros);
	return 0;
}
