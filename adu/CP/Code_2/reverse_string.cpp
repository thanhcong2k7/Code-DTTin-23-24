#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for (int i=s.length()-1; i>=0; i--)
        if(s[i]!=' ')
            cout << s[i];
    return 0;
}

//
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("Doiguong.inp","r",stdin);
    freopen("Doiguong.out","w",stdout);
    
}