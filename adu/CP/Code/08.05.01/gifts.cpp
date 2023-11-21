#include <bits/stdc++.h>
using namespace std;
void sort2(int a[],int b[],int n)
{
    int mn=a[0],mn2=b[0];
    for (int i=1; i<n; i++)
        if (mn>a[i]){
            int tmp=mn,tmp2=mn2;
            mn=a[i];mn2=b[i];
            a[i]=tmp;b[i]=tmp2;
        }
}
int maxarr(int a[],int b[],int n)
{
    int mx=a[0]-b[0],vt=0;
    for (int i=1; i<n; i++)
        if(mx<a[i]-b[i]){
            mx=a[i]=b[i];
            vt=i;
        }
    return vt;
}
int main()
{
    int n,b,p[1000],s[1000];
    cin >> n >> b;
    for (int i=0; i<n;i++)
        cin >> p[i] >> s[i];
    sort2(p,s,n);
    cout << maxarr(p,s,n)+1;
    return 0;
}