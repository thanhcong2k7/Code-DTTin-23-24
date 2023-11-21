#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/delete2.inp","r",stdin);
    freopen("inout/delete2.out","w",stdout);
    //do anything here
    string n;
    cin >> n;
    if (n[0]<n[1])
        cout << n.substr(1,n.length()-1);
    else {
        int minn=n[n.length()-1],pos=n.length()-1;
        for (int i=n.length()-2; i>=0; i--)
            if (n[i]<=minn){
                minn=n[i];
                pos=i;
            }
        for (int i=0; i<n.length(); i++)
            if(i!=pos)
                cout << n[i];
    }
    return 0;
}