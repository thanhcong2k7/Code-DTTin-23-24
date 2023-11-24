//User NgTCg007
#include <bits/stdc++.h>
using namespace std;
bool sieve[1000001];
int main(){
    cout << "step -\n";
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);cout.tie(0);
    cout << "step 0\n";
    int a,b;
    cin >> a >> b;
    cout << "step 0.5\n";
    for (auto& x:sieve) x=true;
    cout << "step 1\n";
    sieve[0]=false;
    sieve[1]=false;
    cout << "step 2\n";
    for (int i=2; i<=1000000; i++)
        if (sieve[i])
            for (int j=i*i; j<=1000000; j+=i)
                sieve[j]=false;
    cout << "step 3\n";
    return 0;
}