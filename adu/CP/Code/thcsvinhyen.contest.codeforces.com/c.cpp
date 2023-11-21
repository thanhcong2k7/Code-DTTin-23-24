#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string pheptinh;
    int a[100]={0},j=0;
    cin >> pheptinh;
    for (int i=0; i<pheptinh.length(); i++)
    {
        if (pheptinh[i]!='+'){
            j++;
            a[j]=pheptinh[i]-48;
        }
    }
    sort(a+1,a+j+1);
    for (int i=1; i<=j; i++)
        if (i==j) cout << a[i];else cout << a[i] << "+";
    return 0;
}