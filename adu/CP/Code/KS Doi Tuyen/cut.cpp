#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    ifstream f("cut.inp");
    ofstream f1("cut.out");
    long long n,m,tmp,cut=0,du=0;
    f >> n >> m;
    f1 << m-__gcd(m,n);
    f.close();
    f1.close();
    return 0;
}