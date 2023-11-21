#include <iostream>
using namespace std;
int main()
{
    string t,tmp;
    cin >> t;
    int k=1;
    tmp=t[0];
    while (tmp[0]!=t[k])
    {
        tmp+=t[k];
        k++;
        if (k-1 == t.length()) break;
    }
    cout << ((((int)(t.length()/tmp.length()))==0)?1:((int)(t.length()/tmp.length()))) << tmp << endl;
}