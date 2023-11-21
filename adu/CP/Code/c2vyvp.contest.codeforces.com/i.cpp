#include <iostream>
#include <string.h>
using namespace std;
bool chk(string st)
{
    for (int j=0; j<st.length()/2; j++)
        if (st[j]!=st[st.length()-1-j])
            return false;
    return true;
}
int main()
{
    int t,tmp;
    string str;
    bool yn[21];
    cin >> t;
    for (int i=1; i<=t; i++)
    {
        cin >> str >> tmp;
        yn[i]=chk(str);
    }
    for (int i=1; i<=t; i++)
        cout << ((yn[i])?"YES":"NO") << endl;
    return 0;
}