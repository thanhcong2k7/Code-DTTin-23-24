#include <bits/stdc++.h>
using namespace std;
bool isChar(int a){
    return (a>=65 && a<=90 || a>=97 && a<=122);
}
int main(){
    int n,k;
    string s;
    cin >> n >> s >> k;
    for (int i=0; i<s.length(); i++){
        if(isChar(s[i])){
            s[i]+=k;
            if(s[i]<'a' && s[i]>'Z'){
                s[i]-=26;
            }else if(s[i]>'z'){
                s[i]-=26;
            }
        }
    }
    cout << s << endl;
    return 0;
}