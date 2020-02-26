#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int numero;
	
	cin >>numero;

	if (numero == 1){
		printf("January\n");
		
	}
	else if (numero == 2){
		printf("February\n");
	}
	
	else if (numero == 3){
		printf("March\n");
	}
		
	else if (numero == 4){
		printf("April\n");
	}	
	else if (numero == 5){
		printf("May\n");
	}
	else if (numero == 6){
		printf("June\n");
	}
	else if (numero == 7){
		printf("July\n");
	}
	else if (numero == 8){
		printf("August\n");
	}
	else if (numero == 9){
		printf("September\n");
	}
	else if (numero == 10){
		printf("October\n");
	}
	else if (numero == 11){
		printf("November\n");
	}
	else {
		printf("December\n");
	}
	return 0;
}

