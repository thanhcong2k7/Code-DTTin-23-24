#include <bits/stdc++.h>
using namespace std;
int solve(int n,int p){
    int mu=1,tmp=p;
    while(tmp<=n){
        tmp*=p;
        mu+=1;
    }
    return mu;
}
int main(){
    int t,n,p;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n >> p;
        int mu=0;
        for (int j=n; j>1; j--)
            mu=max(solve(n,p),mu);
        cout << mu << endl;
    }
    return 0;
}