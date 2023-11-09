#include<bits/stdc++.h>
#include <vector>

using namespace std;

int main (){
    vector<int> v;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        v.push_back(x);
    }
    int a,b;cin >> a >> b;
    v.erase(v.begin()+a,v.begin()+b+1);
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
}