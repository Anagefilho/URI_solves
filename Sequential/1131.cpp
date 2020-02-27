#include <iostream>
using namespace std;
 
int main() {
	int I, G, resul, grenais,n = 1, c=0, i = 0, g=0, e=0;
 
	while(n != 0){
		cin>> I>> G;
 
		printf("Novo grenal (1-sim 2-nao)\n");
		c++;
		cin>> grenais;
 
		if(I > G) i++;
		if(G > I) g++;
		if(G == I) e++;
 
		if(grenais == 1) continue;
		if(grenais == 2) n = 0;
	}
	
	printf("%d grenais\n", c);
	printf("Inter:%d\n", i);
	printf("Gremio:%d\n", g);
	printf("Empates:%d\n", e);
 
	if(i > g) printf("Inter venceu mais\n");
	if(i < g) printf("Gremio venceu mais\n");
	if(i == g)printf("Nao houve vencedor\n");
 
	return 0;
}
