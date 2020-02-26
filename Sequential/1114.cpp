#include <iostream>
using namespace std;
 
int main() {
	int n = 1, i;
	string j;
 
 
	while(n != 0){
	n = 1;
 
	cin>> i;
 
	if(i != 2002) j = "Senha Invalida";	
 
	else if(i == 2002){ 
	 j = "Acesso Permitido";
		n = 0;
	}
	cout<< j<<endl;
	}
 
 
 
	return 0;
}
