#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/carshow.inp","r",stdin);
    freopen("inout/carshow.out","w",stdout);
    int n;
    cin >> n;
    int x[n+1], v[n+1];
    for (int i=0; i<n; i++)
        cin >> x[i] >> v[i];
    int cnt=1,tmp=v[n-1];//, ez=x[n-1];
    x[n-1]+=v[n-1];
    for (int i=n-2; i>=0; i--){
        if (x[i]+v[i]>=x[i+1])
            x[i]=x[i+1]-1;
        else x[i]+=v[i];
    }
    for (int i=n-2; i>=0; i--){
        if (v[i]<=tmp){
            if (x[i+1]-x[i]!=1){
                //cnt++;
                tmp=v[i];
            }
        }else{
            x[i]=x[i+1]-1;
            v[i]=tmp;
        }
    }
    for (int i=n-1; i>0; i--)
        cnt+= (x[i]-x[i-1]!=1);
    cout << cnt << endl;
    return 0;
}