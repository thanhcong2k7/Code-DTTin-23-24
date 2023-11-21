#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/accells.inp","r",stdin);
    freopen("inout/accells.out","w",stdout);
    float m,n;
    float cnt=0;
    cin >> m >> n;
    float a=m/n;
    //y=ax
    for (int i=0; i<n; i++){
        cnt+=((int)(a*(i+1))-(int)(a*i)+1);
    }
    cout << m+n-__gcd(m,n) << endl;
    return 0;
    //tabun - yoasobi
}