#include <bits/stdc++.h>

using namespace std;
int main() {
    int a,s = 0;
    cin >> a;
    int i, m[a];
    for ( i = 0; i < a; i++) {
        cin >> m[i];
    }
    int max = m[0];
    int ans = 0;
    for ( i = 0; i < a; i++) {
        if ( max < m[i] ) {
            max=m[i];
            ans = i;
        }
    }  
    cout << ans+1;  
}