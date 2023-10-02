#include <bits/stdc++.h>

using namespace std;

int a[10];
//int a[26] --> s,b[26] --> z
//a[s[i]-'a']
//a[i] == b[i]
int main() {
    string s;cin >> s;
    for(int i = 0;i < s.size();i++){
        a[s[i]-'0']++;
    }

    int g = -1;
    for(int i =0;i < 10;i++){
        if(a[i] > 0 and g == -1){
            g = a[i];
        }
        if(a[i] != g and a[i] != 0 and g != -1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}