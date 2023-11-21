#include <iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin >> n >> k;
    int a[50]={0};
    for (int i=1; i<=n; i++)
        cin >> a[i];
    for (int i=1; i<=n; i++)
        if (a[i] >= a[k] && a[i]!=0) count++;
    cout << count << endl;
    return 0;
}