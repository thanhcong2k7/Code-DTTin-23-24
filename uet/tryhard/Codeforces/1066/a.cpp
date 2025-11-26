#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for (int z=0; z<t; z++){
        cin >> n;
        int a[n+1];
        //cout << "dbg arg " << t << " " << n << " " << z << endl;
        for (int i=0; i<=n; i++)
            a[i]=-1; //init arr
        for (int i=0; i<n; i++){
            int temp;
            cin >> temp;
            if (a[temp]!=-1)
                a[temp]++;
            else {
                a[temp]=1;
            }
            //cout << "dbg input " << temp << " " << a[temp] << endl;
        }
        int rm = 0;
        for (int i=0; i<=n; i++){
            if (a[i]!=-1){
                if (a[i]<i)
                    rm += a[i];
                else rm +=a[i]-i;
                //cout << "dbg " << i << " " << a[i] << " " << rm << endl;
            }
        }
        cout << rm << endl;
    }
}