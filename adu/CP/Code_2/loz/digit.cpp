#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/digit.inp","r",stdin);
    freopen("inout/digit.out","w",stdout);
    int a[41][41];
    char c;
    for (int i=0; i<40; i++)
        for (int j=0; j<40; j++){
            c=getchar();
            if (c=='1' || c == '0')
                a[i][j]=c-'0';
        }
    int xuli[3][5];
    return 0;
}