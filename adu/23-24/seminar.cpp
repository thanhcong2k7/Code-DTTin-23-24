#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("seminar.inp","r",stdin);
    freopen("seminar.out","w",stdout);
    int n,m,c;
    cin >> n >> m >> c;
    int a[n+2]={0};
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort (a,a+n);
    if (m*c==n){
        int maxx=0;
        for (int i=c; i<n; i+=c)
            if (maxx<a[i])
    }
    return 0;
}