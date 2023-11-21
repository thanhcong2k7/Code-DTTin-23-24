#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,tong;
    freopen("9.inp","r",stdin);
    freopen("9.out","w",stdout);
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n;
        tong=0;
        while(n>=10){
            while(n!=0){
                tong+=n%10;
                n/=10;
            }
            n=tong;
            tong=0;
        }
        cout << n << endl;
    }
    return 0;
}