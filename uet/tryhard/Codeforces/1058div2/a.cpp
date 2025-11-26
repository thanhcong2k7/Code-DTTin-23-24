    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin >> t;
        for (int i=0; i<t; i++)
        {
            int n,m=0;
            cin >> n;
            int a[101];
            for (int j=0; j<=100; j++)
                a[j] = 0;
            for (int j=0; j<n; j++){
                int tmp;
                cin >> tmp;
                if (!a[tmp]) a[tmp]=1;
            }
            for (int j=0; j<101; j++)
                if (!a[j]){ 
                    cout << j << endl;
                    break;
                }
        }
        return 0;
    }