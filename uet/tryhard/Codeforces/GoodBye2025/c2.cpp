#include <bits/stdc++.h>
using namespace std;
long long a[200005], n2, sum;
long long dq(long long i, long long x, long long n)
{
    if (n == 1)
        return x;
    if (x + a[i + 1] > x - a[i + 2])
        return dq(i + 1, x + a[i + 1], n - 1);
    else
    {
        swap(a[i + 1], a[i + 2]);
        return dq(i + 1, x - a[i + 1], n - 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n2;
        cin >> n2;
        for (long long i = 0; i < n2; i++)
        {
            cin >> a[i];
        }
        long long b[200005];
        copy(a, a + n2, b);
        long long sum1 = dq(0, a[0], n2 - 1);
        copy(b, b + n2, a);
        swap(a[0] , a[1]);
        long long sum2 = dq(0, -a[0], n2 - 1);
        long long x = max(sum1, sum2);
        cout << x << endl;
    }
    return 0;
}