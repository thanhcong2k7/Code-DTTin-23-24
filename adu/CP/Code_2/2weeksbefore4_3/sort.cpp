#include <bits/stdc++.h>
using namespace std;
string ina[3];
int priority[3]={1,2,3};
bool chkChanged(string s){
    if(priority[s[0]-65]<priority[s[2]-65]){
        swap(priority[s[0]-65],priority[s[2]-65]);
        return true;
    }else return false;
}
void xuli(string s){
    if (s[2]=='<'){
        swap(s[0],s[2]);
        s[2]='>';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/sort.inp","r",stdin);
    freopen("inout/sort.out","w",stdout);
    bool isValid=true;
    int cnt=1;
    //do anything here
    for (int i=0; i<3; i++){
        cin >> ina[i];
        xuli(ina[i]);
    }
    //attempt 1
    for (int i=0; i<=2; i++)
        chkChanged(ina[i]);
    //attempt 2
    for (int i=0; i<=2; i++)
        if (chkChanged(ina[i])){
            isValid=false;
            break;
        }
    if (!isValid)
        cout << "sai";
    else {
        int iter=1;
        while(cnt<=3){
            if(cnt==priority[iter]){
                cout << ((char)priority[iter]+65);
                cnt++;
            }
            iter++;
        }
    }
    return 0;
}