#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long kq[20]={0},l,r;
    cin >> t;
    for (int j=1; j<=t; j++)
    {
        cin >> l >> r;
        int s4=l/4,s7=l/7,s11=l/11;
        cout << s4 << endl;
        cout << s7 << endl;
        cout << s11 << endl;
    }
    for (long long i=1; i<=t; i++)
        cout << kq[i] << endl;
    return 0;
}