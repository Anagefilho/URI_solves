#include <iostream>
using namespace std;

int main(){
	int i, j, x = 1, y = 7, cont = 0;
	
	for(i = 0; i < 15; i++){
		
		printf("I=%d J=%d\n", x, y);
		cont++;
		y--;
		
		if(cont == 3){
			x+=2;
			cont = 0;
			y += 5;
		}
		
	}

	return 0;
}
