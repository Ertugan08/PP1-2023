#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    int x,y,z;
    //cin >> a >> b >> c
    cin >> a >> x >> b >> y >> c >> z;
    if(a + b + c > x + y + z){
        cout << "Grats Yelnur";
    }else if(a + b + c < x + y + z)
        cout << "Hee Hee Losers";
    else
        cout << "Draw";
}