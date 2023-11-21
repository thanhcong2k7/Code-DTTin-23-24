#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],s;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);
	if(a[1]!=a[0])
		cout << a[0] << " ";
	for (int i=1; i<n-1; i++)
		if(a[i]!=a[i-1] && a[i]!=a[i+1])
			cout << a[i] << " ";
	if(a[n-1]!=a[n-2])
		cout << a[n-1] << " ";
	cout << endl;
	return 0;
}