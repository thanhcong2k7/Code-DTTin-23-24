#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n,mincnt=100000000;
    cin >> n;
    for (int i=1; i<=sqrt(n); i++)
        if (n%i==0)
            mincnt=min(n/i+i-2,mincnt);
    cout << mincnt << endl;
    return 0;
}