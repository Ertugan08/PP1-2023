#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;cin >> n;
    int a[n];
    for(int i =0;i < n;i++)
        cin >> a[i];
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for(int i = 0;i < n;i++){
        if(a[i] < min1){
            min1 = a[i];
        }
    }
    for(int i = 0;i < n;i++){
        if(a[i] < min2 and a[i] != min1){
            min2 = a[i];
        }
    }
    int cnt = 0;
    for(int i = 0;i < n;i++)
        if(a[i] == min2)
            cnt++;
    cout << cnt;
}