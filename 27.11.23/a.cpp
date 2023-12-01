#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,string> M;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        string name,id;
        cin >> name >> id;
        M[name] = id;
    }
    map<string,string>::iterator it;
    // cout << endl;
    M["Beibarys"] = "23B005";
    for(it = M.begin();it != M.end();it++){
        cout << it->first << " " << it->second << "\n";
    }
}