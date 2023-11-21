#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/bnxtbig.inp","r",stdin);
    freopen("inout/bnxtbig.out","w",stdout);
    //do anything here
    int n;
    cin >> n;
    int a[n+1];
    for (int i=0;i<n;i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        for (int j=i; j<n; j++)
            if (a[i] < a[j]){
                cout << j+1 << " ";
                break;
            } else if (j==n-1){
                cout << "0 ";
            }
    return 0;
}