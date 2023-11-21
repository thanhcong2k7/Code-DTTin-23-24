#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mx=1;
    string ten[52],loi[10002];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> ten[i];
    cin >> m;
    for (int i=0; i<m; i++)
        cin >> loi[i];
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
        {
            if(ten[j]==loi[i])
                if(mx<=i)
                    mx=i;
            //cout << j << " " << i << " " << ten[j] << " " << loi[i] << endl;
        }
    cout << mx+1 << endl;
    return 0;
}