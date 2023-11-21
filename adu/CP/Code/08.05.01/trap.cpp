#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,bcnn;
    cin >> n >> a >> b >> c;
    bcnn=a*b/__gcd(a,b);
    bcnn=bcnn*c/__gcd(bcnn,c);
    cout << ((bcnn<=n)?bcnn:0);
    return 0;
}