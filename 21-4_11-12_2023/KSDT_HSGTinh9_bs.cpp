#include <bits/stdc++.h>
using namespace std;
struct pr{
    int i=1;
    int val=0;
    bool operator==(pr a){
        return a.val == val;
    }
    bool operator<(pr a){
        return a.val > val;
    }
};
bool cmp(pr a, pr b){
    return a.val < b.val;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,tmp=0,cnt=0;
    cin >> n;
    pr a[n];
    for (int i=0; i<n; i++){
        cin >> tmp;
        a[i].i=i;
        a[i].val=tmp;
    }
    
    sort(a,a+n,cmp);
    for (auto& it:a)
        cout << it.i << " " << it.val << endl;
    for (auto& x:a){
        int l=0,r=n-1,mid=(l+r)/2,res=-1;
        while(r-l>1){
            mid = (l+r)/2;
            if (a[mid] == x && a[mid].i < x.i){
                res=mid;
                break;
            } else if (a[mid] < x)
                r=mid;
            else l=mid;
            cout << "dbg " << l << " " << r << endl;
        }
        if (res!=-1) cnt++;
    }
    cout << cnt/2 << endl;
    return 0;
}