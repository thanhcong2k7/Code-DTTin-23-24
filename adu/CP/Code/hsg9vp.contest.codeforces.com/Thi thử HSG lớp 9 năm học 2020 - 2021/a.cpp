#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200002];
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    int i=1,k=a[1],cnt=0;
    while(i<=n)
    {
        i++;
        if (k!=a[i]){
            cnt++;
            k=a[i];
        }
    }
    cout << cnt;
    return 0;
}