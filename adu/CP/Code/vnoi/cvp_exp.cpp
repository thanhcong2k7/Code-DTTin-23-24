//User NgTCg007
#include <bits/stdc++.h>
const long long maxN = 1e5+5;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        long long d[9];
        d[1]=abs(a+b+c);
        d[2]=abs(a+b-c);
        d[3]=abs(a+b*c);
        d[4]=abs(a-b-c);
        d[5]=abs(a-b*c);
        d[6]=abs(a-b+c);
        d[7]=abs(a*b-c);
        d[8]=abs(a*b+c);
        d[0]=abs(a*b*c);
        sort(d,d+9);
        cout << d[0] << endl;
    }
    return 0;
}