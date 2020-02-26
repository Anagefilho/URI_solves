#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(void) {
	int N, i, p;
 
	cin>> N;
 
	for(i = 1; i <= 10 ; i++){
 
		p = i*N;
 
		cout<<i <<" x "<< N <<" = "<< p<<endl; 
 
	}
return 0;
}
