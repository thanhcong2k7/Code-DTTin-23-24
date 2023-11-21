#include <bits/stdc++.h>
using namespace std;
struct quarks{
    int x;
    int v;
    bool exists=true;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/quarks.inp","r",stdin);
    freopen("inout/quarks.out","w",stdout);
    //do anything here
    int n,m;
    cin >> n;
    quarks a[n+1];
    for (int i=0; i<n; i++)
        cin >> a[i].x >> a[i].v;
    cin >> m;
    int t[m+1];
    for (int i=0; i<m; i++)
        cin >> t[i];
    int c=0,cnt=0;
    for (int i=0; i<=t[m-1]; i++){
        //cout << ">> i=" << i << endl;
        for (int p=0; p<n; p++)
            if(a[p].exists) a[p].x += a[p].v;
        if(t[c]==i){
            for (int p=0; p<n; p++)
                cnt+=a[p].exists;
            c++;
            cout << cnt << endl;
        }
        cnt=0;
        //check
        for (int p=0; p<n; p++)
            for (int q=0; q<n; q++)
                if ((a[p].x==a[q].x || (abs(a[p].x-a[q].x)==1 && abs((a[p].x-a[p].v)-(a[q].x-a[q].v))==1)) &&
                    p!=q &&
                    a[p].exists && a[q].exists &&
                    a[p].v!=a[q].v){
                        a[p].exists = false;
                        a[q].exists = false;    
                        //cout << "p=" << p << " q=" << q << endl;
                }
    }
    return 0;
}