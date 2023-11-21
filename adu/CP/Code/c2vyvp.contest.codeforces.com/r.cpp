#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,mx;
    cin >> m >> n;
    int a[1022][1022]={0};
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    for (int i=2; i<=m; i++)
        for (int j=1; j<=n; j++)
            a[i][j]=a[i][j] + max(max(a[i-1][j-2],a[i-1][j+2]), max(a[i-2][j-1],a[i-2][j+1]));
    mx=0;
    for (int j=1; j<=n; j++)
        if (mx < a[m][j]) mx=a[m][j];
    cout << mx << endl;
    return 0;
}