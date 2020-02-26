#include <iostream>
#include <stdio.h>
using namespace std;
 
int main(){
	int N, p1=0, p2=0, p3=0, p4=0, n;
 
	for (n=1;n<=5;n++){
 
		cin >> N;
 
		if (N > 0){
			p1+=1;
 
		}
			if (N < 0){
				p2+=1;
			}
				if (N%2==0){
					p3+=1;
				}
					if (N%2!=0){
						p4+=1;
					}
	}	  
  		printf("%d valor(es) par(es)\n", p3);
		printf("%d valor(es) impar(es)\n", p4);
		printf("%d valor(es) positivo(s)\n", p1);
		printf("%d valor(es) negativo(s)\n", p2);
 
 
	return 0;
}
