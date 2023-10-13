#include <bits/stdc++.h>

using namespace std;

int main(){
    float n;cin >> n;
    int target;cin >> target;
    //10,11,12.1,13.21,
    //20
    int cnt = 0;
    while(n < target){
        n *= 1.1;
        cnt++;
        cout << n << ' ';
    }
    cout << cnt + 1;
}