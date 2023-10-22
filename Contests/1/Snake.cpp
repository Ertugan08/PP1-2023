#include <bits/stdc++.h>

using namespace std;
int main() {
    freopen("write.txt","r", stdin);
    freopen("read.txt","w",stdout);
    int n;cin >> n;
    int cnt = 1;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cout << cnt*cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    
}