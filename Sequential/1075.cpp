#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(void) {
	int N, i, p;
 
	cin>> N;
 
	for(i = 2; i < 10000 ; i++){
 
		p = i%N;
 
		if(p == 2) cout<< i<<endl;
 
	}
return 0;
}
