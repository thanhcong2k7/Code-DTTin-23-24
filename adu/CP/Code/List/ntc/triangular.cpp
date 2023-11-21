#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("triangular.inp","r",stdin);
	freopen("triangular.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for (int i=1; n>=i; i++)
			n-=i;
		cout << (n==0) << endl;
	}
	return 0;
}