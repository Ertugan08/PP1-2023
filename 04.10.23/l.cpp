#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin >> n;
    int a[n+1];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    int m;cin >> m;
    int b[m+1]; 
    for(int i = 0;i < m;i++)
        cin >> b[i];
    int i = 0,j = 0;
    a[n] = INT_MAX;
    b[m] = INT_MAX;
    //4 5 6 7 10 INF
    //            ^
    //i = 4 == n
    //2 4 6 7 8 INF
    //           ^
    //j = 5 == m
    //result
    //2 4 4 5 6 6 7 7 8 10
    while(i != n or j != m){
        if(a[i] > b[j]){
            cout << b[j] << " ";
            j++;
        }else{
            cout << a[i] << " ";
            i++;
        }
    }
}