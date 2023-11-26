#include<bits/stdc++.h>
using namespace std;

char rec(string s,int ind = 0){
    if(ind == s.size())
        return '-';
    if(s[ind] <= 'Z' and s[ind] >= 'A'){
        return s[ind];
    }
    return rec(s,ind+1);
}

int main(){
    string s;cin >> s;
    cout << rec(s);
}