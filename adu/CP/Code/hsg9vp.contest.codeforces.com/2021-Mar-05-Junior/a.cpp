#include <bits/stdc++.h>
using namespace std;
int chk(int a[][],int m){
    int minx=a[0][0],td=0;
    for (int i=1; i<m; i++)
        if(a[0][i] < minx)
        {
            minx=a[0][i];
            td=i;
        }
}
int main(){
    int n;
    cin >> n;
    int a[n+1];
    for (int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    cout << a[n/2+1];
    return 0;
}