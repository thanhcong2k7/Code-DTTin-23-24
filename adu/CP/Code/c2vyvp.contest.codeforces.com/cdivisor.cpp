#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << __gcd(a,__gcd(b,c)) << endl;
    return 0;
}