#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,k,x=0,y=0;
    cin >> a >> b >> c >> d >> k;
    for (int i=a; i<=b; i++)
        for (int j=c; j<=d; j++)
            if(i*j==k)
                if(x+y<i+j){
                    x=i;
                    y=j;
                }
    if(x!=0 && y!=0)cout << x << " " << y; else cout << -1;
    return 0;
}