#include <iostream>
using namespace std;
int main()
{
    string st1,st2;
    cin >> st1 >> st2;
    for (int i=0; i<st1.length(); i++)
        if (st1[i]!=st2[st2.length()-i-1]) {cout << "NO";return 0;}
    cout << "YES";
    return 0;
}