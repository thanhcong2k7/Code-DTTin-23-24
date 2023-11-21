#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/cgoats.inp","r",stdin);
    freopen("inout/cgoats.out","w",stdout);
    //do anything here
    string a="";
    cin >> a;
    int alive=0,poss=0,pose=0,i;
    for (i=0; a[i]!='>' && i<a.length(); i++)
        alive++;
    poss=i;
    for (i=a.length()-1; a[i]!='<' && i>=0; i--)
        alive++;
    pose=i;
    int tmp=0,j=0,tmp2=0,c=1;
    for (int i=poss; i<=pose; i++){
        //tmp2=tmp;
        //tmp=0;
        //for(;tmp>=0 && i<=pose;i++)
            tmp+=(a[i]=='>'?1:-1);
        //i--;
        //for (;a[i]=='<' && i<=pose;i++)
        //    tmp2++;
        if (tmp<=0 && a.substr(i,2)=="<>"){
            tmp=-tmp;
            i++;
        }
    }
    cout << alive + tmp;
    return 0;
}