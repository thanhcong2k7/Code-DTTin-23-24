#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],so=0;
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=0; i<n; i++)
		for (int j=i; j<n; j++)
			if(sqrt(a[i]*a[j])*sqrt(a[i]*a[j]) == a[i]*a[j])
				so++;
	cout << so << endl;
	return 0;
}