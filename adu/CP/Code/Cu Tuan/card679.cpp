#include <bits/stdc++.h>
using namespace std;
int n;
int length(int arr[])
{
    int mx[n]={0},dem=1;
    for (int i=1; i<=n/2; i++)
        if(arr[i+1]==arr[i]+1)
            mx[dem]++;
        else dem++;
    sort(mx+1,mx+dem+1);
    return mx[dem];
}
int main()
{
    int duong[50002],tung[50002],de=1,tmp[100000];
    cin >> n;
    for (int i=1; i<=n/2; i++)
        cin >> duong[i];
    for (int i=1; i<=n; i++)
        tmp[i]=i;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n;j++)
            if(duong[i]==tmp[j]){
                tmp[j]=0;
            }
    for (int i=1; i<=n; i++)
        if(tmp[i]>0)
        {
            tung[de]=tmp[i];
            de++;
        }
    int d=length(duong),t=length(tung);
    if(d==t)
    {
        if(duong[n/2]==n) cout << "DUONG";
        else if(tung[n/2]==n) cout << "TUNG";
    }
    else if(d<t) cout << "TUNG";
    else if(d>t) cout << "DUONG";
    return 0;
}