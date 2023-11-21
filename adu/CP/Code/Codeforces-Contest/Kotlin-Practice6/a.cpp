#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[51]={0},m=0,xuli[50];
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    for (int i=0; i<n; i++){
        if(a[i]!=a[i+1])
        {
            xuli[m]=a[i];
            m++;
        }
    }
    cout << m << endl;
    for (int i=0; i<m; i++)
        cout << xuli[i] << " ";
    return 0;
}