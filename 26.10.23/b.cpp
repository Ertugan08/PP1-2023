#include <iostream>
#define ll long long
using namespace std;
int main() {
    int h,n,m;
    cin >> h >> n >> m;
    if(n <= m and h > n){
        cout << -1;
        return 0;
    }
    int cur = 0;
    int cnt = 0;
    while(true){
        cur += n;
        cnt++;
        
        if(cur >= h)
            break;
        cur -= m;
    }
    cout << cnt;
}