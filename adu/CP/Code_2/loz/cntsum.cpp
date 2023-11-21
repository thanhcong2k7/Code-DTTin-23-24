#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/cntsum.inp","r",stdin);
    freopen("inout/cntsum.out","w",stdout);
    //do anything here
    int a,b,c,d;//,cnt=0;
    cin >> a >> b >> c >> d;
    int cd=c*d;
    int startc=(a%c==0?a:((a-a%c)/c+1)*c),endc=(b/c)*c,startd=(a%d==0?a:((a-a%d)/d+1)*d),endd=(b/d)*d;
    int startcd=(a%cd==0?a:((a-a%cd)/cd+1)*cd),endcd=(b/cd)*cd;
    //debug 1
    cout << startc << " " << endc << " " << startd << " " << endd << " " << startcd << " " << endcd << endl;
    /*
    int iterc=startc,iterd=startd,cnt=0;
    while (iterc <= endc || iterd <= endd){
        if (iterc==iterd)
            cnt++;
        else {
            cnt+=iterc<=endc;
            cnt+=iterd<=endd;
        }
        iterc+=c;
        iterd+=d;
    }*/
    int cntc=(endc-startc)/c+1,cntd=(endd-startd)/d+1,cntcd=(endcd-startcd)/cd+1;
    //debug 2
    cout << cntc << " " << cntd << " " << cntcd << endl;
    cout << b-a+1-cntc-cntd+cntcd;
    return 0;
}