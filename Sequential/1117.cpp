#include <iostream>
using namespace std;

int main(){
	double N = 1,X, cont =0, media1, media2;
	
	while(N){
		cin>> X;
		
		if(X > 10 || X < 0){
			cout<< "nota invalida"<<endl;
			continue;
		}
		media1 += X; 
		cont++;

		if(cont == 2){
			media2 = media1/2;
			
			printf("media = %.2lf\n", media2);
			
			N = 0;
		}
		
	}

	return 0;
}
