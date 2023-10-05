#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;cin >> n >> m;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    //7 10 11
    //0  1  2
    //7 9 10 11
    //0 1  2  3
    //2 5 7
    //4
    //2 4 5 7
    // 10  15  20  21 23
    //20
    //10 15 20 21 23
//  5 12
//  1 6 7 12 13
    //1  3 5 12 14
    //15
    //1 3 5 12 14 15
    for(int i = 0;i < n;i++){
        //if(arr[i] > m and arr[i+1] < m)
        if(arr[i] >= m){
            cout << i;
            return 0;
        }
    }
    cout << n;
}