#include <bits/stdc++.h>
using namespace std;
void solve1(){
    int n;
    cin >> n;
    int a[n+1];
    for (int i=0; i<n; i++)
        cin >> a[i];
    int sum[n+1];
    for (int i=0; i<n; i++)
        sum[i]=0;
    int tmpsum=a[0],iter=0;
    bool isOK = false;
    for (int i=1; i<n; i++){
        if(tmpsum<a[i]){
            sum[iter]=tmpsum;
            tmpsum=a[i];
            iter++;
            isOK = true;
        } else tmpsum+=a[i];
    }
    int mx=isOK?sum[0]:tmpsum;
    for (int i=1; i<iter; i++)
        if (mx<sum[i])
            mx = sum[i];
    cout << mx << endl;
}
void solve(){
    int n;
    cin >> n;
    int a[n+1];
    for (int i=0; i<n; i++)
        cin >> a[i];
    int mx=a[0], tmpsum=0;
    for (int i=0; i<n; i++){
        tmpsum=a[i];
        for (int j=i+1; j<n; j++){
            tmpsum+=a[j];
            mx=tmpsum>mx?tmpsum:mx;
        }
    }
    cout << mx << endl;
}
int main(){
    solve1();
    return 0;
}