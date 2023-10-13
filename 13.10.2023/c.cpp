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
    //mx    *  
    //     -1 -2 4 
    //      4 6 9 
    //    # 12 3 4 
    cout << endl;
    for(int j = 0;j < m;j++){
        for(int i = n-1;i >= 0;i--){
    //        cout << i << j << " ";
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = m-1;j >= 0;j--){
            cout << i << j << " ";
        }
    }

    //mx = a[0]
    //mx = 0
    //if(a[mx] < a[i])
    //  mx = i;
    //mx = a[0][0]
    //mx_row = 0 mx_col = 0
    //a[mx_row][mx_col] < a[i][j]
    //mx_row = i
    //mx_col = j
}
