#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    int tmp=a[0],cnt=0;
    for (int i=1; i<n; i++)
        if (tmp<a[i]) tmp=a[i];
        else if (tmp>=a[i]) cnt++;
    cout << cnt;
    return 0;
}