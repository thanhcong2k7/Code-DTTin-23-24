#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(NULL));
	int n,k;
	cin >> n >> k;
	int a[n];
	for (int i=0; i<n; i++){
		a[i] = rand() % (300 - (-300) + 1) + (-300);
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i=0; i<n; i++)
		if(a[i]%k==0)
			cout << a[i] << " ";
	cout << endl;
	return 0;
}
