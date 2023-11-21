#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/asquare.inp","r",stdin);
    freopen("inout/asquare.out","w",stdout);
    //do anything here
    ull n,kq=0;
    cin >> n;/*
    for (ull i=1; i<=n; i++)
        kq+=(n-i+1)*(n-i+1)%2018;*/
    cout << ((n*(n+1)*(2*n+1))/6)%2018;
    return 0;
}