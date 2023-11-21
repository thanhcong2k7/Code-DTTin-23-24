#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	int a[m+2][n+2],b[m+2][n+2];
	for (int i=0;i<=m+1; i++)
		for (int j=0; j<=n+1; j++){
			a[i][j]=123456789;
			b[i][j]=123456789;
		}
	for (int i=1; i<=m; i++)
		for (int j=1; j<=n; j++)
			cin >> a[i][j];
	for (int j=1; j<=n; j++)
		b[1][j]=a[1][j];
	for (int i=2; i<=m; i++)
		for (int j=1; j<=n; j++)
			b[i][j]=b[i-1][j]+min(min(a[i][j],a[i][j-1]),a[i][j+1]);
	int mn=a[m][1];
	for (int j=1; j<=n; j++)
		mn=min(mn,b[m][j]);
	cout << mn << endl;
	return 0;
}