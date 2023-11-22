//User NgTCg007
#include <bits/stdc++.h>
const long long maxN = 1e5+5;
using namespace std;
void abc(int a){
    cout << "wtf" << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cout << "started";
    thread f(abc,3);
    f.join();
    cout << "finished!";
    return 0;
}