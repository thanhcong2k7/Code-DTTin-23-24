#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);
  int t,i,j;
  string s;
  cin >> t;
  while(t--)
  {
    cin >> s;
    string s1="";
    for(i=0;i<s.length();i++){
      if(i%2==0){
        int z=char(s[i]);
        for(j=97;j<=122;j++){
        if(z!=j){
          s1+=char(j);
          break;
        }
        }
      }else{
        int h=char(s[i]);
        for(int j=122;j>=97;j--){
        if(h!=j){
          s1+=char(j);
          break;
        }
        }
      }
    }
    cout <<s1 <<endl;
  }
}