#include <iostream>
using namespace std;
#include <stdio.h>
 
int main() {
	int percent;
	double salario, reajuste, reajuste2, reajuste3, reajuste4, reajuste5;
	
	cin >> salario;
	
	if ((salario > 0) && (salario <= 400)){
	    percent=15;
	    	reajuste = (salario*percent)/100;
            	reajuste += salario;
	            	printf("Novo salario: %.2lf\n", reajuste);
	                	reajuste -= salario;
	                    	printf("Reajuste ganho: %.2lf\n", reajuste);
	                        	printf("Em percentual: %d %%\n", percent);
	}
		else if ((salario >= 400.01) && (salario <= 800)){
	    	percent=12;
	    	reajuste2 = (salario*percent)/100;
	        	reajuste2 += salario;
	                 	printf("Novo salario: %.2lf\n", reajuste2);
	                    	reajuste2 -= salario;
	                            	printf("Reajuste ganho: %.2lf\n", reajuste2);
	                                   	printf("Em percentual: %d %%\n", percent);
		}	
			else if ((salario >= 800.01) && (salario <= 1200)){
		    	percent = 10;
		    	reajuste3 = (salario*percent)/100;
		        	reajuste3 += salario;
		            	printf("Novo salario: %.2lf\n", reajuste3);
		                	reajuste3 -= salario;
		                    	printf("Reajuste ganho: %.2lf\n", reajuste3);
		                        	printf("Em percentual: %d %%\n", percent);
			}
				else if ((salario >= 1200.01) && (salario <= 2000)){
			    	percent = 7;
			    	reajuste4 = (salario*7)/100;
			         	reajuste4 += salario;
			           	printf("Novo salario: %.2lf\n", reajuste4);
		              		reajuste4 -= salario;
		                		printf("Reajuste ganho: %.2lf\n", reajuste4);
	    	                		printf("Em percentual: %d %%\n",  percent);
				}
					else{
				     percent=4;
				    	reajuste5 = (salario*4)/100;
			    	    	reajuste5 += salario;
			    	        	printf("Novo salario: %.2lf\n", reajuste5);
			          	           	reajuste5 -= salario;
			               	        	printf("Reajuste ganho: %.2lf\n", reajuste5);
			                          		printf("Em percentual: %d %%\n", percent);
			    	}
	
	return 0;
}
