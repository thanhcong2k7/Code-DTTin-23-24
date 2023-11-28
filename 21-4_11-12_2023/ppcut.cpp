#include <bits/stdc++.h>
using namespace std;
int main()
{
    //nhu cc, chua xong
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long n,k;
    cin >> n >> k;
    long cnt=k/2+1;
    n-=cnt*2;
    cnt+=n/k-1;
    cout << cnt << endl;
    n-=((long)(n/k))*k;
    cnt+=n-1;
    cout << cnt << endl;
    return 0;
}