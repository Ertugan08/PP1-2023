#include<bits/stdc++.h>
#include<set>

using namespace std;

//n = 6
//1 6 8 8 3 1
//odd:2, even:2
int main (){
    set<int> s;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        s.insert(x);
    }
    int k;cin >> k;
    set<int>::iterator it;
    for(it = s.begin();it != s.end();it++){
        if(*it == k){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}