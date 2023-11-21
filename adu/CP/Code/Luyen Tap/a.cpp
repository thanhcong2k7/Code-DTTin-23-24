#include <iostream>
using namespace std;
int main()
{
    int a,b,c,count=0;
    cin >> a >> b >> c;
    for (int i=1; i<=b/c; i++)
        if (c*i>=a && c*i<=b) count++;
    cout << count;
    return 0;
}