#include<bits/stdc++.h>
using namespace std;

bool cmp(int n1,int n2){
    return n1 > n2;
    // if(n1 > n2)
    //     return true;
    // else 
    //     return false;
}
//1 3 6 2 7 5 4
//7 6 5 4 3 2 1

//3 5 9 9 
//9 9 5 3
int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i = 0;i < n;i++)
        cout << a[i] << " ";
}