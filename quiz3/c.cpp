#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int mx = 0;
    for(int i = 0;i < n;i++){   
        for(int j = i + 1;j < n;j++){
            int gcd = __gcd(a[i],a[j]);
            mx = max(gcd,mx);
        }
    }
    cout << mx;
}