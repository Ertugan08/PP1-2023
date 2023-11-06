#include <bits/stdc++.h>  
using namespace std;  

int Sum(string s,int ind,int sum = 0){
    if(ind == s.size())
        return sum;
    sum +=(s[ind]-'0');
    return Sum(s,ind+1,sum); 
}

int main(){
    string s;cin >> s;
    cout << Sum(s,0); 
}