#include <bits/stdc++.h>
using namespace std;
struct coord{
    int x;
    int y;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inout/square.inp","r",stdin);
    freopen("inout/square.out","w",stdout);
    //do anything here
    int n;
    cin >> n;
    vector<coord> a;
    for (int i=0; i<n; i++){
        coord tmp;
        cin >> tmp.x >> tmp.y;
        a.push_back(tmp);
    }
    coord maxX,maxY,minX,minY;
    sort(a.begin(),a.end(),[](const auto& a, const auto& b){return a.x<b.x;});
    maxX = a[n-1];
    minX = a[0];
    sort(a.begin(),a.end(),[](const auto& a, const auto& b){return a.y>b.y;});
    maxY = a[0];
    minY = a[n-1];
    cout << (maxX.x-minX.x)*(maxY.y-minY.y);
    return 0;
}