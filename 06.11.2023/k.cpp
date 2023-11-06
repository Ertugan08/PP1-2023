#include <bits/stdc++.h>  
using namespace std;  

bool check(int n,int * a,int k,int i= 0){
    if(i == n-1)
        return true;
    if(a[i+1] - a[i] <= k)
        return false;
    return check(n,a,k,i+1);
}

int main(){
    int n,k;cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a,a+n);
    if(check(n,a,k))
        cout << "no";
    else 
        cout << "cheater";
}