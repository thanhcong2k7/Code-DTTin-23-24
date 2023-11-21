#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,b,a,e[10000],count=0;
    cin >> t;
    for (int i=1; i<=t; i++){
        cin >> n >> k;
        b=1;
        a=n;
        while(k>1){
            b++;a--;
            if(b>=n) b=1;
            if(a==b)
            {
                for (int j=0; j<count; j++)
                    if(b==e[j]) b++;
                e[count]=a;
                count++;
                if(b<n) b++;
            }
            //if(b==a) b=1;
            if(a==1) a=n;
            //cout << a << " " << b << endl;
            k--;
        }
        cout << b << endl;
    }
}