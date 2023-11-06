#include <bits/stdc++.h>

using namespace std;

int MAX(int * a,int mx,int n,int ind = 0){
    if(ind == n)
        return mx; 
    mx = max(mx,a[ind]);
    //cout << mx << " ";
    MAX(a,mx,n,ind+1);
}

int main() {
    int n;cin >> n;
    //max -> ?
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    cout << MAX(a,INT_MIN,n);

}