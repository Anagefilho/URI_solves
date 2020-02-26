#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>
int main() {
	double A, B, C, R1, R2, D;
 
	cin >> A;
	cin >> B;
	cin >> C;
 
	D = (B*B) - (4 * A * C);
 
	if (D <= 0){
		printf("Impossivel calcular\n");
	} 
	else if (A == 0){
		printf("Impossivel calcular\n");
	}
	else if(D > 0){
		R1 = ((-1*B) + sqrt(D))/(2*A);
 
		R2 = ((-1*B) - sqrt(D))/(2*A);
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}
	else if (R1 || R2 == 0){
		printf("Impossivel calcular\n");
	} 
	return 0;
}
