#include<bits/stdc++.h>
using namespace std;

bool check(int x){
    set<int> s;
    s.insert(x%10);
    x/=10;
    s.insert(x%10);
    x/=10;
    s.insert(x%10);
    x/=10;
    s.insert(x%10);
    return 4 == s.size();
}

int main(){
    int x;cin >> x;
    x++;
    while(!check(x)){
        x++;
    }
    cout << x;
}