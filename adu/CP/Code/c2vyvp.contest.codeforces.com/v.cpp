#include <iostream>
#include <algorithm>
using namespace std;
int a[100001];
int n,s;
void xuli(int n, int a[], int s)
{
    sort(a+1,a+n+1);
    int res=0;
    for (int i=1; i<=n; i++)
    {
        int k=s-a[i];
        int u=lower_bound(a+1,a+n+1,k)-a;
        int v=upper_bound(a+1,a+n+1,k)-a-1;
        if (u<=v)
        {
            if (u<=i && i<=v) res+=v-u;
            else res+=v-u+1;
        }
    }
    printf("%d",res/2);
}
int main()
{
    cin >> n >> s;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    /*sort(a+1,a+n+1);
    for (int i=1; i<=n; i++)
    {
        int k=s-a[i];
        int u=lower_bound(a+1,a+n+1,k)-a;
        int v=upper_bound(a+1,a+n+1,k)-a-1;
        if (u<=v)
            if (u<=i && i<=v) count+=v-u; else count+=v-u+1;
    }*/
    xuli(n,a,s);
    return 0;
}