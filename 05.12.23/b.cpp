//map<pair<pair<string,int>,pair<string,int>, int>
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> m;
    //m[char]++; 
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        string s;cin >> s;
        sort(s.begin(),s.end());
        for(int j = 0;j < s.size();j++){
            if(j == 0 or s[j] != s[j-1]){
                m[s[j]]++;
            }
        }
    }
    map<char,int>::iterator it;

    bool ok = false;
    for(it = m.begin();it != m.end();it++){
        if(it->second == n){
            cout << it->first << " ";
            ok = true;
        }   
    }
    if(!ok){
        cout << "NO COMMON CHARACTERS";
    }
}