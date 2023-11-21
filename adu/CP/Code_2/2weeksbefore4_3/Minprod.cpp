#include <bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/minprod.inp","r",stdin);
    freopen("inout/minprod.out","w",stdout);
    int n,a,b;
    cin >> n >> a >> b;
    /*
    int min = 6*n, minn=6*n;
    bool isExist=false;
    for (;!isExist;){
        for (int i=a; i<=minn; i++){
            if (minn%i==0)
                if (minn/i>=b && i>=a){
                    cout << i << " " << min/i << " " << min << "\n";
                    isExist=true;
                    break;
                }
        }
        minn++;
    }*/
    while (true){
        if (n%x!=0)
            x++;
        if (n%y!=0)
            y++;
        if (n%x && n%y){
            if(n/y<x){
                n++;
                x=a;
                y=b;
            }
        }
    }
    return 0;
}