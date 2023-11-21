#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("replacedigit.inp","r",stdin);
	freopen("replacedigit.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	string st;
	cin >> t;
	while(t--){
		cin >> st;
		for (int i=0; i<st.length(); i++)
			st[i]=(st[i]=='0'?'5':st[i]);
		cout << st << endl;
	}
	return 0;
}