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
    int mn = INT_MAX;//INT_MAX = 2*10^9 ->INF
    //a[0] --> min
    int pos = -1;
    for(int i = 0;i < n;i++){
        int sum = 0;
        for(int j = 0;j < m;j++){
            sum += a[i][j];
        }
        if(sum < mn){
            mn = sum;
            pos = i;
        }
    }
    
    cout << pos+1;
       
}