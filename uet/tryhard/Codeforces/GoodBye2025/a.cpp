#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        bool check = true;
        for (int i = st.size() - 1; i >= 0; i--)
        {
            if (st[i] == 'Y' && st[i + 1] == 'Y')
            {
                cout << "NO\n";
                check=false;
                break;
            }
            else if (st[i] == 'Y' || st[i + 1] == 'Y')
            {
                st[i] = 'Y';
                st[i + 1] = '0';
            } else {
                st[i] = 'N';
                st[i + 1] = '0';
            }
        }
        if (check){
            cout << "YES\n";
        }
    }
    return 0;
}