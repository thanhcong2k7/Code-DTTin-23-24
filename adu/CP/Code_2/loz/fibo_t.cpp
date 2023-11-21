#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("inout/fibo.inp","r",stdin);
    //freopen("inout/fibo.out","w",stdout);
    //do anything here
    int i=0;
    int a[200];
    a[0]=0;
    a[1]=1;
    for (i=2;i<100;i++)
        a[i]=a[i-1]+a[i-2];
    cout << a[100];
    return 0;
}