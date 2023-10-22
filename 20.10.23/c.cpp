#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void ans(int *a,int *b,int n){
    sort(a,a+n);
    sort(b,b+n);
    int i = 0,j = 0;
    int cnt = 0;
    while(true){
        if(i == n or j == n)
            break;
        if(a[i] == b[j]){
            cnt++;
            i++;
            j++;
        }
        if(i == n or j == n)
            break;
        if(a[i] > b[j])
            j++;
        if(i == n or j == n)
            break;
        if(a[i] < b[j])
            i++;
    }
    cout << cnt;
}

int main(){
    int n;cin >> n;
    int a[n],b[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    for(int i = 0;i < n;i++)
        cin >> b[i];
    ans(a,b,n);
}