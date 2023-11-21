#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("game.inp","r",stdin);
	freopen("game.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n,x,y;
	cin >> t;
	while(t--){
		cin >> x >> y >> n;
		cout << max(x*pow(2,n),y*pow(2,(n%2==0?n:n-1)))/min(x*pow(2,n),y*pow(2,(n%2==0?n:n-1))) << endl;
	}
	return 0;
}