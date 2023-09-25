#include <bits/stdc++.h>

using namespace std;

int main(){
    //          0,1, 2, 3,  4
    //int a[5] = {1,3,-6,100,66};
    //cout << a[3] << " " << a[4] << endl;
    //a[3] = -9;
    //cout << a[3] << " " << a[4];
    //6
    //0 1 2 3 4 5    7
    //4 5 3 4 2 3    x
    //4 3 2
    int n;cin >> n;
    int arr[n];
    //0,1,2,3,4,5
    //2,4,6
    //
    //5,7,10321,23,123

    //cout << arr[] << " ";
    //
    //0,...,n
    //0,1,2 -> iteration
    //0,1,2
    // itertation = index;
    //0 --> 4
    //1 --> 5
    //
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        arr[i] = x;
    }
    //0,1,2..n
    for(int i = 0;i < n;i++){
        if(i % 2 == 0)
            cout << arr[i] << " ";
    //    cout << arr[i] << " ";
    }
}