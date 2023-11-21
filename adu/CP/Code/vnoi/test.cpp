#include <bits/stdc++.h>
using namespace std;
int main() {
	string st;
	int tmp;
	cin >> tmp >> st;
    for (int i=0; i<st.length()/2; i++)
        if (st[i]!=st[st.length()-i-1]){
			cout << 0 << endl;
			return 0;
		}
	cout << 1 << endl;
	return 0;
}