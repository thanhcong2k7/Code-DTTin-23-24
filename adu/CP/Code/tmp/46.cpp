#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n+1];
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=0; i<=n; i++)
		if(a[i] <= k && a[i+1] >= k){
			for (int j=i+1; j<=n; j++)
				swap(k,a[j]);
			break;
		}
	for (int i=0; i<=n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}