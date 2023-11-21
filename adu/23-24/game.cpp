#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("game.inp","r",stdin);
    freopen("game.out","w",stdout);
    unsigned long long int n,x,y,z,t=0;
    cin >> n >> x >> y >> z;
    unsigned long long int xt=x,yt=y,zt=z;
    x-=(x>=35?35*(x/35):0);
    y-=(y>=100?100*(y/100):0);
    z-=(z>=10?10*(z/10):0);
    while(n>0){
        n-=1; x++; t++;
        if (n>0) {n-=1;y++;t++;}
        if (n>0) {n-=1;z++;t++;}
        if (x==35) {n+=30;x=0;}
        if (y==100) {n+=60;y=0;}
        if (z==10) {n+=9;z=0;}
        if (x==xt&&y==yt&&zt==z) cout << t << endl;
    }
    cout << t << endl;
    return 0;
}