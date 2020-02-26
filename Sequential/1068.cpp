#include <bits/stdc++.h>
#define pb push_back
#define w while
using namespace std;

void init(){
	freopen("in.txt", "r", stdin);
}

int main(){
	#ifndef ONLINE_JUDGE
	init();
	#endif

		string str;

		w(cin>> str){
			stack<char>pilha;

			bool valida = true;

			for(int c=0; c < str.size(); c++){
				if(str[c] == '('){
					pilha.push(str[c]);
				}
				else if(str[c] == ')'){
					if(pilha.empty()){
						valida = false; break;
					}
					else pilha.pop();
				}
			}
		

		if(!pilha.empty() || valida == false) cout<<"incorrect"<<endl;

		else cout<<"correct"<<endl;
	}

	return 0;
}
