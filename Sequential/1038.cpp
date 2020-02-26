#include <iostream>
using namespace std;
#include <stdio.h>
 
int main() {
	int cod, quant;
	double soma;
	double preco1, preco2, preco3, preco4, preco5;
 
	preco1 = 4.00;
	preco2 = 4.50;
	preco3 = 5.00;
	preco4 = 2.00;
	preco5 = 1.50;
 
	cin >> cod;
 
	cin >> quant;
 
		if (cod==1){
			soma = preco1 * quant;
				printf("Total: R$ %.2lf\n", soma);
 
		}
			else if (cod==2){
				soma = preco2 * quant;	
					printf("Total: R$ %.2lf\n", soma);
 
			}
				else if (cod==3){
					soma = preco3 * quant;
						printf("Total: R$ %.2lf\n", soma);
				}
					else if (cod==4){
						soma = preco4 * quant;
							printf("Total: R$ %.2lf\n", soma);
					}
						else {
							soma = preco5 * quant;
								printf("Total: R$ %.2lf\n", soma);
						}
 
	return 0;
}
