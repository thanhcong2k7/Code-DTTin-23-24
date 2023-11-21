#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,nc[10000],nt[10000],min=0;
    cin >> t;
    for (int j=1; j<=t; j++){
        cin >> n;
        min = 0;
        for (int i=0; i<n; i++)
            cin >> nc[i];
        for (int i=0; i<n; i++)
            cin >> nt[i];
        for (int i=0; i<n; i++)
            min+=abs(nc[i]-nt[i]);
        cout << min << endl;
    }
    return 0;
}