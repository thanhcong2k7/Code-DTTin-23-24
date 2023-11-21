#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("inout/.inp","r",stdin);
    freopen("inout/cgoats.inp","w",stdout);
    //do anything here
    //cout << "100000" << " ";
    for (int i=1; i<1000000; i++)
        cout << ((rand() % 2+1)==2?"<":">");
    return 0;
}