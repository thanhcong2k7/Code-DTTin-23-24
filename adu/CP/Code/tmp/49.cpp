#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],s=1;
	for (int i=0; i<n; i++)
		cin >> a[i];
	sort(a,a+n);
	for (int i=1; i<n; i++)
		if(a[i]!=a[i-1])
			s++;
	cout << s << endl;
	return 0;
}