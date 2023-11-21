#include <iostream>
using namespace std;
int main()
{
    int m,n,t,kq[100];
    cin >> t;
    for (int i=1; i<=t; i++)
    {
        cin >> m >> n;
        kq[i]=m/n;
    }
    for (int i=1; i<=t; i++)
        cout << kq[i] << endl;
    return 0;
}