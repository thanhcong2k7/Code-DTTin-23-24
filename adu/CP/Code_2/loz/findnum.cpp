#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
ull era[1000000]={0,0,1};
int rev(int n){
    int tmp=0,t=n;
    for (;t!=0;){
        tmp*=10;
        tmp+=t%10;
        t/=10;
    }
    return tmp;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/findnum.inp","r",stdin);
    freopen("inout/findnum.out","w",stdout);
    //do anything here
    for (ull i=2; i*i<1000000; i++)
        era[i]=1;
    for (ull i=2; i*i<1000000; i++)
        if (era[i]==1)
            for (ull j=i*i; j<1000000;j+=i)
                era[j]=0;
    int a,b,cnt=0;
    cin >> a >> b;
    for (int i=a; i<=b; i++)
        cnt+=era[rev(i)];
    cout << cnt << endl;
    return 0;
}