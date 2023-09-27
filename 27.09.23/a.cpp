#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;cin >> n;
    int a,b,c,d;
    //1221
    a = n % 10;
    //a = 1
    n /= 10;
    //n = 122
    b = n % 10;
    //b = 2
    n /= 10;
    //n = 12
    c = n % 10;
    //c = 2
    n /= 10;
    // n = 1
    d = n % 10;
    //d = 1
    if(a == d and b == c)
        cout << "YES";
    else 
        cout << "NO";
}