#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
bool ngto(int soA)
{
    if (soA < 2)    
        return false;
    cout << "dbg boolean " << soA << endl;
    for (int i = 2; i <= sqrt((float)soA); i ++)
    {
        if (soA%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int l,r,count=0,k;
    cin >> l >> r;
    for (int i=l; i<=r ;i++)
        for (int j=i+1; j<=r; j++)
        {
            k=__gcd(i,j);
            if (ngto(k)){count++;}
            cout << i << " " << j << endl;
        }
    cout << count/2 << endl;
    return 0;
}