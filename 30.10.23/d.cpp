#include <bits/stdc++.h>

using namespace std;

int sum[100000001];
int ans[1001];

int main() {
    int n;cin >> n;
    int a[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(a[i][j] != a[j][i])
                flag = false;
        }
    }
    if(flag)
        cout << "Perfect";
    else 
        cout << "Not perfect";
    

}