#include <bits/stdc++.h>
using namespace std; 


int main(){
	int N, user, i;
	
	cin>> user;

	 for(i=0; i < user; i++){
	 	
	 	cin>> N;
	 	
	 	if (N > 0 && N%2 == 0) printf("EVEN POSITIVE\n");
	 	
	 	if (N > 0 && N%2 != 0) printf("ODD POSITIVE\n");
	 	
	 	if (N == 0) 		   printf("NULL\n");
	 	
	 	if (N < 0 && N%2 == 0) printf("EVEN NEGATIVE\n");
	 	
	 	if (N < 0 && N%2 != 0) printf("ODD NEGATIVE\n");
	 	} 
	return 0;
}
