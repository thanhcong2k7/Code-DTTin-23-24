#include <iostream>
using namespace std;
int main()
{
    string tong,a,b;
    int du=0;
    cin >> a >> b;
    int i=a.length()-1;
    int j=b.length()-1;
    int t=0,du=0;
    while (i>=0 || j>=0)
    {
        tong[t]=(a[i]-48)+(b[j]-48)+du+48;
        i--;
        j--;
        t++;
    }
    return 0;
}