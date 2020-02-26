#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void init(){
	freopen("in.txt", "r", stdin);
}

int main(){
	#ifndef ONLINE_JUDGE
	init();
	#endif

	int n,pos,nn,i, cont=1;
	while(scanf("%d %d", &n, &nn) && n && nn){

		vector<int>m;
		vector<int>::iterator it;
		printf("CASE# %d:\n", cont);

		for(i = 0; i < n; i++){
			int x;
			scanf("%d", &x);

			m.pb(x);
		}
		sort(m.begin(), m.end());

		while(nn--){
			int comp;
			cin>> comp;
			it = lower_bound(m.begin(), m.end(), comp);
				if(*it == comp){
					pos = it - m.begin();
					printf("%d found at %d\n", comp, pos+1);

				}
				else printf("%d not found\n", comp);

				}

		cont++;

	}
	return 0;
}
