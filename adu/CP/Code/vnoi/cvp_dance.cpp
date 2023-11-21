#include <bits/stdc++.h>
using namespace std;
const long long maxN=1e5+5;
long long a[maxN],n,k;
long long main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for (long long i=1; i<=n; i++)
		cin >> a[i];
	sort(a+1,a+n+1);
	long long cnt=0;
	for (long long i=1; i<=n-1; i++){
		long long lo=lower_bound(a+i+1,a+n+1,a[i]+k)-a;
		if(a[lo] != a[i]+k) continue;
		long long hi=upper_bound(a+i+1,a+n+1,a[i]+k)-a-1;
		cnt+=hi-lo+1;
	}
	cout << cnt << endl;
	return 0;
}