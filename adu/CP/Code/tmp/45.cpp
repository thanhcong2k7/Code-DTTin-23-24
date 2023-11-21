#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int a[n];
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=n-1; i>=0; i--)
		if(a[i]==k)
			cout << i+1 << " ";
	return 0;
}