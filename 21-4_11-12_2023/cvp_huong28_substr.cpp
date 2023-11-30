#include <bits/stdc++.h>
using namespace std;
int abc[27];
int len=0,pos=0;
void resetabc(){
    for (int i=0; i<='z'-'a'; i++)
        abc[i]=0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,k;
    string s;
    cin >> n >> k >> s;
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++){
            bool sus=false;
            for (int x=i; x<=j; x++){
                abc[s[x]-'a']++;
                if (abc[s[x]-'a']>k){
                    sus=true;
                    break;
                }
            }
            if (sus) break;
            else{
                if (j-i+1>len){
                    len=j-i+1;
                    pos=i+1;
                }
            }
            resetabc();
        }
    cout << len << " " << pos << endl;
    return 0;
}