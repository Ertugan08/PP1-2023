#include <iostream>
#define ll long long
using namespace std;
int main() {
    int t,n;
    cin >> t >> n;
    // for(int i = 0;i < n;i++)
    //     t *= 2;
    while(n != 0){
        t *= 2;
        n--;
    }
    cout << t;
}