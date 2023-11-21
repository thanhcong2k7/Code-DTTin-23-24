#include <iostream>
using namespace std;
int main()
{
    int x[100],y[100],z[100],w[100],n,max[100],k=1;
    cin >> n;
    for (int i=1; i<=n-1; i++)
        cin >> w[i] >> x[i] >> y[i] >> z[i];
    for (int i=1; i<=n-1; i++)
        for (int j=1; j<=n-1; j++)
        {
            max[k]=abs(w[i]-y[j])+abs(x[i]-z[i]);
            k++;
        }
    int mx=max[1];
    for (int i=1; i<=k-1; i++)
        if (mx < max[i]) mx += max[i];
    cout << mx << endl;
    return 0;
}