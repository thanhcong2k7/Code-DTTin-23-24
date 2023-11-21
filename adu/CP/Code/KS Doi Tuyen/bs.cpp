#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    ifstream f("bs.inp");
    ofstream f1("bs.out");
    int a[100000],n,count=0;
    f >> n;
    for (int i=1; i<=n; i++)
        f >> a[i];
    sort(a+1,a+n+1);
    for(int i=1; i<=n; i++)
    {
        int k=-a[i];
        int res=0;
        int u=lower_bound(a+1,a+n+1,k)-a;
        int v=upper_bound(a+1,a+n+1,k)-a;
        if (u<=v) res+=v-u; else res+=v-u+1;
        count += res;
    }
    f1 << count/2;
    f.close();
    f1.close();
    return 0;
}