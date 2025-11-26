#include <bits/stdc++.h>
using namespace std;
struct coord{
    int x;
    int y;
};
stack<coord> border;
stack<coord> curborder;
void op4(){
    while(curborder.size()>0){
        coord tmp=curborder.top();
        curborder.pop();
        coord tmp1;
        tmp1.x=tmp.x+1;
        tmp1.y=tmp.y;
        border.push(tmp1);
        tmp1.x=tmp.x;
        tmp1.y=tmp.y+1;
        border.push(tmp1);
    }
    swap(curborder,border);
}
void op8(){
    while(curborder.size()>0){
        coord tmp=curborder.top();
        curborder.pop();
        coord tmp1;
        tmp1.x=tmp.x+1;
        tmp1.y=tmp.y;
        border.push(tmp1);
        tmp1.x=tmp.x;
        tmp1.y=tmp.y+1;
        border.push(tmp1);
        tmp1.x=tmp.x+1;
        tmp1.y=tmp.y+1;
        border.push(tmp1);
    }
    swap(curborder,border);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for (;t>0;t--){
        int n,x,y;
        cin >> n >> x >> y;
        string op;
        cin >> op;
        x=abs(x);
        y=abs(y);
        coord tmp;
        tmp.x=0;
        tmp.y=0;
        curborder.push(tmp);
        for (int i=0; i<op.length(); i++){
            if(op[i]=='4')
                op4();
            else op8();
        }
        int maxx=border.top().x,maxy=border.top().y,sz=border.size();
        coord borderarr[border.size()];
        for (int i=0; i<border.size(); i++){
            borderarr[i]=border.top();
            if (maxx<borderarr[i].x)
                maxx=borderarr[i].x;
            if (maxy<borderarr[i].y)
                maxy=borderarr[i].y;
            border.pop();
        }
        if (x>maxx || y>maxy){
            cout << "NO" << endl;
            continue;
        }
        for (int i=0; i<sz; i++){
            if (borderarr[i].x>=x && borderarr[i].y>=y){
                cout << "YES" << endl;
                break;
            }
            if (i==sz-1)
                cout << "NO" << endl;
        }
    }
    return 0;
}