#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int count(string s){
    int cnt = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] >= '0' and s[i] <= '9')
            cnt++;
    }
    return cnt;
}

int main(){
    string s;cin >> s;
    int n;cin >> n;
    int cnt = count(s);
    if(cnt >= n)
        cout << "YES";
    else 
        cout<< "NO";
}