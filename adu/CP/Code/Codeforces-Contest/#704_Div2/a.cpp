#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long p,a,b,c,a1,b1,c1;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> p >> a >> b >> c;
        a1=0;b1=0;c1=0;
        while(a1 < p && b1 < p && c1 < p){
            a1+=a;
            b1+=b;
            c1+=c;
        }
        if(a1-p >= 0) cout << a1-p << endl;
        else if(b1-p >= 0) cout << b1-p << endl;
        else if(c1-p >= 0) cout << c1-p << endl;
    }
    return 0;
}