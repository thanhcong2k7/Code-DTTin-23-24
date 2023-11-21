#include <bits/stdc++.h>
using namespace std;
int win(int m,int tm){
	int temp=tm,s=0;
	while(m>1 && tm > 1){
		if(m%tm==0){
			m--;
			s++;
		}
		else tm--;
	}
	return s;
}
int main(){
	freopen("Penalty.inp","r",stdin);
	freopen("Penalty.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int test,t,q,l;
	cin >> test;
	while(test--){
		cin >> t >> q >> l;
		cout << win(t,l) << " " << win(q,l) << endl;
	}
	return 0;
}