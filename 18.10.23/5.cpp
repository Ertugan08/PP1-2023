#include <bits/stdc++.h>

using namespace std;


int Sum(int * b,int n){
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += b[i];
    }
    return sum;
}


int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    cout << Sum(a,n);
}