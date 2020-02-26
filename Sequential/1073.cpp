#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(void) {
	int i, n;
	cin>> n;
 
	for(i = 2; i <= n; i += 2){
 
	printf("%d^2 = %d\n", i, i*i);
	}
	return 0;
}
