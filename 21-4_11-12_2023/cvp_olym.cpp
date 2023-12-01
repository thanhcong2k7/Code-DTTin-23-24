#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin >> n >> k;
    int a[n],b[n];
    for (auto& x:a)
        cin >> x;
    for (auto& x:b)
        cin >> x;
    int i=0,j=1;
    string s="";
    while(i<n){
        if (a[i]==b[j]){
            s+=(char)(a[i]+'0');
            i++;
            j=i;
        } else {
            j++;
            if (j==n-1){
                i++;
                j=i;
            }
        }
        /*{
            for (j=i; j<n; j++){
                if (a[i]==b[j]){
                    s+=(char)(a[i]+'0');
                    i++;
                cout << s << " " << i << " " << j << endl;
                    break;
                }
            }
        }*/
    }
    cout << s.length() << endl;
    return 0;
}