#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,m,a,tong=0;
    cin >> n >> x >> m;
    a=x;
    for (long long i=1; i<=n; i++)
    {
        tong+=a;
        a=(a*a)%m;
    }
    cout << tong;
    return 0;
}