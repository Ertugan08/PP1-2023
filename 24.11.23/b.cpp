#include<bits/stdc++.h>
using namespace std;

bool cmp(int n1,int n2){
    if(n1 % 2 == 0 and n2 % 2 == 1){
        return true;
    }else if(n1 % 2 == 1 and n2 % 2 == 0){
        return false;
    }else{
        if(n1 > n2)
            return false;
        else 
            return true;
    }
}
//1 3 6 2 7 5 4
//2 4 6 1 3 5 7
int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i = 0;i < n;i++)
        cout << a[i] << " ";
}