#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,z[1111111]={0},cnt=1;
    cin >> a >> b;
    for (int i=1; i<=b; i++)
        for (int j=1; j<=i; j++)
        {
            z[cnt]=i;
            cnt++;
        }
    for (int i=a; i<=b; i++)
        sum+=z[i];
    cout << sum << endl;
    return 0;
}