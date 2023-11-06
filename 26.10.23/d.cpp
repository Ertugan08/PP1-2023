#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,a;
    cin >> n >> a;
    int m[a];
    for (int i = 0;i<a;i++){
        cin >> m[i];
    }
    sort(m,m+a);
    if(m[a-1]-m[0]<=n){
        cout << "YES";
        return 0;    
    }
    cout << "NO";
}