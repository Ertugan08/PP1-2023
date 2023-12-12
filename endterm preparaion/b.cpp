//a,b,c --> 3,...,  23<--x,y,z 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    //c-->100,x-->120
    for(int i = 0;i < s.size();i++){
        s[i] = ('a'+26-s[i]+'a'-1);
    } 
    cout  << s;
}