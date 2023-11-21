#include <iostream>
using namespace std;
bool chk(long long a,long long b)
{
    if (a%b==0) return true; else return false;
}
int main()
{
    long long t,n;
    cin >> t;
    long long a[100][100], b[100][100];
    bool yn[10];
    for (long long k=1;k<=t;k++)
    {
        cin >> n;
        for (long long i=1; i<=n; i++)
            for (long long j=1; j<=n;j++)
                cin >> a[i][j];
        for (long long i=1; i<=n; i++)
            for (long long j=1; j<=n;j++)
                cin >> b[i][j];
        for (long long i=1; i<=n; i++)
            for (long long j=1; j<=n; j++)
                yn[k]=chk(a[i][j],b[i][j]);
    }
    for (long long i=1; i<=t; i++)
        cout << ((yn[i])?"Yes":"No") << endl;
    return 0;
}