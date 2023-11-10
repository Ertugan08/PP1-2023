#include <bits/stdc++.h>

using namespace std;

bool IsPrime(int x){
    if(x==1)
        return false;
    for(int i = 2;i <= sqrt(x);i++){
        if(x % i == 0)
            return false;
    }
    return true;
}

int main(){
    vector<int> primes;
    for(int i = 2;i < 10000;i++){
        if(IsPrime(i))
            primes.push_back(i);
    }
    vector<int> superprimes;
    for(int i = 0;i < primes.size();i++){
        if(IsPrime(i+1)){
            superprimes.push_back(primes[i]);
        }
    }
    int n;cin >> n;
    cout << superprimes[n-1];
}