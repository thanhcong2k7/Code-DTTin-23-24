#include <bits/stdc++.h>
using namespace std;
void base(string a[][], string dp[][], int n)
{
    for (int i=1; i<=n; i++)
        dp[i][1] = a[i][1];
}
int main()
{
    int n;
    string a[1001][1001]={{"*"}},dp[1001][1001]={{"*"}};
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; i<=n; j++)
            cin >> a[i][j];
    base(a,dp,n);
    for (int i=2; i<n; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j]==".")
                if(dp[i-1][j]=="." || dp[i-1][j+1]==".")
                    dp[i][j]="."; else dp[i][j]="*";
    int cnt=0;
    for (int j=1; j<=n; j++)
        if(dp[n][j]==".") cnt++;
    cout << cnt;
    return 0;
}