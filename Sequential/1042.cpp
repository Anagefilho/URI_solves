    #include <iostream>
    using namespace std;
    #include <stdio.h>
    int main() {
    	int A, B, C;
     
    	cin>> A;
    	cin>> B;
    	cin>> C;
     
    		if (A < B && A < C){
    		printf("%d\n", A);
    	}
    		else if(B < A && B < C){
    			printf("%d\n", B);
    		}
    		else if (C < A && C < B){
    			printf("%d\n", C);
    		}
     
    		if ((B > A && A > C) || (C > A && A >B)){
    		printf("%d\n", A);
    	}
    		else if((A > B && B > C) || (C > B && B > A)){
    			printf("%d\n", B);
    		}
    		else if ((A > C && C > B)||(B > C && C > A)) {
    			printf("%d\n", C);
    		}
     
    	if (A > B && A > C) {
    		printf("%d\n", A);
    	}
    		else if (B > A && B > C){
    			printf("%d\n", B);
    		}
    		else if (C > A && C > B){
    			printf("%d\n", C);
    		}	
     
    	printf("\n");	 
    	printf("%d\n", A);
    	printf("%d\n", B);
    	printf("%d\n", C);
     
    	return 0;
    }
