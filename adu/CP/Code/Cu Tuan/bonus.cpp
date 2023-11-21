#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,mx[1000001]={0},mang[1001][1001]={0},dem=0;
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> mang[i][j];
    for (int i=1; i<=n-k+1; i++)
        for (int j=1; j<=n-k+1; j++)
        {
            for (int a=i; a<=k+i-1; a++)
                for (int b=j; b<=k+j-1; b++)
                    mx[dem]+=mang[a][b];
            dem++;
        }
    sort(mx,mx+dem);
    cout << mx[dem-1];
    return 0;
}