#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n,b,k;
    cin >> a >> n >> b >> k;
    string s1,s2;
    //10
    //10 % 2 = 0
    //10 / 2 = 5
    //5 % 2 = 1
    //5 / 2 = 2
    //2 % 2 = 0
    //2 / 2 = 1
    //1 % 2 = 1
    //1 / 2 = 0
    //0101
    //
    //1010
    //
    //char(0)
    //
    while(a != 0){
        s1 = char(a % 2 + '0') + s1;
        a/=2;
    }
    //'0' = 65
    // 0 = 
    //0 + ('0' --> 65) 65 
    //1 + 65 = 66
    //1 = 66
    while(b != 0){
        s2 = char(b % 2 ) + s2;
        b/=2;
    }
    if(s1[s1.size()-1-n] == s2[s2.size()-1-k]){
        cout << "Money was found";
    }else 
        cout << "Where is the money Lebowski?";
}