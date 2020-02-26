#include <stdio.h>

int main (){
	double A, impostor , imposto, B, C;
	
	scanf("%lf", &A);
	
	if(A <= 2000){
		printf("Isento\n");
	}
	if(A > 2000.01 && A <= 3000.00){
		imposto = ((A - 2000.00) * 8)/100;
		impostor = imposto;
		
	
	}else if(A >= 3000.01 && A <= 4500.00){
		imposto = (1000) * 0.08;
		B = ((A - 3000)* 0.18);
		impostor = imposto + B;
	}
	 else if(A > 4500.00){
		imposto = (1000) * 0.08;
		B = (1500 * 0.18);
		C = ((A - 4500)* 0.28);
		impostor = imposto + B + C;
	}
	if (A > 2000) printf("R$ %.2lf\n", impostor);
	
	return 0;	
	}
	
