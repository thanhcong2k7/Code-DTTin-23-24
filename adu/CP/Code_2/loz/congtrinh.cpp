#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/congtrinh.inp","r",stdin);
    freopen("inout/congtrinh.out","w",stdout);
    //do anything here
    int n;
    cin >> n;
    int a[n+1];
    for (int i=0; i<n; i++)
        cin >> a[i];
    //attempt 1
    int mx=a[0],t=0,cnt=0;
    for (int i=1; i<n; i++)
        if(a[i]<mx){
            t+=a[i];
            cnt++;
        }else mx=a[i];
    //cout << cnt << " " << t << endl;
    //attempt 2
    int mx2=a[n-1],t2=0,cnt2=0;
    for (int i=n-2; i>=0; i--)
        if(a[i]>mx2){
            t2+=a[i];
            cnt2++;
        }else mx2=a[i];
    //cout << cnt2 << " " << t2 << endl;
    if (cnt==cnt2)
        cout << min(t,t2) << endl;
    else if (cnt > cnt2)
        cout << t << endl;
    else cout << t2 << endl;
    return 0;
}