#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<int,int>,int> m;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int x,y;cin >> x >> y;
        cout << m[make_pair(x,y)] << "\n";
        if(x != y){
            m[make_pair(x,y)] += 1;
            m[make_pair(y,x)] += 1;
        }else 
            m[make_pair(x,y)] += 1;
    }
}