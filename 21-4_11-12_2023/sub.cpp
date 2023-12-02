#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string a,b,st="";
    int sus=0,it=0;
    cin >> a >> b;
    while(it<min(a.length(),b.length())){
        int x=a[a.length()-1-it]-'0',y=b[b.length()-1-it]-'0'+sus;
        st=(char)(abs(x-y)+'0') + st;
        it++;
        if(x<y) sus=1;
        else sus=0;
    }
    cout << st << endl; //tf sai mẹ r, đéo làm nữa :)
    return 0;
}