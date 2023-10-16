#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;cin >> n >> a >> b;
    if(a <= b and n > a){
        cout << "NO";
        return 0;
    }
    //10 10 10 --> a = 10 --> b -= 10 
    //10  3  3 --> a += 3 --> b -= 3 
    int cur = 0;
    int cnt = 0;
    while(true){
        cnt++;
        cur += a;
        if(cur >= n){
            break;
        }
        cur -= b;
    }
    cout << cnt; 
}