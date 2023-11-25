//User NgTCg007
#include <bits/stdc++.h>
using namespace std;
bool sieve[1000001];
int rev(int r){
    int tmp=r/10,s=r%10;
    while(tmp!=0){
        s*=10;
        s+=tmp%10;
        tmp/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int a,b;
    cin >> a >> b;
    for (auto& x:sieve) x=true;
    sieve[0]=false;
    sieve[1]=false;
    for (int i=2; i*i<=1000000; i++)
        if (sieve[i])
            for (int j=i*i; j<=1000000; j+=i)
                sieve[j]=false;
    int cnt=0;
    for (int i=a; i<=b; i++)
        cnt+=sieve[rev(i)];
    cout << cnt << endl;
    return 0;
}