#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/game.inp","r",stdin);
    freopen("inout/game.out","w",stdout);
    //do anything here
    int a,b;
    cin >> a >> b;
    cout << max(a,b)+max(a-1,b-1);
    return 0;
}