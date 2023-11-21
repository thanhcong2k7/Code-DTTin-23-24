#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("dp.inp");
    ofstream f1("dp.out");
    long long a,b,d,k,tmp,count=0;
    f >> a >> b >> d >> k;
    for (long long i=a; i<=b; i++)
    {
        tmp=i;
        int cnt=0;
        while(tmp != 0)
        {
            if(tmp%10==d) cnt++;
            tmp/=10;
        }
        if (cnt==k) count++;
    }
    f1 << count;
    f.close();
    f1.close();
    return 0;
}