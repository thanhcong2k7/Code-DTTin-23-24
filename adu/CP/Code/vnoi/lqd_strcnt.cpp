#include <bits/stdc++.h>
using namespace std;
int k,charcnt[30];
string s;
bool chk(string st){
    memset(charcnt,0,sizeof(charcnt));
    for(int i = 0; i < st.length(); i++)
        charcnt[st[i] - 'a']++;
    for (int i=0; i<st.length(); i++)
        if(charcnt[st[i]-'a']>k)
            return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t,cnt;
    cin >> t;
    while(t--){
        cnt=0;
        cin >> s >> k;
        for (int i=0; i<s.length()-1;i++)
            for (int j=i; j<s.length();j++)
                cnt+=chk(s.substr(i,j));
        cout << cnt << endl;
    }
    return 0;
}