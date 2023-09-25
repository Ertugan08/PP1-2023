#include <iostream>
#define ll long long
using namespace std;
int main() {
    int a,s = 0;
    cin >> a;
    int i, m[a];
    for ( i = 0; i < a; i++) {
        cin >> m[i];
    }
    ll sum = 0;
    //cout << sum << " ";
    //int -2 * 10^9 - 2 * 10^9
    //long long 2^64 - 2^64 (10^1)
    //long -+2^32
    for ( i = 0; i < a; i++) {
        sum+=m[i];
    }  
    cout << sum;  
}