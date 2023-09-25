#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y;cin >> x >> y;
    double run = x;
    int cnt = 1;
    while(run < y){
        run *= 1.1;
    //    cout << cnt << ":" << run << endl;
        cnt++;
    }
    cout << cnt;
}