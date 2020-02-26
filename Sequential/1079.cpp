#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	double N, i, p, A, B, c;
	
	cin>> N;
	
	for(i = 1; i <= N ; i++){
		cin>>A >>B >>c;
		
		p = ((A*2) + (B*3) +(c*5))/10; 
		
		printf("%.1lf\n", p);
	}
	
return 0;
}
