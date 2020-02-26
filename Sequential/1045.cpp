        #include <iostream>
        using namespace std;
        #include <stdio.h>
     
                int main() {
                	double A, B, C, X, A2, B2, C2, aux;
                	cin>> A;
                	cin>> B;
                	cin>> C;
     
                	if (B > A && B > C){
                		aux = A;
                		A = B;
                		B = aux;
                	}
                	else if (C > B && C > A){
                		aux = A;
                		A = C;
                		C = aux;
                	}
     
                	X = B+C;
                	A2 = A*A;
                	B2 = B*B;
                	C2 = C*C;
     
                 if ( A >= X ){
                		printf("NAO FORMA TRIANGULO\n");
                	}
     
                	else {
                		if (A2 == B2 + C2){
                		printf("TRIANGULO RETANGULO\n");
                	}
                	else if (A2 > B2 + C2){
                		printf("TRIANGULO OBTUSANGULO\n");
                	}
                	else if (A2 < B2 + C2){
                		printf("TRIANGULO ACUTANGULO\n");
                	}
                	if (A == B && B == C && A == C){
                		printf("TRIANGULO EQUILATERO\n");		
                	}
                	else if ((A == B) || (A ==C) || (B == C)){
                		printf("TRIANGULO ISOSCELES\n");
                	}
                	}
                	return 0;
                }
