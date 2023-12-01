#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,bool> M;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        string name;
        cin >> name;
        if(M[name] == true){
            cout << "user already exists\n";
        }else{
            M[name] = true;
            cout << "new user added\n";
        }
    }
    
}