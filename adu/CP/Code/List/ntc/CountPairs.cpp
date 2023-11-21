#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("CountPairs.inp","r",stdin);
	freopen("CountPairs.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,k,cnt;
	cin >> t;
	while(t--){
		cnt=0;
		cin >> k;
		for (int i=1; i<=k; i++)
			for (int j=i+1; i+j <=k; j++)
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}