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
    v.push_back(10);
    v.push_back(-2);
    v.pop_back();
    for(int i = 0;i < v.size();i++)
        cout << v[i] << " ";
    return 0;
}