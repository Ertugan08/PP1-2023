#include <bits/stdc++.h>

using namespace std;
int main() {
    string s;cin >> s;
    int odd = 0,even = 0;
    //'2'
    //'2'-'0'
    //50 - 48 = 2
    //'3'-'0' = 3
    //51 - 48 = 3
    //'0'-'0' = 0
    //48 - 48 = 0
    for(int i = 0;i < s.size();i++){
        if(i % 2 == 0){
            even += (s[i] - '0');
        }else 
            odd += (s[i] - '0');
    }
    if(even == odd)
        cout << "YES";
    else 
        cout << "NO";
}   