//4 2

//5 4
//6 9
//3 7
//2 9

//5 6 3 2
//4 9 7 9

#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,m;cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            cin >> a[i][j];
    cout << endl;
    for(int i = 0;i < m;i++){
         for(int j = 0;j < n;j++){
            cout << a[j][i] << " ";
         }  
         cout << endl;
    }
}