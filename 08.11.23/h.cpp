#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main (){
    vector<int> v;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        v.push_back(x);
    }
    reverse(v.begin()+1,v.end()-1);
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
}