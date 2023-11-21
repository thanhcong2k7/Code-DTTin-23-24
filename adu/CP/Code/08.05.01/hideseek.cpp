#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,cnt,tm;
    cin >> n >> h;
    for (int i=1; i<=n; i++)
    {
        cin >> tm;
        cnt+=((tm<=h)?1:2);
    }
    cout << cnt;
    return 0;
}