#include <iostream>
using namespace std;
 
int main() {
	int M, N, sum = 0, i = 0;;
 
	while(1){
		cin>> M>> N;
 
		if(M <= 0 || N <= 0) break;
 
		if(M > N){
			for(i = N; i <= M; i++){
				sum += i;
				printf("%d ", i);
			}
		}
		else{
			for(i = M; i <= N; i++){
				sum += i;
				printf("%d ", i);
			}
		}
		printf("Sum=%d\n", sum);
		sum = 0;
	}
	return 0;
}
