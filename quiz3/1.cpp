#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    string z = s;
    reverse(z.begin(),z.end());
    int cnt = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] <= '9' and s[i] >= '0'){
            cnt++;
        }
    }
    if(cnt >= 3 and s.size() <= 10 and s!=z){
        cout << "YES";
    }else 
        cout << "NO";
}