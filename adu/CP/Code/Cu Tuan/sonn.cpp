#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],tmp,cnt=1;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    tmp=a[0];
    for (int i=1; i<n; i++)
        if(tmp!=a[i] && cnt==1)
        {
            cout << a[i];
            break;
        }else{
            cnt++;
            tmp=a[i];
        }
    return 0;
}