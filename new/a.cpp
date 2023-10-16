#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int mx = a[0],mn = a[0];
    //6
    //44 14 41 11 45 13 64
    //mx = 44
    //mn = 44
    for(int i = 0;i < n;i++){
        //i = 1
        //a[i] = 14
        if(mx < a[i]){
            mx = a[i];
            //mx = 64 
        }
        if(mn > a[i]){
            mn = a[i];
            //mn = 14
        }
    }
    cout << mx - mn;
}