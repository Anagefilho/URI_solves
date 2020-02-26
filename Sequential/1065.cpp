#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int i, n, p=0;
	
	for (i=1;i<=5;i++){
	
		cin >> n;
	
			if (n%2 == 0){
			p+=1;
		}
	
	}
	printf("%d valores pares\n", p);
	return 0;
}

