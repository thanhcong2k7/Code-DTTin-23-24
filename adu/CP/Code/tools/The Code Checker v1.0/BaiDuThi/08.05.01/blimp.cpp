#include <bits/stdc++.h>
#include <fstream>
using namespace std;
bool chk(string ten)
{
    for (int i=0; i<ten.length()-2; i++)
        if (ten[i]=='F' && ten[i+1]=='B' && ten[i+2]=='I') return true;
    return false;
}
int main()
{
    string ten;
    int n;
    freopen("blimp.inp","r",stdin);
    freopen("blimp.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> ten;
        if (chk(ten)) cout << i << " ";
    }
    return 0;
}