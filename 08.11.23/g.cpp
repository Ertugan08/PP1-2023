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
    //v.assign(5,0);
    //v.insert(v.begin() + 3,10,3);
    //v.resize(5);
    v.resize(12,100);
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
}