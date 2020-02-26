#include <stdio.h>
int main (){
int N, H,M,SGD;
scanf("%d", &N); 
H = N/3600;
M = (N%3600)/60;
SGD = N%60;
printf("%d:%d:%d\n", H,M,SGD);
 
}
