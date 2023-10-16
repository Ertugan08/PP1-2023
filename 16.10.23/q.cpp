#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;
    int a[2*n-1][2*n-1];
    int l = n-1,r = n-1;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 2*n-1;j++){
            if(j <= r and j >= l){
                cout << "*";
            }else 
                cout << ".";
        }
        l--;
        r++;
        cout << endl;
    }
}