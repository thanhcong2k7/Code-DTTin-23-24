#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/transtr.inp","r",stdin);
    freopen("inout/transtr.out","w",stdout);
    string s;
    cin >> s;
    s+=s[s.length()-1];
    int c=0;
    for (int i=0; i<s.length()-1; i++)
        c+= s[i]!=s[i+1];
    cout << (c+1)/2 << endl;
    return 0;
}