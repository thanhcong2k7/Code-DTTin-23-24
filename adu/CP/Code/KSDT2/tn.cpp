#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("tn.inp");
    ofstream f1("tn.out");
    int n,y[110],bcnn;
    f >> n;
    for (int i=0; i<n; i++)
        f >> y[i];
    bcnn=y[0];
    for (int i=1; i<n; i++)
        bcnn=bcnn*y[i]/__gcd(bcnn,y[i]);
    f1 << bcnn << endl;
    for (int i=0; i<n; i++)
        if (i==n-1) f1 << bcnn/y[i]; else f1 << bcnn/y[i] << " ";
    return 0;
}