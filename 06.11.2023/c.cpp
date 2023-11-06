#include <bits/stdc++.h>  
using namespace std;  

int Fact(long long n,long long ans = 1){
    if(n == 1 or n == 0)
        return ans;
    ans *= n;
    return Fact(n-1,ans);
}


int main(){
    long long n;cin >> n;
    cout << Fact(n); 
}