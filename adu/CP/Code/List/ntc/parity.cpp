#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("parity.inp","r",stdin);
	freopen("parity.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long t,n,cnt=0;
	cin >> t;
	while(t--){
		cnt=0;
		cin >> n;
		while (n>0){
			cnt += n%2;
			n/=2;
		}
		cout << (cnt%2==0?"even":"odd") << endl;
	}
	return 0;
}