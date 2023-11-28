#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Convert seconds to h:m:s
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int s;
    cin >> s;
    int h=s/(60*60),m=(s/60-(int)(s/(60*60))*60);
    s-=h*60*60+m*60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}