#include <iostream>
using namespace std;
int main()
{
    freopen("sum1.inp","r",stdin);
    freopen("sum1.out","w",stdout);
    int n,m,a[100002],l,r,tong=0;
    cin >> n >> m;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    for (int i=1; i<=m; i++){
        cin >> l >> r;
        for (int j=l; j<=r; j++)
            tong+=a[i];
        cout << tong << " ";
        tong=0;
    }
    return 0;
}