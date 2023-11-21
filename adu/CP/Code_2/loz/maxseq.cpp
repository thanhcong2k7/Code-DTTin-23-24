#include <bits/stdc++.h>
using namespace std;
int a[100005],maxx=-1000000000;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/maxseq.inp","r",stdin);
    freopen("inout/maxseq.out","w",stdout);
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    int tmp=0,t=-1000000000;
    for (int i=0; i<n; i++){
        tmp+=a[i];
        if(abs(tmp)>t){
            //
        } else {
            //
        }
    }
    cout << maxx << endl;
    return 0;
}