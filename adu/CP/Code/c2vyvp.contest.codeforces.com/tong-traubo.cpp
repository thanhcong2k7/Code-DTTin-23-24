#include <iostream>
using namespace std;
int main()
{
    int m,n,k=1,mx=0;
    cin >> m >> n;
    int a[m][n],tong[m*n]={0};
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    for (int i=1; i<=m-2;i++)
        for (int j=1; j<=n-2; j++)
        {
            tong[k]=a[i][j]+a[i+1][j]+a[i+2][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j+1]+a[i+2][j+2];
            k++;
        }
    mx=tong[1];
    for (int i=2; i<k; i++)
        if (mx > tong[i]) mx=tong[i];
    cout << mx << endl;
    return 0;
}