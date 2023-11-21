#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/diffxy.inp","r",stdin);
    freopen("inout/diffxy.out","w",stdout);
    long long int x0,y0,z0,k;
    cin >> x0 >> y0 >> z0 >> k;
    cout << (x0-y0)*(k%2?1:-1);
    return 0;
}