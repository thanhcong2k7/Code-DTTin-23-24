#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
void srt(map<int,int> mp){
    vector<pair<int,int>> vc;
    for (auto& it:mp)
        vc.push_back(it);
    sort(vc.begin(),vc.end(),cmp);
    mp.clear();
    for (auto& it:vc){
        mp.insert({it.second, it.first});
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,tmp=0;
    cin >> n;
    map<int,int> a;
    for (int i=1; i<=n; i++){
        cin >> tmp;
        a.insert({i,tmp});
    }
    srt(a);
    for (auto& it:a)
        cout << it.first << " " << it.second << endl;
    /*
    for (auto& x:a){
        int l=1,r=n,mid=(l+r)/2,res=-1;
        while(r-l>0){
            mid = (l+r)/2;
            if (a[mid]==-a[x] && ){
                res=mid;
                break;
            } else if (a[mid])
        }
    }*/
    return 0;
}