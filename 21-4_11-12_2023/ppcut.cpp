#include <bits/stdc++.h>
using namespace std;
int main()
{
    //nhu cc, chua xong
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long n,k;
    cin >> n >> k;
    long cnt=0,sus=1;
    while(sus<k){
        sus*=2;
        cnt++;
    }
    cnt+=n/k-1;
    cout << cnt << endl;
    n-=((long)(n/k))*k;
    cnt+=n;
    cout << cnt << endl;
    return 0;
}