#include <bits/stdc++.h>

using namespace std;
int main() {
    string s;cin >> s;
    int cnt1 = 0,cnt2 = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            cnt1++;
        }else if(s[i] >= 'a' and s[i] <= 'z'){
            cnt2++;
        }
    }
    cout << cnt2 << " " << cnt1;
}   