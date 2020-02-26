#include <stdio.h>

int main ()
{
	int F, HR;
	
	double hr, salario;
	
	scanf("%d %d %lf", &F, &HR, &hr);
	
	salario = (hr*HR);
	
	printf("NUMBER = %d\n", F);
	
	printf("SALARY = U$ %.2lf\n", salario);

	return 0;
}
