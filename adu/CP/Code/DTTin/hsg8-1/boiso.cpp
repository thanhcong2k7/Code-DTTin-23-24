#include <bits/stdc++.h>
using namespace std;
bool chk(string n){
    for (int i=0; i<n.length(); i++)
        if(n[i]!='1' && n[i]!='0')
            return false;
    return true;
}
int main(){
    long long n,s;
    cin >> n;
    s=n;
    for (int i=1; !chk(to_string(s)); i++)
        s+=n;
    cout << s << endl;
    return 0;
}