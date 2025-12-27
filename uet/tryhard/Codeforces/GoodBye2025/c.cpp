#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
long long a[MAXN];
long long suff[MAXN];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    suff[n + 1] = 0;
    for (int i = n; i >= 1; i--) {
        suff[i] = suff[i + 1] + a[i];
    }

    long long max_ans = -2e18;
    long long current_prefix = 0;
    for (int i = 1; i <= n; i++) {
        long long score = current_prefix - suff[i + 1];
        max_ans = max(max_ans, score);
        if (i == 1) {
            current_prefix += a[1];
        } else {
            current_prefix += abs(a[i]);
        }
    }

    cout << max_ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}