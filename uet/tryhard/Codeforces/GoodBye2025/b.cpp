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
        int cnt = 0;
        if (st[0] == 'u')
        {
            cnt += st[0] == 'u';
            st[0]='s';
        }
        for (int i = 1; i < st.size() - 1; i++)
        {
            if (st[i] == 'u')
            {
                cnt += ((st[i - 1] != 's') ? 1 : 0) + ((st[i + 1] != 's') ? 1 : 0);
                // cout << st[i-1] << " " << st[i+1] << endl;
                // cout << "dbg" << cnt << ((st[i-1]!='s')?'t':'f') << ((st[i+1]!='s')?'t':'f') << endl;
                st[i - 1] = 's';
                st[i + 1] = 's';
            }
        }
        cnt += st[st.size() - 1] == 'u';
        cout << cnt << endl;
    }
    return 0;
}