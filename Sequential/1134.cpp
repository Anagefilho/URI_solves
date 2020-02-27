#include <iostream>
using namespace std;
 
int main() {
	int  a = 0,g = 0,d = 0,n = 0;
 
	cin>> n;
 
	while(n != 4){
 
	cin>> n;
 
	if(n == 1) a++;
	if(n == 2) g++;
	if(n == 3) d++;
 
	}
 
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", a);
	printf("Gasolina: %d\n", g);
	printf("Diesel: %d\n", d);
 
 
	return 0;
}
