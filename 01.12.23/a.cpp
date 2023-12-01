#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> v1;
    vector<string> v2;
    for(int i = 0;i < n;i++){
        string s;cin >> s;
        int x;cin >> x;
        v2.push_back(s);
        v1.push_back(x);
    }
    sort(v2.begin(),v2.end());
    sort(v1.begin(),v1.end());
    for(int i = 0;i < n;i++){
        cout << v2[i] << " " << v1[i] << "\n";
    }
    
}