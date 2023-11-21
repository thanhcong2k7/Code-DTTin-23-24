#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("bs2.inp","r",stdin);
    freopen("bs2.out","w",stdout);
    int n,q;
    cin >> n >> q;
    int a[n+2];
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    for (int i=0; i<q; i++){
        int lo=0,hi=n-1,mid=(lo+hi)/2,b=0;
        cin >> b;
        while(lo+1<hi){
            if (a[mid]>=b)
                hi=mid;
            else if (a[mid]<b)
                lo=mid;
            cout << "dbg: " << hi << " " << mid << " " << lo << endl;
            mid = (hi+lo+1)/2;
        }
        if (a[mid]<b) cout << 0 << endl;
        else cout << n-mid << endl;
    }
    return 0;
}