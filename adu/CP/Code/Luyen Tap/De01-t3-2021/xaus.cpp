#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int dem=1;
    cin >> s;
    for (int i=1; i<s.length(); i++)
        if(s[i]<97)
            dem++;
    cout << dem << endl;
    return 0;
}