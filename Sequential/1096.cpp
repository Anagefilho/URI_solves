#include <iostream>
using namespace std;

int main() {
	int i, j, n = 0;
	
	for(i = 1, j = 7; i < 10; j--){
	
		printf("I=%d J=%d\n", i, j);
		
		if(j  == 5){
			j = 8;
		}
		
		if (n >= 3){
			n = 0;
		}
		if(n == 2){
			i += 2;
		}
		n++;
	}
	return 0;
}
