#include <bits/stdc++.h>

using namespace std;

int main(){
    // n sum(1,2,3...n)-?
    int n;cin >> n;
    int sum = 0;//21324124,312412412

    for(int i = 1;i <= n;i++){
        sum = sum + i;
        //cout << i << " ";
    }
    //cout << i;
    cout << sum;
}