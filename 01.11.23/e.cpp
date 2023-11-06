#include<bits/stdc++.h> 
using namespace std; 
 
int rec(int x, int n){ 
    if(n == 0){ 
        return x; 
    } 
    x *= 2; 
    return rec(x, n-1);// 32 -> 32 
} 
 
int main(){ 
    int n; 
    cin >> n; 
    int x = 1; 
    cout << rec(x, n); 
}