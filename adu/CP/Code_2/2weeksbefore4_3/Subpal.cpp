#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/Subpal.inp","r",stdin);
    freopen("inout/Subpal.out","w",stdout);
    string st;
    int chan=0, le=0;
    //bool isChan=true;
    cin >> st;
    for (int i=0; i<st.length(); i++)
        for (int j=i; j<st.length(); j++){
            if (st[i]==st[j]){
                chan+=((j-i+1)%2==0);
                le+=!((j-i+1)%2==0);
                //isChan=!isChan;
            }
        }
    cout << chan << " " << le << endl;
    return 0;
}