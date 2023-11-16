#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    reverse(s.begin(),s.end());
    int i = 0,sum = 0,pw = 1;
    while(i != s.size()){
        if(s[i] == '1')
            sum += pw;
        pw *= 2;
        i++;
    }
    cout << sum;
}