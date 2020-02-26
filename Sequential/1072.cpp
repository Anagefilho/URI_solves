#include <bits/stdc++.h>
using namespace std; 
 
 
int main(){
	int N, user, i, c=0, d=0;
 
	cin>> user;
 
	 for(i=0; i < user; i++){
 
	 	cin>> N;
 
	 	if (N >= 10 && N <= 20){
	 		c++;
 
	 	}
	 	else 
	 		
	 		d++;
 
	 }
	 printf("%d in\n", c);
	 printf("%d out\n", d);
	return 0;
}
