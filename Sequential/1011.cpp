#include <stdio.h>
int main (){
	double volume, pi = 3.14159, R;
	scanf("%lf", &R);
	volume = (4/3.0)*pi*(R*R*R);
	printf("VOLUME = %.3lf\n", volume);
	return 0;
}
