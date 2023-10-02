#include <bits/stdc++.h>

using namespace std;
int main() {
    string s;cin >> s;//s = test
    string z = s;//reverse_s = test
    reverse(z.begin(),z.end());//tset
    //cout << s << " " << reverse_s;
    if(s == z)
        cout << "YES";
    else 
        cout << "NO";
}