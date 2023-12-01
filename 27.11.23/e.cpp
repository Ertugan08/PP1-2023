#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,string> M;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        string log,pass;
        cin >> log >> pass;
        M[log] = pass;
    }
    int m;cin >> m;
    for(int i = 0;i < m;i++){
        string log,pass;
        cin >> log >> pass;
        if(M[log] == ""){
            cout << "login error\n";
        }else if(M[log] == pass)
            cout << "correct password\n";
        else 
            cout << "password error\n";
    }
}