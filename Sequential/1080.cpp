#include <iostream>
using namespace std;
 
int main() {
	int i, n, p;
 
	n = 100;
 
	int B, bb = 0;
	for(i=1; i <= n; i++){
		cin>> B;
 
		if(B > bb){
			bb = B;
			p = i;
		}
	}
 
	cout<< bb<<endl << p<<endl;
	return 0;
}
