#include <bits/stdc++.h>

using namespace std;

bool IsPrime(int n){
    if (n == 1)
        return false;
    for(int i = 2;i < n;i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    freopen("write.txt","r", stdin);
    freopen("read.txt","w",stdout);
    int n,m;cin >> n >> m;
    for(int i = n;i <= m;i++)
        if(IsPrime(i))
            cout << i << " ";
    
}