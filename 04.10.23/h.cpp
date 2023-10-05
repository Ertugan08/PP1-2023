#include <bits/stdc++.h>

using namespace std;

int main(){
    //15 12 13 10 3
    //1  2  3  4  5
    //3 5
    //0  1  2  3  4
    //int i    l --> r 
    //3 4 5
    //1 2
    //13 + 10 + 3 = 26
    int n,l,r;cin >> n >> l >> r;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    //3 4 5
    long long  sum = 0;
    for(int i = l-1;i <= r-1;i++){
        sum += arr[i];
    }
    cout << sum;
}