#include <bits/stdc++.h>
using namespace std;
bool dd[500][500];
int a[500][500],n;
int minn=10000010,mn=10000000,mx=0;
//queue<pair<int,int>> a;
vector<int> kq;
int solve(int x, int y){
    if (dd[x][y]==false)
        return -1;
    else {
        dd[x][y]=false;
        minn=min(minn,a[x][y]);
        mx=max(mx,a[x][y]);
        if (x==n && y==n){
            kq.push_back(mx-minn);
            minn=10000010;
            mx=0;
        }
        else{
            if(solve(x+1,y)!=-1);
            else if (solve(x-1,y)!=-1);
            else if (solve(x,y+1)!=-1);
            else if (solve(x,y-1)!=-1);
        }
    }
}
/*
int solve(){
    //lấy điểm đã trong hàng đợi từ trước
    pair<int,int> tmp;
    a.push({1,1});
    while(!a.empty()){
        tmp=a.front();
        dd[tmp.first,tmp.second]=false; //đánh dấu đường đi
        a.pop();
        //queue mấy điểm sau đấy
        if(dd[tmp.first-1,tmp.second] && tmp.first)
            a.push({tmp.first-1,tmp.second});
        if(dd[tmp.first+1,tmp.second])
            a.push({tmp.first+1,tmp.second});
        if(dd[tmp.first,tmp.second-1])
            a.push({tmp.first,tmp.second-1});
        if(dd[tmp.first-1,tmp.second+1])
            a.push({tmp.first-1,tmp.second+1});
    }
}*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    kq.clear();
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
    for (int i=0; i<=n+1; i++)
        for (int j=0; j<=n+1; j++)
            dd[i][j]=false;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            dd[i][j]=true;
    cout << solve(1,1) << endl;
    return 0;
}