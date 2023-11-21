#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("Message.inp","r",stdin);
	freopen("Message.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << 2*(n-1) << endl;
	}
	return 0;
}