#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string n;
    cin >> t; //nhập vào số lượng n
    for (int i=0; i<t; i++){
        cin >> n; // nhập vào n
        for (int j=0; j<n.length(); j++) //cho j chạy từ đầu đến cuối xâu để kiểm tra
            if(n[j]=='0') //kiểm tra kí tự thứ j+1 xem nếu = 0 thì thay thành 5
                n[j]='5';
        cout << n << endl; //in ra xâu đã xử lí
    }
    return 0;
}