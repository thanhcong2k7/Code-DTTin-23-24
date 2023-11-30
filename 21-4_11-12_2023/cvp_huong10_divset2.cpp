#include <bits/stdc++.h>
using namespace std;
struct sus{
    int i;
    long val;
    int group;
    bool operator<(sus& a){
        return val < a.val;
    }
    bool operator>(sus& a){
        return val > a.val;
    }
    bool operator==(sus& a){
        return val < a.val;
    }
};
bool chk(sus a[]){
    for (auto& x:a)
        if (x.group==0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    sus a[n];
    for (int i=0; i<n; i++){
        cin >> a[i].val;
        a[i].i = i;
        a[i].group=0;
    }
    int group=1;

    return 0;
}