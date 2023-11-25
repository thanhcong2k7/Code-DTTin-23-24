//User NgTCg007
#include <bits/stdc++.h>
const long long maxN = 1e5+5;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,s;
    cin >> n >> s;
    int a[n]={0},prf[n]={0};
    cin >> a[0];
    prf[0]=a[0];
    for (int i=1; i<n; i++){
        cin >> a[i];
        prf[i]=prf[i-1]+a[i];
    }
    int mx=0;
    for (int i=n-1; i>0; i--){
        for (int j=0; j<i; j++){
            if (prf[i]-prf[j]>s)
                continue;
            else {
                mx=max(i-j,mx);
                break;
            }
        }
    }
    cout << mx;
    return 0;
}