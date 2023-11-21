#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,t,a[100010];
    cin >> n >> t;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    int sosach=0,tg=a[1],i=2;
    while(tg<=t)
    {
        sosach++;
        tg+=a[i];
        i++;
    }
    cout << sosach << endl;
    return 0;
}