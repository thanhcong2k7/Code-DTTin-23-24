#include <iostream>
#include <cmath>
using namespace std;
bool chk(unsigned long long x,int n)
{
    unsigned long long tong=0;
    while(x!=0)
    {
        tong+=x%10;
        x/=10;
    }
    if (tong==n) return true;
    return false;
}
int main()
{
    int m,s,min=-1,max=-1;
    cin >> m >> s;
    for (unsigned long long i=pow(10,m-1); i<=pow(10,m)-1; i++)
    {
        if(chk(i,s) && (min==-1)) min=i; else if(chk(i,s)) max=i;
    }
    cout << min << " " << max;
}