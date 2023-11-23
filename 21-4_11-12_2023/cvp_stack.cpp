//User NgTCg007
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    stack<long long> st;
    int q;
    cin >> q;
    while(q--){
        unsigned int x;
        int a;
        cin >> x;
        if (x==1){
            cin >> a;
            st.push(a);
        } else if (x==2) st.pop();
        else if (x==3){
            if (st.empty()) cout << "-1" << endl;
            else cout << st.top() << endl;
        }
    }
    return 0;
}