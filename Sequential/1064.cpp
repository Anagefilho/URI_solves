#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int i, count=0;
	float n, soma=0.0, media;
	
	for (i=1;i <= 6; i++){
	
		cin >> n;
	
		if ( n > 0){
			soma += n;
			count++;
		
		}
		media = soma/count;
	}
	printf("%d valores positivos\n", count);
	printf("%.1f\n", media);
	
	return 0;
}

