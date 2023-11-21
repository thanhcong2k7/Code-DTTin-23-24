#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int a[256],cnt[256]={1},dem=0;
    cin >> st;
    for (int i=0; i<st.length(); i++)
        a[i]=st[i];
    sort(a,a+st.length());
    for (int i=0; i<st.length(); i++)
        if(a[i]==a[i+1]){
            cnt[dem]++;
        }else dem++;
    for (int i=0; i<st.length(); i++)
        cout << (char)a[i] << " " << cnt[i] << endl;
    return 0;
}