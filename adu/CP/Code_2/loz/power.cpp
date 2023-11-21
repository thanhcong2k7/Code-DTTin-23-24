#include <bits/stdc++.h>
using namespace std;
unsigned long long int power(unsigned long long int a, unsigned long long int n){
    unsigned long long int tmp;
    if (n==1) return a;
    else if (n==0)  return 1;
    else {
        tmp = power(a,n/2);
        if (n%2==0)
            return tmp*tmp;//%1000000007;
        else return tmp*tmp*a;//%1000000007;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/power.inp","r",stdin);
    freopen("inout/power.out","w",stdout);
    int n;
    cin >> n;
    unsigned long long int kq;
    unsigned long long int p;
    kq = 0;
    p = power(kq,kq);
    while (p%n!=0){
        kq++;
        p=power(kq,kq);
    }
    cout << kq << endl;
    return 0;
}