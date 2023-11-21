#include <bits/stdc++.h>
using namespace std;
int u(int n){
	int tmp=0;
	for (int i=1; i<=n; i++)
		tmp+=(n%i==0?1:0);
	return tmp;
}
int main(){
	unsigned int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for (int i=n+1; true; i++)
			if(u(n)<u(i)){
				cout << i << endl;
				break;
			}
	}
	return 0;
}