#include <bits/stdc++.h>

using namespace std;

bool books(int * a,int n,int x){
    for(int i = 0;i < n;i++){
        if(a[i] == x){
            return true;
        }
    }
    return false;
}

int main(){
    int n,x;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    cin >> x;
    
    if(books(a,n,x))
        cout << "Yes";
    else 
        cout << "No";
}