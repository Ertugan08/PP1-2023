#include <bits/stdc++.h>

using namespace std;

int main(){
    // n fact(n)-? , 1 * 2 * 3 * 4.. * n
    int n;cin >> n;
    int fact = 1;
    // 0 * 1 * 2
    for(int i = 1;i <= n;i++){
        fact = fact * i;
    }
    cout << fact;
}