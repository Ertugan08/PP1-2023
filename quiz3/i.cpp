#include<bits/stdc++.h>
using namespace std;



int main(){
    string s,z;
    cin >> s >> z;
    char c;cin >> c;
    for(int i = 0;i < z.size();i++){
        for(int j = 0;j < s.size();j++){
            if(s[j] == z[i]){
                s[j] = c;
            }
        }
    }
    cout << s;
}