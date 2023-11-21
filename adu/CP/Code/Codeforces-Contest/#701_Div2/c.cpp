#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,cnt[101]={0};
    cin >> t;
    for (int z=1; z<=t; z++){
        cin >> x >> y;
        for (int i=1; i<=x; i++)
            for (int j=1; j<=y; j++)
                if(i/j == i%j) cnt[z]+=1;
    }
    for (int i=1; i<=t; i++)
        cout << cnt[i] << endl;
    return 0;
}