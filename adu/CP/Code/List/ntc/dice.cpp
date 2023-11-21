#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("dice.inp","r",stdin);
	freopen("dice.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << (7-n) << endl;
	}
	return 0;
}