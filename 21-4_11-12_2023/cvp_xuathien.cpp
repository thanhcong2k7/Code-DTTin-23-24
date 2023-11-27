//User NgTCg007
#include <bits/stdc++.h>
using namespace std;
int a[2*1000000]={0};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,t=0;
    for (int i=0; i<2*1000000; i++)
        a[i]=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> t;
        a[t+1000000-1]++;
        //cout << "dbg " << t+1000000-1 << " " << i << endl;
    }
    for (int i=0; i<2*1000000; i++){
        if (a[i]!=0)
            cout << i-1000000+1 << " " << a[i] << endl;
    }
    return 0;
}