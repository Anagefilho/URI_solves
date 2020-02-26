#include <bits/stdc++.h>
using namespace std; 

int main(){
	int N,i = 0;
	
	scanf("%d", &N);
	
	if (N%2 == 0){
		N++;
		printf("%d\n", N);
	 for(i=0; i < 5; i++){
	  N+=2;
	  printf("%d\n", N);
	 }
	}
	
	else for(i = 0; i <= 5; i++){
	 N+=2;
	 printf("%d\n", N);
	} 
	
	
	return 0;
}
