#include <bits/stdc++.h>
using namespace std;
bool chk(string st){
    for (int i=0; i<st.length()/2; i++)
        if (st[i]!=st[st.length()-i-1])
            return 0;
    return 1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string st;
	int n,mx=0;
	cin >> n >> st;
	for (int x=0; x<n; x++)
		for (int y=x; y<n; y++)
			if(chk(st.substr(x,y))&& mx < st.substr(x,y).length())
				mx=st.substr(x,y).length();
	cout << mx << endl;
	return 0;
}