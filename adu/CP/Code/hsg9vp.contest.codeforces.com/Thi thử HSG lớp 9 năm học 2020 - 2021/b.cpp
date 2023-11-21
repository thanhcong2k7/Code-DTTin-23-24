#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a[200002];
    cin >> n >> x;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    int i=1,cnt=0;
    while(i<=n-1)
    {
        if(a[i]+a[i+1]<=x){cnt++;i+=2;}
        else {cnt++;i++;}
    }
    cout << cnt << endl;
}