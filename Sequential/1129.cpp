#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d", &n) && n!=0){

        while(n--){

            int c = 0,a[5], t=0;
            char r[5];
            r[0] = 'A'; r[1] = 'B'; r[2] = 'C'; r[3] = 'D'; r[4] = 'E';
            cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];

            for(int i = 0; i < 5; i++){
                if(a[i] <= 127){
                    t = i;
                    c++;
                }
            }
            if(c == 1)
                printf("%c\n", r[t]);
            if(c == 0 || c > 1)
                printf("*\n");

            }
        }
}
