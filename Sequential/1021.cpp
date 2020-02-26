#include <bits/stdc++.h>
    #include <stdio.h>
    int main (){
    	int N, M;
 
    	scanf("%d.%d", &N, &M);
    	printf("NOTAS:\n");
    	printf("%d nota(s) de R$ 100.00\n", N/100);
    	N %= 100;
    	printf("%d nota(s) de R$ 50.00\n", N/50);
    	N %= 50;
    	printf("%d nota(s) de R$ 20.00\n", N/20);
    	N %= 20;
    	printf("%d nota(s) de R$ 10.00\n", N/10);
    	N %= 10;
    	printf("%d nota(s) de R$ 5.00\n", N/5);
    	N %= 5;
    	printf("%d nota(s) de R$ 2.00\n", N/2);
        N %= 2;
    	printf("MOEDAS:\n");
 
    	printf("%d moeda(s) de R$ 1.00\n", N/1);
    	N %= 1;
    	printf("%d moeda(s) de R$ 0.50\n", M/50);
    	M %= 50;
    	printf("%d moeda(s) de R$ 0.25\n", M/25);
    	M %= 25;
    	printf("%d moeda(s) de R$ 0.10\n", M/10);
    	M %= 10;
    	printf("%d moeda(s) de R$ 0.05\n", M/5);
    	M %= 5;
    	printf("%d moeda(s) de R$ 0.01\n", M/1);
 
    	return 0;
    }
