#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++){
        //0
        //0 1 2
        //1
        //0 1 2
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        //i : 0
        for(int j = 0;j < m;j++){
            //j : 0,1,2
            //a[j][i]
            //a[0][0],a[1][0],a[2][0]

        //    cout << j << i << " : " << a[j][i] << " ";
        }
        //cout << "\n";
    }
    //0

    //int mx = a[0][0];
    int sum = 0;
    //3 3
    //-1 -2 4 --> 4
    //4 6 9 --> 9
    //12 3 4 --> 12
    //4 9 12

    //-1 -2 4
    //mx = a[0]
    //-1 -2 4
    //4 6 9
    //12 3 4
    //mx = a[0][0]
    //mx = a[1][0]
    //
    //mx = a[i][0]

    for(int i = 0;i < n;i++){
        int mx = a[i][0];
        for(int j = 0;j < m;j++){
            if(mx < a[i][j])
                mx = a[i][j];
        }
        cout << mx << " ";
    }
   // cout << sum;
}