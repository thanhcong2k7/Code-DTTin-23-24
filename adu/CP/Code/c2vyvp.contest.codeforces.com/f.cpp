#include <iostream>
using namespace std;
int main()
{
    int n,m,k=1,mx;
    cin >> n >> m;
    int a[n][m],tong[m*n];
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> a[i][j];
    for (int i=1; i<=n-2; i++)
        for (int j=1; j<=m-2; j++)
        {
            tong[k]=a[i][j]+a[i+1][j]+a[i+2][j]
                +a[i][j+1]+a[i][j+2]+a[i+1][j+1]
                +a[i+2][j+1]+a[i+1][j+2]+a[i+2][j+2];
            k++;
        }
    mx=tong[1];
    for (int i=2; i<=k-1; i++)
    {
        if (mx > tong[i]) mx=tong[i];
    }
    cout << mx << endl;
    return 0;
}