#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,z;cin >> s >> z;
    for(int i = 0;i < s.size();i++){
        string cur = "";
        for(int j = i;j < i + z.size();j++){
            cur += s[j];
        }
        if(cur == z){
            cout << i << " ";
        }
    }
}