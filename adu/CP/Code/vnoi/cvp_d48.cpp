#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
bool ktnt(ull n){
	for (ull i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
	/*
	bool prime[n+1];
	for (int i=2; i<=n; i++)
		prime[i]=true;
	prime[0]=false;
	prime[1]=false;
	for (int i=2; i<=n; i++)
		if(prime[i])
			for(int j=2*i; j<=n; j+=i)
				prime[i]=false;
	return prime[n];
	*/
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ull n;
	bool m=0;
	cin >> n;
	for (ull y=3; y<n; y++)
		if(4+y*y<=n && ktnt(y) && ktnt(4+y*y)){
			cout << 2 << " " << y << " " << 4+y*y << endl;
			m=1;
		}
	if(!m) cout << -1 << endl;
	return 0;
}