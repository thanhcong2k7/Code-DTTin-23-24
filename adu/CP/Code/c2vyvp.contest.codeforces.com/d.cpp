#include <iostream>
using namespace std;
int th1(int a,int b){
    return a+b;
}
int th2(int a,int b){
	return (a%10)+(b/10)*10+b%10+(a/10)*10;
}
int th3(int a,int b){
    return (b%10)+(a/10)*10+a%10+(b/10)*10;
}
int main(){
    int t,a,b;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> a >>b;
        cout<< max(max(th1(a,b),th2(a,b)),th3(a,b)) << endl;
    }
}