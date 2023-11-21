//User NgTCg007
#include <bits/stdc++.h>
const long long maxN = 1e5+5;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s1,s2;
    int t;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        sort(s2.begin(),s2.end());
        bool yn=false;
        for (int i=0; i<s1.length(); i++)
            if(binary_search(s2.begin(),s2.end(),s1[i])){
                yn=true;
                break;
            }
        cout << (yn?"YES":"NO") << endl;
    }
    return 0;
}