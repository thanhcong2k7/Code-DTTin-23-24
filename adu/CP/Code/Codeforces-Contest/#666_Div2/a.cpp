#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t,tcc=0;
    string s;
    bool chiahet[1002]={true};
    cin >> t;
    for (int i=1; i<=t; i++){
        cin >> n;
        tcc=0;
        for (int j=0; j<n; j++)
        {
            cin >> s;
            tcc+=s.length();
        }
        chiahet[i]=(tcc%n==0);
    }
    for (int i=0; i<t; i++)
        cout << (chiahet[i]?"YES":"NO") << endl;
    return 0;
}