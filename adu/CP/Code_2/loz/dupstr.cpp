#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/dupstr.inp","r",stdin);
    freopen("inout/dupstr.out","w",stdout);
    string a;
    cin >> a;
    if (a.length()%2!=0){
        cout << "No" << endl;
        return 0;
    }
    else for (int i=0; i<a.length()/2; i++)
        if (a[i]!=a[i+a.length()/2]){
            cout << "No" << endl;
            return 0;
        }
    cout << "Yes" << endl;
    return 0;
}