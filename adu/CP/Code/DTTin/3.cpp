#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n >> x;
        cout << (n-1)*(abs(10-x)) << endl;
    }
    return 0;
}