#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,m;cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            cin >> a[i][j];
    //0 1 2 3 4 5 6 7
    //1 2 3 4 5 6 7 8
    //0-7, 1-6 ,2-5 , 3-4
    //last_index-i-1 
    for(int i = 0;i < m;i++){
        if(a[0][i] != a[0][m-i-1]){
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0;i < m;i++){
        if(a[n-1][i] != a[n-1][m-i-1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}