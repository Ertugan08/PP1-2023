#include<bits/stdc++.h>
using namespace std;

bool Check(string s){
    for(int i = 0;i < s.size();i++)
        if(s[i] >= '0' and s[i] <= '9')
            return false;
    return true;
}

int main(){
    string s;
    while(cin >> s){
        if(Check(s)){
            cout << s << "\n";
        }
    }
}