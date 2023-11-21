#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("ant.inp","r",stdin);
    freopen("ant.out","w",stdout);
    unsigned long long int n1,n2,t;
    string a,b;
    int ai=0,bi=0;
    cin >> n1 >> n2 >> a >> b >> t;
    string br="";
    for (int i=0; i<n1; i++)
        br+="1";
    for (int i=0; i<n2; i++)
        br+="0";
    for (int i=0; i<=n1/2-1; i++)
        swap(a[i],a[n1-i-1]);
    //cout << a << endl;
    if (t>n1+n2) t=n1+n2;
    while(t--){
        for (int i=0; i<n1+n2; i++)
            if (br[i]=='1' && br[i+1]=='0') {swap(br[i],br[i+1]);i++;}
        //cout << br << endl;
    }
    for (int i=0; i<n1+n2; i++)
        if (br[i]=='1'){
            cout << a[ai];
            ai++;
        }else {
            cout << b[bi];
            bi++;
        }
    //cout << endl << br;
    return 0;
}