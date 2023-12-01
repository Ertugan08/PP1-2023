#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> M;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        string serial;
        int series;
        cin >> serial >> series;
        M[serial] += series; 
    }
    map<string,int>::iterator it;
    for(it = M.begin();it != M.end();it++){
        cout << it->first << " " << it->second << "\n";
    }
}