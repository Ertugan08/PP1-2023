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
    v.insert(v.begin()+3,10);
    v.insert(v.begin() + 3,10,3);
    v.clear();
    v.push_back(1);
    if(v.empty()){
        cout << "Empty";
    }

}