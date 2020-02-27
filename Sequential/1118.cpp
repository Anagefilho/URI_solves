#include <iostream>
using namespace std;

int main(){
	double N = 1,X,n, cont =0, media1, media2;
	
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
			cont = 0;
			printf("media = %.2lf\n", media2);
			
			while(n){
			
			printf("novo calculo (1-sim 2-nao)\n");
			cin>> n;
			
			if(n == 1) break;
			if(n == 2) break;
			
			}
			
			if(n == 2) break;
			
			media1 = 0;
			media2 = 0;
		}
		
	}

	return 0;
}
