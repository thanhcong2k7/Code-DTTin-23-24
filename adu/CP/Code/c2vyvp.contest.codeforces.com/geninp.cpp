#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f("ttb.txt");
    long long t;
    cin >> t;
    f << t;
    for (long long i=1; i<=t; i++)
        f << " " << 100;
    f.close();
    return 0;
}