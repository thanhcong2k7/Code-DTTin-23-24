//User NgTCg007
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,k,m;
    cin >> m >> n >> k;
    int mx=min(m/2,n),z=k-(m+n-mx*3);
    if (z>0)
        mx-=z/3+1;
    cout << (mx>=0?mx:0) << endl;
    return 0;
}