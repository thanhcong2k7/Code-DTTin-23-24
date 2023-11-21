#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,k,c=0;
		cin >> n >> k;
		k+=48;
		string s,st="";
		for (int i=0; i<n; i++)
		{
			cin >> s;
			st+=s;
		}
		for (int i=0; i<st.length(); i++)
			c+=(st[i]==k);
		cout << c << endl;
	}
	return 0;
}