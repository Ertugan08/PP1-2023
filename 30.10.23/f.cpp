#include <bits/stdc++.h>

using namespace std;

int Reverse(int x){
    int nw = 0;
    int pw = log10(x);
    int cnt = pow(10,pw);
    while(x != 0){
        //cout << cnt << " ";
        //927
        //7 * 100 = 700
        //2 * 10 = 20
        //9 * 1 = 9
        //729
        nw += (x % 10) * cnt;
        cnt /= 10;
        x /= 10;
    }
    return nw;
}

int main() {
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int b[n];
    bool flag = true;
    for(int i = 0;i < n/2;i++){
        if(a[i] != Reverse(a[n-i-1])){
            flag = false;
        }
    }
    if(flag){
        cout << "YES";
        return 0;
    }
    flag = true;
    for(int i = n/2;i < n;i++){
        if(a[i] != Reverse(a[n-i-1])){
            flag = false;
        }
    }
    if(flag){
        cout << "YES";
        return 0;
    }else 
        cout << "NO";
}