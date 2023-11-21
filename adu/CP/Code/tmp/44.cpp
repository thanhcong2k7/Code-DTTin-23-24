#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],so=0;
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=1; i<n-1; i++){
		if(a[i]>a[i-1] && a[i] > a[i+1])
			so++;
	}
	cout << so << endl;
	return 0;
}