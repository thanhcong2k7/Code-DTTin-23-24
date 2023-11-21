#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/hoachat.inp","r",stdin);
    freopen("inout/hoachat.out","w",stdout);
    //do anything here
    stack<char> s;
    string st;
    cin >> st;
    for (int i=st.length()-1; i>=0; i--)
        s.push(st[i]);
    int close=0,tmp=0,m=0;
    char c;
    while (!s.empty()){
        c=s.top();
        //close+=(c=='('?1:(c==')'?-1:0));
        if (c=='('){
            close+=1;
            tmp=0;
        }
        else if (c==')'){
            close-=1;
        }
        else if(find(begin({'C','H','O'}),end({'C','H','O'}),c)!=end({'C','H','O'})){
            tmp+=();
        }
        s.pop(); //remove top
    }
    return 0;
}