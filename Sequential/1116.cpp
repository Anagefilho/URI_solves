#include <iostream>
using namespace std;

int main(){
	int X, Y, n;
	float d;
	cin>> n;
	
	while(n--){
		cin>> X>> Y;
		
		d = (float)X/Y;
		
		if(Y == 0) cout<< "divisao impossivel"<<endl;
		
		else printf("%.1f\n", d);
	
	}

	return 0;
}
