#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        arr[i] = x;
    }
    //5
    //0 1 2 3 4
    //1 2 3 4 5 -> 5
    // -1 2 10 12 -15 -> 12
    // mx = max(a[i],mx);
    // mx = -10000000
    // mx = -1
    // max(-1,-1) = -1 -> mx = -1
    // mx= max(-1,2) = 2
    // mx = max(2,10) = 10
    // mx = max(12,10) = 12
    // mx = max(12,-15) = 12 
    int mx = arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i] > mx){
            mx = arr[i];
        }
    }
    cout << mx;
}