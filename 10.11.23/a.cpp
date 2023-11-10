#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin >> n;
    vector<pair<int,int> > v;
    for(int i = 0;i < n/2;i++){
        int x,y;cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    int mx = 0;
    for(int i = 0;i < v.size()-1;i++){
        int diff = v[i+1].first - v[i].second;
        if(diff > mx)
            mx = diff; 
    }
    cout << mx;
    return 0;
}