#include <iostream>
using namespace std;
int stt(int b[100000],int m)
{
    int t=1,mx=b[1];
    for (int k=2; k<=m; k++)
        if (mx <=b[k])
        {
            mx=b[k];
            t=k;
        }
    return t;
}
int main()
{
    int t;
    int a[100000],n,daycon[10]={0},doancon[10]={0};
    cin >> t;
    for (int i=1; i<=t; i++)
    {
        cin >> n;
        for (int j=1; j<=n; j++)
            cin >> a[j];
        int tmp=a[1];
        for (int j=1; j<=n; j++)
            if (tmp <= a[j])
            {
                tmp = a[j];
                daycon[i] += tmp;
            }
        for (int j=1; j<=stt(a,n); j++)
            doancon[i] += a[j];
    }
    for (int i=1; i<=t; i++)
        cout << daycon[i] << " " << doancon[i] << endl;
    return 0;
}