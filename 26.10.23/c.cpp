#include <iostream>
#define ll long long
using namespace std;
int main() {
    double n,m;
    cin >> n >> m;
    int cnt = 0;
    while(true){
        cnt++;
        n *= 1.2;
        if(n >= m)
            break;
    }
    cout << cnt;
}