#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        if(i % 2 == 0 and i + 1 < n){//0,1,2,3,n-1;
            //
            //cout << i << " ";
            swap(a[i],a[i+1]);//swap(a[n-1],a[n])
        }
    }
    for(int i = 0;i < n;i++)
        cout << a[i] << " ";
}