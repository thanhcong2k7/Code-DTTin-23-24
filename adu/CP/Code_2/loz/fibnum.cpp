#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/fibnum.inp","r",stdin);
    freopen("inout/fibnum.out","w",stdout);
    int a[100005];
    a[0]=0;
    a[1]=1;
    for (int i=2; i<=100000; i++)
        a[i]=a[i-1] + a[i-2];
    int cnt,n,j;
    cin >> cnt;
    while (cnt--){
        cin >> n;j=0;
        for (;a[j]<=n; j++);
        cout << (a[j-1]==n?"Yes":"No") << endl;
    }
    return 0;
}