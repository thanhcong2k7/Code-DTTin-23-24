#include <bits/stdc++.h>
using namespace std;
int a=0;
bool isExist(int n){
    a=n;
    while(a!=0){
        if (a%10==4 || a%10==7) return true;
        a/=10;
    }
    return false;
}
int main(){
    freopen("uoc47.inp","r",stdin);
    freopen("uoc47.out","w",stdout);
    int t,n,cnt=0;
    cin >> t;
    while(t--){
        cnt=0;
        cin >> n;
        cnt+= isExist(n);
        for (int i=2; i<=sqrt(n); i++)
            if (n%i==0 && isExist(i)){
                if (n/i==i)
                    cnt++;
                else cnt+=2;
            }
        cout << cnt << endl;
    }
    return 0;
}