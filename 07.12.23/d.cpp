#include<bits/stdc++.h>
using namespace std;

bool IsPal(int * a,int n){
    for(int i = 0;i < n;i++){
        if(a[i] != a[n-i-1])
            return false;
    }
    return true;
}

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    do{
        if(IsPal(a,n)){
            for(int i = 0;i < n;i++)
                cout << a[i] << ' ';
            return 0;
        }
    }while(next_permutation(a,a+n));
    cout << "Impossible";
}