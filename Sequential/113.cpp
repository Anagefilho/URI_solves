#include <iostream>
using namespace std;

int main(){
	int X, Y;
	string s;
	cin>> X>>Y;
	
	while(X != Y){
		if(X > Y) s = "Decrescente";
		
		if(Y > X) s = "Crescente";
		
		cout<< s<<endl;
		
		cin>> X>>Y;
				 
	}
	return 0;
}
