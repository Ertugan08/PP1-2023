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
    //v.erase(v.begin()+2);
    //v.erase(v.begin()+2,v.begin()+5);
    v.erase(v.begin(),v.end());
    //begin = 0;
    //end = v.size()
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
}