#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int x,y;cin >> x >> y;
        d.push_front(x);
        d.push_back(y);
    }
    d.pop_back();
    d.pop_front();
    d.insert(d.begin(),3);
    for(int i = 0;i < d.size();i++){
        cout << d[i] << " ";
    }
}