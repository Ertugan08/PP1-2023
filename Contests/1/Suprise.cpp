#include <bits/stdc++.h>

using namespace std;
int main() {
    freopen("write.txt","r", stdin);
    freopen("read.txt","w",stdout);
    int n;cin >> n;
    int l = n/2,r = n/2;
    for(int i = 0;i < n/2+1;i++){
        for(int j = 0;j < n;j++){
            if(j == l or j == r or i == n/2)
                cout << '$';
            else 
                cout << '.';
        }
        l--;
        r++;
        cout << endl;
    }
}