#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[7],tb=0;
	for (int i=0; i<=6; i++){
		cin >> a[i];
		tb+= a[i];
	}
	tb/=7;
	int num=0;
	cout << tb << endl;
	for (int i=0; i<=6;i++)
		num+=(tb<a[i]);
	cout << num << endl;
	return 0;
}