/*#include<bits/stdc++.h>
using namespace std;
int X(int a,int x){
    int lav=0;
    while(a){
        lav++;
        a/=x;
    }
    return lav;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,val=100000;
        cin >> a >> b;
        for(int x=max(b,2);x<=b+10000;x++){
            val=min(val,x-b+X(a,x));
        }
        cout<<val<<endl;
    }
}*/
#include <bits/stdc++.h>
using namespace std;
int mn(int a, int b, int d, int o){
    if(a==0){
        if(d<o){
            o=d;
            d=0;
        }else{
            d=0;
        }
    }
        mn(a/b,b,d+1,o);
        mn(a,b+1,d+1,o);
}
int main(){
    int t;
    int a,b,cnt[102]={0};
    /*cin >> t;
    for (int i=0; i<t; i++){
        cin >> a >> b;
        if(b<=1){b++;
        cnt[i]+=1;}
        while(a>1){
            if(a>=b && b>1) a=a/b; else b+=1;
            cnt[i]+=1;
        }
    }
    for (int i=0; i<t; i++)
        cout << cnt[i] << endl;*/
    cin >> a >> b;
    int d=0,dem=100;
    mn(a,b,d,dem);
    cout << d << endl;
    cout << dem << endl;
    return 0;
}