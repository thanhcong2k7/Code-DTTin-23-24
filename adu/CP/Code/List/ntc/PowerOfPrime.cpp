#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("PowerOfPrime.inp","r",stdin);
	freopen("PowerOfPrime.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t,n,p,cnt;
	cin >> t;
	while(t--){
		cin >> n >> p;
		cnt=0;
		if(n<p)
			cout << 0 << endl;
		else {
			for (int i=2; i<=n; i++){
				int nt=i;
				while(!(nt%p)){
					cnt++;
					nt/=p;
				}
			}
			cout << cnt << endl;
		}
	}
	return 0;
}