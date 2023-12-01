#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MaxN = 1 + 1e3, dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int n, m, a[MaxN][MaxN], mark[MaxN][MaxN],minn=2000000000;
int Loang(int x, int y){
    int res = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    mark[x][y] = 1;
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();
        res++;
        for(int i = 0 ; i < 4 ; ++i)
            if(x + dx[i] > 0 && x + dx[i] <= n && y + dy[i] > 0 && y + dy[i] <= m && a[x + dx[i]][y + dy[i]] == 1 && !mark[x + dx[i]][y + dy[i]]){
                q.push({x + dx[i], y + dy[i]});
                mark[x + dx[i]][y + dy[i]] = 1;
            }
    }
    return res;
}
int main(){
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> a[i][j];
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            if(a[i][j] == 1 && !mark[i][j])
                ans.push_back(Loang(i, j));
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for(int i : ans)
        cout << i << " ";
    return 0;
}
