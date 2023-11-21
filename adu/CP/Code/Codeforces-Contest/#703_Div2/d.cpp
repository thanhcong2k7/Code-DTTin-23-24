#include <bits/stdc++.h>
using namespace std;
int xuli(int arr[],int k){
    if(k%2==0) return (arr[k/2]+arr[k/2+1])/2;
    else return arr[k/2];
}
void srt(int a[], int k){
    for (int i=1; i<=k; i++)
        for (int j=1; j<=k-1; j++)
            if(a[i]<a[j])
                swap(a[i],a[j]);
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n+1],arr[n+1];
    for (int i=1; i<=n; i++)
        cin >> a[i];
    int mx=0;
    for (int i=1; i<=n-k+1; i++){
        for (int m=k; m<=n; m++){
            for (int j=1; j<=m; j++)
                arr[j]=a[i+j-1];
            srt(arr,k);
            if(mx < xuli(arr,k))
                mx = xuli(arr,k);
        }
    }
    cout << mx << endl;
    return 0;
}