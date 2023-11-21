//User NgTCg007
#include <bits/stdc++.h>
const long long maxN = 1e5+5;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    unsigned long long int n;
    cin >> n;
    int a[n+5][n+5];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    unsigned long long t1=0,t2=0;
    for (int i=0; i<n; i++)
        t1+=a[i][i];
    for (int i=n-1; i>=0; i--)
        t2+=a[i][n-i-1];
    cout << llabs(t1-t2) << endl;
    return 0;
}