#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,a[110],tong=0;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        tong+=a[i];
    }
    float tmp=tong/n;
    cout.precision(12);
    cout << tong/n << endl;
    //printf("%0.2f",tmp);
    return 0;
}