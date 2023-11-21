#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,s;
    cin >> n >> s;
    int a[n]={0};
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a,a+n);
    int d=1,c=n;
    bool t=false;
    while (c-d>1)
    {
        int g=(d+c)/2;
        if (a[g]<s) d=g; else c=g;
        if (a[g]==s) {t=true;break;}
    }
    cout << ((t)?"YES":"NO");
    return 0;
}