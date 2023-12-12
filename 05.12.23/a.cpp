//map<pair<pair<string,int>,pair<string,int>, int>
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<pair<string,int>,pair<string,int> >, int> m;
    int n;cin >> n;
    int n1,n2;
    string s1,s2;
    for(int i = 0;i < n;i++){
        cin >> s1 >> n1 >> s2 >> n2;
        m[make_pair(make_pair(s1,n1),make_pair(s2,n2))] = n1+n2;
    }
    map<pair<pair<string,int>,pair<string,int> >, int>::iterator it;
    for(it = m.begin();it != m.end();it++){
        cout << it->first.first.first << " and " << it->first.second.first  << " " << it->second << "\n";
    }    
}
//->first