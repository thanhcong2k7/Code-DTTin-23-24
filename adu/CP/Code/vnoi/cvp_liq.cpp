//User NgTCg007
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(0);cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int &x: a) cin >> x;
    int f[n];
    int res = 1;
    for (int i=0; i<n; i++) {
        f[i] = 0;
        for (int j=i-1; j>=0; j--) if (a[i] > a[j]) {
            f[i] = max(f[i], f[j]);
        }
        f[i] += 1;
        res = max(res, f[i]);
    }
    cout << res << endl;
    return 0;
}