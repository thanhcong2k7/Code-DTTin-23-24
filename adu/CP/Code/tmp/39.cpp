#include <bits/stdc++.h>
using namespace std;
int main(){
	int tb=0,n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
		tb+= a[i];
	}
	tb/=n;
	int num=0;
	cout << tb << endl;
	for (int i=0; i<n;i++)
		num+=(tb<a[i]);
	cout << num << endl;
	return 0;
}