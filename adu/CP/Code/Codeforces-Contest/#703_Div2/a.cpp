#include <bits/stdc++.h>
using namespace std;
int vtsai(int h[],int n){
    for (int z=0; z<n-1; z++)
        if(h[z]>=h[z+1])
            return z;
    return n;
}
bool check(int h[],int n){
    for (int z=0; z<n-1; z++)
        if(h[z]>h[z+1])
            return false;
    return true;
}
int main(){
    int t,n,h[100];
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n;
        for (int j=0; j<n; j++)
            cin >> h[j];
        int vt=vtsai(h,n);
        while(vt && vt != n){
            h[vt]--;
            h[vt+1]++;
            vt=vtsai(h,n);
            if(check(h,n) && vt != n){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}