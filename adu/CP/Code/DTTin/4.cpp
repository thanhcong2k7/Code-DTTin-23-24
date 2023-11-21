#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,cnt;
    long long n;
    cin >> t;
    for (int i=0; i<t; i++){
        cnt=0;
        cin >> n;
        while(n!=0){
            if(n%2==1)cnt++;
            n/=2;
        }
        if(cnt%2==0)
            cout << "even" << endl;
        else cout << "odd" << endl;
    }
    return 0;
}