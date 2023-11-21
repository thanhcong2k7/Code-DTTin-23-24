#include <iostream>
using namespace std;
int main()
{
    long long so,socs=0;
    cin >> so;
    while (so!=0)
    {
        if (so%10==4||so%10==7)socs++;
        so/=10;
    }
    cout << ((socs==4||socs==7)?"YES":"NO") << endl;
    return 0;
}