#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main(){
    int a[200005],n,q;
    cin >> n >> q;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<q; i++){
        int t,x,g;
        cin >> t >> x;
        a[t-1]*=x;
        g=a[0];
        for (int j=1; j<n; j++)
            g=gcd(a[j],g);
        cout << g%1000000007 << endl;
    }
    return 0;
}