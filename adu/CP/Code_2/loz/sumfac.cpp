#include <bits/stdc++.h>
#define ull long long int
using namespace std;
ull era[1000000]={0,0,1};
ull isPrime(ull n){
    for (ull i=2; i<=sqrt(n); i++)
        if (n%i==0)
            return false;
    return true;
}
ull updown(ull n, bool isDown=true){
    if (isDown)
        for (ull i=n+1;; i++)
            if (i>=1000){
                if (isPrime(i))
                    return i;
            }
            else if(era[i]==1)
                return i;
    if (!isDown)
        for (ull i=n; i>=0; i--)
            if (i>=1000){
                if (isPrime(i))
                    return i;
            }
            else if(era[i]==1)
                return i;
}
int main(){
    cout << "gg\n";
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/sumfac.inp","r",stdin);
    freopen("inout/sumfac.out","w",stdout);
    //do anything here
    //sieve eratos
    for (ull i=2; i*i<1000000; i++)
        era[i]=1;
    for (ull i=2; i*i<1000000; i++)
        if (era[i]==1)
            for (ull j=i*i; j<1000000;j+=i)
                era[j]=0;
    ull t,n;
    cin >> t;
    while (t--){
        cin >> n;
        ull ts1=1,ms1=0;//,ts2=0,ms2=0;
        ms1=updown(2)*updown(2,false);
        for (ull i=3; i<=n; i++){
            ull qd=updown(i)*updown(i,false);
            ts1=ts1*qd+ms1;
            ms1=ms1*qd;
            ull g = __gcd(ts1,ms1);
            ts1/=g;
            ms1/=g;
        }
        cout << ts1 << "/" << ms1 << "\n";
        //cout << "dbg t=" << t << endl;
    }
    return 0;
}