#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/div3str.inp","r",stdin);
    freopen("inout/div3str.out","w",stdout);
    //do anything here
    string s;
    cin >> s;
    sort(s.begin(),s.end(),[](int a, int b){return a>b;});
    string tmpstr="";
    int sodu=0;
    for (int j=0; tmpstr==""; j++)
    for (int i=j; i<s.length(); i++){
        sodu+=(s[i]-'0')%3;
        sodu=sodu%3;
        if(sodu==0){
            tmpstr=s.substr(0,i+1);
        }
    }
    cout << tmpstr << endl;
    return 0;
}