#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=0; i<n; i++)
		if(k>=a[i]){
			k-=a[i];
			cout << 1;
		}else cout << 0;
	return 0;
}