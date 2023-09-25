#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;cin >> n >> k;
    if(n>k)
        cout << ceil((n*2)*1.0/k);
    else    
        cout << 2;
}