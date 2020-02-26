#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main (){
	double A, B, C, p, b;
	cin>> A;
	cin>> B;
	cin>> C;
	
	if ((A < B+C && A > fabs(B - C) )){
	
		b = A+B+C;
			printf("Perimetro = %.1lf\n", b);
	}
	else{
		p = ((A+B)*C)/2;
		printf("Area = %.1lf\n", p);
	}
	return 0;
}
