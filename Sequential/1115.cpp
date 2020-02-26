#include <iostream>
#include <limits>
using namespace std;

int main() {
	int i, n = 1, X, Y;
	string p;

	while(n){

	cin>> X>>Y;
	
	if(X > 0 && Y > 0) p = "primeiro";
	if(X > 0 && Y < 0) p = "quarto";
	if(X < 0 && Y > 0) p = "segundo";
	if(X < 0 && Y < 0) p = "terceiro";
	
	if(X == 0 || Y == 0){
		n = 0;
		break;
	}
	cout<< p<<endl;
	
	}
	return 0;
}
