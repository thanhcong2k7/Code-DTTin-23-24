#include <bits/stdc++.h>
using namespace std;
long long a[100001],b[100001],j;
long long prfa[100001],prfb[100001],n;
void updateprf(){
    for (int i=j; i<=n; i++){
        prfa[i]=prfa[i-1]+a[i];
        prfb[i]=prfb[i-1]+b[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long s,q,qt,x,y,h;
    cin >> n >> s;
    prfa[0]=0;
    prfb[0]=0;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        prfa[i]=prfa[i-1]+a[i];
    }
    for (int i=1; i<=n; i++){
        cin >> b[i];
        prfb[i]=prfb[i-1]+b[i];
    }
    cin >> q;
    while(q--){
        cin >> qt;
        if (qt==1){
            cin >> j >> x >> y;
            a[j]=x;
            b[j]=y;
            updateprf();
        } else if (qt==2){
            cin >> h;
            if (prfa[h]<s)
                cout << -1 << endl;
            else {
                long long minn=LONG_LONG_MAX,i=0;
                for (;i<=h; i++){
                    if (prfa[h]-prfa[i]>=s)
                        minn=min(minn,prfb[h]-prfb[i]);
                }
                cout << minn << endl;
            }
        }
    }
    return 0;
}