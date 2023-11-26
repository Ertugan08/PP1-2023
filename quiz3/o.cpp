#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;  
    int cnt = 0;
    int mx = -1;
    char c;
    for(int i = 0;i < s.size();i++){
        if(s[i] == s[i+1]){
            cnt++;
        }else{
            if(mx < cnt){
                c = s[i];
                mx = cnt;
            }
            cnt = 0;
        }
    }
    cout << c << " " << mx + 1;
}   