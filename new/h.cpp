#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int odd = 0,even = 0;
    while(n != 0){
        int digit = n % 10;
        if(digit % 2 == 0){
            even += digit;
        }else 
            odd += digit;
        n /= 10;
    }
    if(even > odd){
        cout << even;
    }else if(even < odd)
        cout << odd;
    else    
        cout << odd + even;
}