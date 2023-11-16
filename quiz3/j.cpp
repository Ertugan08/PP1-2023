#include<bits/stdc++.h>
using namespace std;

bool IsPal(string s,int l,int r){//IsPal(s,1,6)
    while(true){
        if(l >= r)
            break;
        if(s[l] == s[r]){
            l++;
            r--; 
        }else 
            return false;
    }
    return true;
}

int main(){
    string s;cin >> s;
    int mx = 0;
    for(int i = 0;i < s.size();i++){
        for(int j = i ;j < s.size();j++){
            if(!IsPal(s,i,j)){
                //cout << i << " " << j;
                mx = max(mx,j-i+1);
                //0 5
                //5 - 0 = 5 + 1
                //0 0
                //0 + 1 = 1
            }
        }
    }
    
    cout << mx;    
}