#include <bits/stdc++.h>
using namespace std;
unsigned long long int power(unsigned long long int a, unsigned long long int n){
    unsigned long long int tmp;
    if (n==1) return a;
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
    freopen("inout/count.inp","r",stdin);
    freopen("inout/count.out","w",stdout);
    //do anything here
    unsigned long long int n;//a,n;
    cin >> n;// a >> n;
    cout << power(3,n-1);
    return 0;
}