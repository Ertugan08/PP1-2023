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
    //3 3
    //a[0][0]
    //mx = a[0][1]
    //mx = a[0][2]
    //mx       *
    //     -1 -2 4 
    //      4 6 9 
    //      12 3 4 
    //
    //12 6 9

    //problem
    // 3 4
    // 1 2 4 6
    // 2 5 7 3
    // 1 4 5 94
    //
    // The sum of row number 1 is 13
    // The sum of row number 2 is 17
    // The sum of row number 3 is 104
    // The sum of column number 1 is 4
    // The sum of column number 2 is 11
    // The sum of column number 3 is 16
    // The sum of column number 4 is 103
    for(int j = 0;j < m;j++){
        int mx = a[0][j];
        //j = 0
        for(int i = 0;i < n;i++){
            if(mx < a[i][j])
                mx = a[i][j];
        }
        cout << mx << " ";
    }
}