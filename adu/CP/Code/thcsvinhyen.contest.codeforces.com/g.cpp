#include <iostream>
using namespace std;
int main()
{
    bool nguyhiem=false;
    string k;
    cin >> k;
    if (k.length()<=7) {cout << "NO"; return 0;}
    for (int i=0; i<k.length()-6; i++)
        if(k[i]==k[i+1] && 
           k[i+1]==k[i+2] &&
           k[i+2]==k[i+3] &&
           k[i+3]==k[i+4] &&
           k[i+4]==k[i+5] &&
           k[i+5]==k[i+6]/* &&
           k[i+6]==k[i+7]*/) {nguyhiem=true;break;}
    cout << (nguyhiem?"YES":"NO");
    return 0;
}