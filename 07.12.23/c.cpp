#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin >> n >> k;
    vector<int> v;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        v.push_back(x);
    }
    int a[n];
    for(int i = 0;i < n;i++){
        if(i-k >= 0)  
            a[(i-k)] = v[i];
        else
            a[n+(i-k)] = v[i];
    }
    reverse(a,a+n);
    for(int i = 0;i < n;i++)
        cout << a[i] <<  " ";
}