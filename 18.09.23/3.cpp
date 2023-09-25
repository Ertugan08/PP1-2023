#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;
    //cout << (n % 2 == 0);
    if(n % 2 == 1){
            cout << "Super";
        // n = 5
        //        bool = true       bool = true   bool = true
    }else if((n % 2 == 0) && (n >= 2 && n <= 5)){
        cout << "Not Super";
    }else if(n % 2 == 0 && (n >= 6 and n <= 20)){
        cout << "Super";
    }else if(n % 2 == 0 && n > 20){
        cout << "Not Super";
    }
}