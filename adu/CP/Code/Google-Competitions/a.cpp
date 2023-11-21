#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100000],t,b,cnt;
    cin >> t;
    for (int i=1; i<=t; i++){
        cin >> n >> b;
        cnt=0;
        for (int j=0; j<n; j++)
            cin >> a[j];
        sort(a,a+n);
        for (int j=0; a[j]<=b; j++){
            cnt++;
            b-=a[j];
        }
        cout << cnt << endl;
    }
    return 0;
}