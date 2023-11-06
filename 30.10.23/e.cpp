#include <bits/stdc++.h>

using namespace std;

int sum[100000001];
int ans[1001];

int main() {
    double a,b;cin >> a >> b;
    double ans;
    int ch = 1;
    if(b >= a)
        ans = b/a;
    else {
        ans = a/b;
        ch = -1;
    }
    
    double res = log2(ans);
    if(res == int(res)){
        cout << "YES " << res * ch;
    }else   
        cout << "NO";
}