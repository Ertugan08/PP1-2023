#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    int cnt1=0,cnt2=0;
    for(int i = 0;i < s.size();i++){
        if(s[i] <= 'z' and s[i] >= 'a')
            cnt1++;
        else 
            cnt2++;
    }
    if(s.size() % 2 == 1){
        cout << -1;
        return 0;
    }
    int diff = abs(cnt1-cnt2);
    if(cnt1 > cnt2){
        cout << (diff/2)*1;
    }else if(cnt2>cnt1){
        cout << (diff/2)*2;
    }else 
        cout << 0;
}