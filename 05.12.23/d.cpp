#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(i+1 < n and j+1 < m)
                if(a[i][j] == a[i+1][j] and a[i][j] == a[i][j+1] and a[i][j] == a[i+1][j+1]){
                    cout << "NO";
                    return 0;
                }
        }
    }
    cout << "YES";
}