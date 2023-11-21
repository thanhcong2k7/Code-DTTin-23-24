#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1010][1010],k,f[1010][1010];
    cin >> n >> k;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            cin >> a[i][j];
            f[i][j]=a[i][j]+f[i-1][j]+f[i][j-1]-f[i-1][j-1];
        }
    int res=f[k][k],t;
    for (int i=k; i<=n; i++)
        for (int j=k; j<=n; j++)
        {
            t=f[i][j]-f[i][j-k]-f[i-k][j]+f[i-k][j-k];
            res=max(t,res);
        }
    cout << res;
}