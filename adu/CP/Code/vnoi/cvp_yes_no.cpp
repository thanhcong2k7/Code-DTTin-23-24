//User NgTCg007
#include <bits/stdc++.h>
const long long maxN = 1e5+5;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,c,a,t=0;
    cin >> n >> c;
    for (int i=0; i<n; i++){
        cin >> a;
        t+=a;
    }
    cout << (t>=c?"YES":"NO") << endl;
    return 0;
}