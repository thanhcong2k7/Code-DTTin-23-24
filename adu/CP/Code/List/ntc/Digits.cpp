#include <bits/stdc++.h>
using namespace std;
int tong(int n){
	int t=0;
	while(n!=0){
		t+=n%10;
		n/=10;
	}
	return t;
}
int main(){
	freopen("Digits.inp","r",stdin);
	freopen("Digits.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		while(n>=10)
			n=tong(n);
		cout << n << endl;
	}
	return 0;
}