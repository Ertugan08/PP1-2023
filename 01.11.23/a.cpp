#include <bits/stdc++.h>

using namespace std;

int cnt;
int val = 0;

void Print(int n){
    if(val == n+1){
        cout << endl;
        return;
    }
    cout << val << " ";
    val++;
    cout << cnt << " ";
    Print(n);
    cnt--;
}

int main() {
    int n;cin >> n;
    cnt = n;
    Print(n);     
}