#include <bits/stdc++.h>
using namespace std;
bool dd[500][500],a[500][500],n;
int minn=10000010,mn=10000000,mx=0;
int solve(int x, int y){
    if (dd[x][y]==false)
        return -1;
    else {
        dd[x][y]=false;
        if (x==n && y==n){
            //
        }
        else{
            if(solve(x+1,y)!=-1);
            else if (solve(x-1,y)!=-1);
            else if (solve(x,y+1))
            else if (solve(x,y-1))
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    for (int i=0; i<=n+1; i++)
        for (int j=0; j<=n+1; j++)
            chk[i][j]=false;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            chk[i][j]=true;
    chk[1][1]=false;
    cout << solve(1,1) << endl;
}