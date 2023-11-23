//User NgTCg007
#include <bits/stdc++.h>
const long long maxN = 1e5+5;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int c[maxN],b[maxN],n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> b[i];
    }
    for (int i=0; i<n; i++){
        cin >> c[i];
    }
    int l=0, r=n-1,mm=maxN;
    while(l<=n-1 && r>-1){
        mm=min(abs(b[l]+c[r]),mm);
        if (b[l]+c[r]>0)
            r--;
        else if (b[l]+c[r]<0)
            l++;
        else {r--;l++;}
    }
    cout << mm << endl;
    return 0;
}