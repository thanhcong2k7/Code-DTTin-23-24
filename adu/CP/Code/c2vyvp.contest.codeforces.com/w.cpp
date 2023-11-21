#include <iostream>
#include <algorithm>
using namespace std;
void xuli(int m, int n, int a[], int b[], int s)
{
    sort(a+1,a+m+1);
    int res=0;
    for (int i=1; i<=n; i++)
    {
        int k=s-b[i];
        int u=lower_bound(a+1,a+m+1,k)-a;
        int v=upper_bound(a+1,a+m+1,k)-a;
        res+=v-u;
    }
    printf("%d",res);
}
int main()
{
    int m,n,x,count=0;
    cin >> m >> n >> x;
    int a[100010],b[100010];
    for (int i=1; i<=m; i++)
        cin >> a[i];
    for (int i=1; i<=n; i++)
        cin >> b[i];
    xuli(m,n,a,b,x);
    return 0;
}