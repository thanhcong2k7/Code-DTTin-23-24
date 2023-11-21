#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int count2(int x, int y){
    int tmp=0;
    for (int i=x; i<=y; i++)
        tmp += a[i]==2;
    return tmp;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/delete.inp","r",stdin);
    freopen("inout/delete.out","w",stdout);
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    int cnt=0;
    int c2=0;
    for (int i=0; i<n; i++)
        if (a[i]==1)
            for (int j=i+2; j<n; j++)
                if (a[j]==3){
                    c2=count2(i,j);
                    cnt+=c2*(c2-1) +1;
                }
    cout << cnt << endl;
    return 0;
}