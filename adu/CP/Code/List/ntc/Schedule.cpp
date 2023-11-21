#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("Schedule.inp","r",stdin);
	freopen("Schedule.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		if(x>=10)
			cout << 0 << endl;
		else cout << (10-x)*(n-1) << endl;
	}
	return 0;
}