#include <iostream>
using namespace std;
 
int main(){
	int X,Y, i, N, j;
 
	cin>> N;
	while(N--){
 
		int soma = 0;
 
			cin>> X>>Y;
 
			if (X > Y){
 
			 for(i = X-1 ; i > Y; --i){
			 	if(i%2 != 0) soma+=i;
			}
			}
 
			 else if (Y > X){
 
			 for(j = Y-1 ; j > X; --j){
			 	if(j%2 != 0) soma+=j;
			 }
 
			}
		cout<< soma<<endl;
			}
			
	return 0;
	
}
