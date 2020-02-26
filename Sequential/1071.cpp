#include <stdio.h>
using namespace std;
#include <iostream>

int main(){
	int x, y, z=0;
		cin>> x;
		cin>> y;
		
		if (x==y)
		cout<<z<<endl;
		
			else if (x<y){
			for(x+=1;y<x;x++){
			
				if(x%2==1 || x%2==-1){
					z+=x;
					
				}
				printf("%d\n", y);
			
			}
		}	else if (x>y){
			for(y+=1;y<x;y++){
				if (y%2==1 || y%2==-1)
					
					z+=y;	
				
			}
					printf("%d\n", z);
			
		}
	

	return 0;	
}
