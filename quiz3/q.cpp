#include<bits/stdc++.h>
using namespace std;

int main(){
    string em = "@gmail.com";
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        string s;cin >> s;
        if(s.find(em) != -1){
            for(int i = 0; i < s.size()-em.size();i++)
                cout << s[i];
            cout << endl;
        }
    }
}   