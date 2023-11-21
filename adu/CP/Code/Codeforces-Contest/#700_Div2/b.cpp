#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,tmp;
    cin >> t;
    for (int i=1; i<=t; i++)
    {
        int monsd=0,monsh=0;
        cin >> a >> b >> n;
        for(int j=1; j<=n; j++)
        {
            cin >> tmp;
            monsd+=tmp;
        }
        for (int j=1; j<=n; j++)
        {
            cin >> tmp;
            monsh+=tmp;
        }
        while(monsh > 0 && b > 0)
        {
            monsh-=a*n;
            b-=monsd;
            //cout << monsh << " " << b << endl;
        }
        if (monsh<=0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}