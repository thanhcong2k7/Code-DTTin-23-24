#include <bits/stdc++.h>
using namespace std;
int n1,n2;
int *charr(string a){
    int c['z'-'a'+5];
    int n='z'-'a';
    for (int i=0; i<n+5; i++)
        c[i]=0;
    for (int i=0; i<a.length(); i++)
        if (a[i]!='\0')
            c[a[i]-'a']++;
    return c;
    //check arr
    for (int i=0; i<=n; i++)
        if(c[i]!=0)
            cout << (char)(i+'a') << " " << c[i] << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/palswap.inp","r",stdin);
    freopen("inout/palswap.out","w",stdout);
    //do anything here
    int t;
    cin >> t;
    string a;
    while(t--){
        cin >> a;
        int *m=charr(a.substr(0,a.length()/2));
        int *n;
        if (a.length()%2==0)
            n=charr(a.substr(a.length()/2,a.length()/2));
        else n=charr(a.substr(a.length()/2+1,a.length()/2));
        cout << a.substr(a.length()/2,a.length()/2) << " ";
        /*
        //diff
        int cnt=0;
        if(a.length()>5){
            for (int i=0; i<a.length()/2; i++)
                cnt+=(a[i]!=a[a.length()-i-1]);
        }*/
        
    }
    return 0;
}