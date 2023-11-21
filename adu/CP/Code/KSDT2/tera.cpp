#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,a[100100],tm,x[100100],b[100100];
    cin >> n >> l;
    for (int i=1; i<=n; i++)
        cin >> x[i];
    for (int i=1; i<=n; i++)
    {
        cin >> tm;
        for (int j=1; i<=n; j++)
           a[(i-1)*n+j]=tm+x[j];
    }
    for (int i=1; i<=n; i++)
        cin >> x[i];
    for (int i=1; i<=n; i++)
    {
        cin >> tm;
        for (int j=1; i<=n; j++)
            b[(i-1)*n+j]=tm+x[j];
    }
    sort(b+1,b+n*n+1);
    int res=0;
    for (int i=1; i<=n*n; i++)
    {
        int k=l-b[i];
        int u=lower_bound(b,b+n,k)-b;
        int v=upper_bound(b,b+n,k)-b;
        if(b[v]==b[u])res+=v-u+1;
    }
    cout << res;
}