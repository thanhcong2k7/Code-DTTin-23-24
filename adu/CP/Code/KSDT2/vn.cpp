#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    ifstream f("vn.inp");
    ofstream f1("vn.out");
    f >> n >> m;
    f1 << __gcd(n,m) << endl;
    f1 << n/__gcd(n,m) << " " << m/__gcd(n,m);
    f.close();
    f1.close();
    return 0;
}