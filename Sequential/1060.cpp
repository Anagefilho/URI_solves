#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
	int i, p=0;
	double n;
 
	for (i=1;i<=6;i++){
 
		cin >> n;
 
		if (n > 0){
			p+=1;
		}
	}
	printf("%d valores positivos\n", p);
	return 0;
}
