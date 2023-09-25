#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
       cin >> a[i];
    //1 2 3 4
    //1 2 3 4 5 6 7 8 9 10

    //4 3 2 1
    //1 --> 4 2 3 1
    //2 --> 4 3 2 1 --> ans
    //3 --> 1 3 2 4
    //4 --> 4 3 2 1 
    //4 3 2 1

    //1 2 
    for(int i = 0;i < n/2;i++){
    //    cout << a[i] << " ";
        swap(a[i],a[n-i-1]);
    }
    for(int i = 0;i < n;i++)
       cout << a[i] << " ";
}