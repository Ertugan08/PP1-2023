#include <bits/stdc++.h>  
using namespace std;  

int Even(string s,int ind, int cnt = 0){
    if(ind == s.size())
        return cnt;
    if((s[ind]-'0')%2 == 0){
        cnt++;
    }
    return Even(s,ind+1,cnt);
}

int main(){
    string s;cin >> s;
    cout << Even(s,0); 
}