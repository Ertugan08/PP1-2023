#include <bits/stdc++.h>

using namespace std;



int main() {
    int n,m;cin >> n >> m;
    bool a[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            a[i][j] = false;
        }
    }
    int t;cin >> t;
    while(t--){
        int x1,y1,x2,y2;cin >> x1 >> y1 >> x2 >> y2;
        //x1--;y1--;x2--;y2--;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if((j >= x1 and j < x2) and (i >= y1 and i < y2)){
                    //cout << i << " " << j << "\n";
                    a[i][j] = true;
                    //2 3
                    //0 0 1 2
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j]){
                sum++;
            }
        }
    }
    cout << n * m - sum;
}