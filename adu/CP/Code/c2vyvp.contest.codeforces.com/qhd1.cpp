#include <bits/stdc++.h>
using namespace std;
int getmax(int a, int b, int c)
{
    int tmp=a;
    if (tmp < b) tmp=b;
    if (tmp < c) tmp=c;
    return tmp;
}
int main()
{
    int col,row,mx=0;
    cin >> col >> row;
    int a[col+2][row+2];
    for (int i=0; i<=col+2; i++)
        for (int j=0; j<=row+2; j++)
            a[i][j]=0;
    for (int i=1; i<=col; i++)
        for (int j=1; j<=row; j++)
            cin >> a[i][j];
    for (int i=1; i<=col; i++)
        for (int j=1; j<=row-1; j++)
            a[i][j+1]=getmax(a[i][j]+a[i-1][j+1], a[i][j]+a[i][j+1], a[i][j]+a[i+1][j+1]);
    mx=a[1][row];
    for (int i=2; i<=col+1; i++)
        if (mx<a[i][row+1]) mx=a[i][row+1];
    cout << mx;
    return 0;
}