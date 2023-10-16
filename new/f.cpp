#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    bool ok = true;
    int cnt = 0;
    //12/2=6
    //6/2=3
    //3/2!=
    //4/2=2
    //2/2=1
    while(n != 1){
        if(n % 2 != 0){
            ok = false;
            break;
        }
        n /= 2;
        cnt++;
    }
    if(ok){
        cout << cnt;
    }else{
        cout << n;
    }
}